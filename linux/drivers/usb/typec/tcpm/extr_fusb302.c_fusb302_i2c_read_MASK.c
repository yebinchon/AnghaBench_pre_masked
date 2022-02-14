
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fusb302_chip {int i2c_client; } ;


 int FUNC_0 (struct fusb302_chip*,char*,scalar_t__,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fusb302_chip *VAR_0,
       u8 VAR_1, u8 *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_1(VAR_0->i2c_client, VAR_1);
 *VAR_2 = (u8)VAR_3;
 if (VAR_3 < 0)
  FUNC_0(VAR_0, "cannot read %02x, ret=%d", VAR_1, VAR_3);

 return VAR_3;
}
