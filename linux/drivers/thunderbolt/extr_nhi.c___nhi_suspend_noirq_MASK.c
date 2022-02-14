
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_nhi {TYPE_1__* ops; } ;
struct tb {struct tb_nhi* nhi; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* suspend_noirq ) (struct tb_nhi*,int) ;} ;


 struct tb* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct tb_nhi*,int) ;
 int FUNC_2 (struct tb*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, bool VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_3(VAR_0);
 struct tb *VAR_3 = FUNC_0(VAR_2);
 struct tb_nhi *VAR_4 = VAR_3->nhi;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->ops && VAR_4->ops->suspend_noirq) {
  VAR_5 = VAR_4->ops->suspend_noirq(VAR_3->nhi, VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
