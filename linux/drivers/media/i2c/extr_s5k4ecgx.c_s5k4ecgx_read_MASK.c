
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3, u32 VAR_4, u16 *VAR_5)
{
 u16 VAR_6 = VAR_4 >> 16, VAR_7 = VAR_4 & 0xffff;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_3, VAR_1, VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_1(VAR_3, VAR_2, VAR_7);
 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_3, VAR_0, VAR_5);

 return VAR_8;
}
