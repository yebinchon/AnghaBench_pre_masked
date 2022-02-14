
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_hba {int mu_status; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct st_hba* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct st_hba*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1)
{
 struct st_hba *VAR_2 = FUNC_0(VAR_1);

 VAR_2->mu_status = VAR_0;
 FUNC_1(VAR_2);
 return 0;
}
