
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int enable_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{

 if (!FUNC_1(&VAR_1->enable_cnt))
  return;

 FUNC_0(VAR_1, VAR_0);
}
