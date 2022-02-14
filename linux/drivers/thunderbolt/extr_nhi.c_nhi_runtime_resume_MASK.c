
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_nhi {TYPE_1__* ops; } ;
struct tb {struct tb_nhi* nhi; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* runtime_resume ) (struct tb_nhi*) ;} ;


 int FUNC_0 (struct tb_nhi*) ;
 struct tb* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct tb_nhi*) ;
 int FUNC_3 (struct tb*) ;
 struct pci_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct pci_dev *VAR_1 = FUNC_4(VAR_0);
 struct tb *VAR_2 = FUNC_1(VAR_1);
 struct tb_nhi *VAR_3 = VAR_2->nhi;
 int VAR_4;

 if (VAR_3->ops && VAR_3->ops->runtime_resume) {
  VAR_4 = VAR_3->ops->runtime_resume(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_0(VAR_3);
 return FUNC_3(VAR_2);
}
