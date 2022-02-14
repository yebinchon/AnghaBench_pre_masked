
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie {TYPE_1__* ops; struct dw_pcie* pci; } ;
struct dw_pcie {int dummy; } ;
struct TYPE_2__ {int (* ltssm_enable ) (struct qcom_pcie*) ;} ;


 scalar_t__ FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct qcom_pcie*) ;

__attribute__((used)) static int FUNC_3(struct qcom_pcie *VAR_0)
{
 struct dw_pcie *VAR_1 = VAR_0->pci;

 if (FUNC_0(VAR_1))
  return 0;


 if (VAR_0->ops->ltssm_enable)
  VAR_0->ops->ltssm_enable(VAR_0);

 return FUNC_1(VAR_1);
}
