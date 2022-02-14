
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_scu_ipc_dev {int ipc_base; int cmd_complete; scalar_t__ irq_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct intel_scu_ipc_dev *VAR_1, u32 VAR_2)
{
 if (VAR_1->irq_mode) {
  FUNC_0(&VAR_1->cmd_complete);
  FUNC_1(VAR_2 | VAR_0, VAR_1->ipc_base);
 }
 FUNC_1(VAR_2, VAR_1->ipc_base);
}
