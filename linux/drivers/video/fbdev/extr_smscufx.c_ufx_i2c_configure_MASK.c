
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufx_data {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ufx_data*,int,int,int) ;
 int FUNC_2 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ufx_data *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0, 0x106C, 0x00);
 FUNC_0(VAR_1, "failed to disable I2C");

 VAR_1 = FUNC_2(VAR_0, 0x3010, 0x00000000);
 FUNC_0(VAR_1, "failed to write 0x3010");


 VAR_1 = FUNC_1(VAR_0, 0x1004, 0x3FF, (0xA0 >> 1));
 FUNC_0(VAR_1, "failed to set TAR bits in 0x1004");

 VAR_1 = FUNC_2(VAR_0, 0x106C, 0x01);
 FUNC_0(VAR_1, "failed to enable I2C");

 return 0;
}
