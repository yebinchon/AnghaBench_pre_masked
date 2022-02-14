
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufx_data {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ufx_data*,int,int,int) ;
 int FUNC_2 (struct ufx_data*,int,int*) ;
 int FUNC_3 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ufx_data *VAR_0)
{
 u32 VAR_1;


 int VAR_2 = FUNC_3(VAR_0, 0x106C, 0x00);
 FUNC_0(VAR_2, "failed to disable I2C");



 VAR_2 = FUNC_3(VAR_0, 0x1018, 12);
 FUNC_0(VAR_2, "error writing 0x1018");


 VAR_2 = FUNC_3(VAR_0, 0x1014, 6);
 FUNC_0(VAR_2, "error writing 0x1014");

 VAR_2 = FUNC_2(VAR_0, 0x1000, &VAR_1);
 FUNC_0(VAR_2, "error reading 0x1000");


 VAR_1 &= ~(0x06);
 VAR_1 |= 0x02;


 VAR_1 &= ~(0x10);


 VAR_1 |= 0x21;

 VAR_2 = FUNC_3(VAR_0, 0x1000, VAR_1);
 FUNC_0(VAR_2, "error writing 0x1000");


 VAR_2 = FUNC_1(VAR_0, 0x1004, 0xC00, 0x000);
 FUNC_0(VAR_2, "error setting TX mode bits in 0x1004");


 VAR_2 = FUNC_3(VAR_0, 0x106C, 0x01);
 FUNC_0(VAR_2, "failed to enable I2C");

 return 0;
}
