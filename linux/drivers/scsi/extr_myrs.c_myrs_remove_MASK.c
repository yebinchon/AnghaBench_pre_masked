
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct myrs_hba {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct myrs_hba*) ;
 int FUNC_1 (struct myrs_hba*) ;
 int FUNC_2 (struct myrs_hba*) ;
 struct myrs_hba* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct myrs_hba *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2 == ((void*)0))
  return;

 FUNC_4(VAR_0, VAR_2->host, "Flushing Cache...");
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
}
