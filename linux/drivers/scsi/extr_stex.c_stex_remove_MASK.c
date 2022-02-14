
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_hba {int host; int mu_status; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 struct st_hba* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct st_hba*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct st_hba*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_3)
{
 struct st_hba *VAR_4 = FUNC_1(VAR_3);

 VAR_4->mu_status = VAR_1;
 FUNC_2(VAR_4, VAR_0);
 FUNC_5(VAR_4->host);

 FUNC_3(VAR_4->host);

 FUNC_6(VAR_4);

 FUNC_4(VAR_4->host);

 FUNC_0(VAR_3);

 FUNC_7(&VAR_2);
}
