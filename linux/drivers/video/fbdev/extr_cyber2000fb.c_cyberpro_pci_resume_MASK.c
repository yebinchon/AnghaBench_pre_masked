
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cfb_info {int dummy; } ;


 int FUNC_0 (struct cfb_info*) ;
 int FUNC_1 (struct cfb_info*) ;
 struct cfb_info* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0)
{
 struct cfb_info *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
 }

 return 0;
}
