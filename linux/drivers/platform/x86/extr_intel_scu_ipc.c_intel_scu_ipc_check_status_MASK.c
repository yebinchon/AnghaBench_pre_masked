
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_scu_ipc_dev {scalar_t__ irq_mode; } ;


 int FUNC_0 (struct intel_scu_ipc_dev*) ;
 int FUNC_1 (struct intel_scu_ipc_dev*) ;

__attribute__((used)) static int FUNC_2(struct intel_scu_ipc_dev *VAR_0)
{
 return VAR_0->irq_mode ? FUNC_1(VAR_0) : FUNC_0(VAR_0);
}
