
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_nhi {int going_away; TYPE_1__* ops; } ;
struct tb {struct tb_nhi* nhi; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* resume_noirq ) (struct tb_nhi*) ;} ;


 int FUNC_0 (struct tb_nhi*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct tb* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct tb_nhi*) ;
 int FUNC_4 (struct tb*) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_5(VAR_0);
 struct tb *VAR_2 = FUNC_2(VAR_1);
 struct tb_nhi *VAR_3 = VAR_2->nhi;
 int VAR_4;






 if (!FUNC_1(VAR_1)) {
  VAR_3->going_away = 1;
 } else {
  if (VAR_3->ops && VAR_3->ops->resume_noirq) {
   VAR_4 = VAR_3->ops->resume_noirq(VAR_3);
   if (VAR_4)
    return VAR_4;
  }
  FUNC_0(VAR_2->nhi);
 }

 return FUNC_4(VAR_2);
}
