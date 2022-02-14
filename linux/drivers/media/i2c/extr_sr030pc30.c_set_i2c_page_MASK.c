
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sr030pc30_info {scalar_t__ i2c_reg_page; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct sr030pc30_info *VAR_1,
          struct i2c_client *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5 = VAR_3 >> 8 & 0xFF;

 if (VAR_1->i2c_reg_page != VAR_5 && (VAR_3 & 0xFF) != 0x03) {
  VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_5);
  if (!VAR_4)
   VAR_1->i2c_reg_page = VAR_5;
 }
 return VAR_4;
}
