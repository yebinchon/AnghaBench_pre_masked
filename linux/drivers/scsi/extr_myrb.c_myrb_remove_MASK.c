
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct myrb_hba {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct myrb_hba*) ;
 int FUNC_1 (struct myrb_hba*) ;
 int FUNC_2 (struct myrb_hba*,int ,int ) ;
 struct myrb_hba* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_2)
{
 struct myrb_hba *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(VAR_0, VAR_3->host, "Flushing Cache...");
 FUNC_2(VAR_3, VAR_1, 0);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
