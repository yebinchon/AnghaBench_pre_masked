
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vf_resources {unsigned int nvi; int niqflint; unsigned int nethctrl; unsigned int neq; int pmask; } ;
struct TYPE_4__ {unsigned int max_ethqsets; } ;
struct TYPE_3__ {unsigned int nports; struct vf_resources vfres; } ;
struct adapter {TYPE_2__ sge; TYPE_1__ params; int pdev_dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int,...) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_4)
{
 struct vf_resources *VAR_5 = &VAR_4->params.vfres;
 unsigned int VAR_6, VAR_7;




 VAR_4->params.nports = VAR_5->nvi;
 if (VAR_4->params.nports > VAR_1) {
  FUNC_0(VAR_4->pdev_dev, "only using %d of %d maximum"
    " allowed virtual interfaces\n", VAR_1,
    VAR_4->params.nports);
  VAR_4->params.nports = VAR_1;
 }






 VAR_7 = FUNC_1(VAR_4->params.vfres.pmask);
 if (VAR_7 < VAR_4->params.nports) {
  FUNC_0(VAR_4->pdev_dev, "only using %d of %d provisioned"
    " virtual interfaces; limited by Port Access Rights"
    " mask %#x\n", VAR_7, VAR_4->params.nports,
    VAR_4->params.vfres.pmask);
  VAR_4->params.nports = VAR_7;
 }
 VAR_6 = VAR_5->niqflint - 1 - (VAR_3 == VAR_2);
 if (VAR_5->nethctrl != VAR_6)
  VAR_6 = FUNC_2(VAR_5->nethctrl, VAR_6);
 if (VAR_5->neq < VAR_6*2)
  VAR_6 = VAR_5->neq/2;
 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 VAR_4->sge.max_ethqsets = VAR_6;

 if (VAR_4->sge.max_ethqsets < VAR_4->params.nports) {
  FUNC_0(VAR_4->pdev_dev, "only using %d of %d available"
    " virtual interfaces (too few Queue Sets)\n",
    VAR_4->sge.max_ethqsets, VAR_4->params.nports);
  VAR_4->params.nports = VAR_4->sge.max_ethqsets;
 }
}
