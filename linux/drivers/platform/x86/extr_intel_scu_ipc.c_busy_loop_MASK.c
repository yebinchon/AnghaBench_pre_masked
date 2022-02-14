
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_scu_ipc_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct intel_scu_ipc_dev*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline int FUNC_4(struct intel_scu_ipc_dev *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = 100000;


 while ((VAR_3 & FUNC_0(0)) && --VAR_4) {
  FUNC_3(1);
  VAR_3 = FUNC_2(VAR_2);
 }

 if (VAR_3 & FUNC_0(0)) {
  FUNC_1(VAR_2->dev, "IPC timed out");
  return -VAR_1;
 }

 if (VAR_3 & FUNC_0(1))
  return -VAR_0;

 return 0;
}
