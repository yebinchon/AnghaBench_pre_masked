
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_scu_ipc_dev {int dev; int cmd_complete; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct intel_scu_ipc_dev*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline int FUNC_4(struct intel_scu_ipc_dev *VAR_3)
{
 int VAR_4;

 if (!FUNC_3(&VAR_3->cmd_complete, 3 * VAR_2)) {
  FUNC_1(VAR_3->dev, "IPC timed out\n");
  return -VAR_1;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 & FUNC_0(1))
  return -VAR_0;

 return 0;
}
