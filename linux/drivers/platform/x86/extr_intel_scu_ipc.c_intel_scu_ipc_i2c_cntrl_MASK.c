
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_scu_ipc_dev {int * dev; scalar_t__ i2c_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 struct intel_scu_ipc_dev VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,scalar_t__) ;

int FUNC_6(u32 VAR_8, u32 *VAR_9)
{
 struct intel_scu_ipc_dev *VAR_10 = &VAR_6;
 u32 VAR_11 = 0;

 FUNC_1(&VAR_7);
 if (VAR_10->dev == ((void*)0)) {
  FUNC_2(&VAR_7);
  return -VAR_1;
 }
 VAR_11 = (VAR_8 >> 24) & 0xFF;
 if (VAR_11 == VAR_4) {
  FUNC_5(VAR_8, VAR_10->i2c_base + VAR_3);

  FUNC_4(1000, 2000);
  *VAR_9 = FUNC_3(VAR_10->i2c_base + VAR_2);
 } else if (VAR_11 == VAR_5) {
  FUNC_5(*VAR_9, VAR_10->i2c_base + VAR_2);
  FUNC_4(1000, 2000);
  FUNC_5(VAR_8, VAR_10->i2c_base + VAR_3);
 } else {
  FUNC_0(VAR_10->dev,
   "intel_scu_ipc: I2C INVALID_CMD = 0x%x\n", VAR_11);

  FUNC_2(&VAR_7);
  return -VAR_0;
 }
 FUNC_2(&VAR_7);
 return 0;
}
