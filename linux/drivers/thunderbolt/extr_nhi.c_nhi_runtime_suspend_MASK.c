
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_nhi {TYPE_1__* ops; } ;
struct tb {struct tb_nhi* nhi; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* runtime_suspend ) (struct tb_nhi*) ;} ;


 struct tb* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct tb_nhi*) ;
 int FUNC_2 (struct tb*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_3(VAR_0);
 struct tb *VAR_2 = FUNC_0(VAR_1);
 struct tb_nhi *VAR_3 = VAR_2->nhi;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->ops && VAR_3->ops->runtime_suspend) {
  VAR_4 = VAR_3->ops->runtime_suspend(VAR_2->nhi);
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
