
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn544_hci_info {int (* fw_download ) (int ,char const*,int ) ;int phy_id; } ;
struct nfc_hci_dev {int sw_romlib; } ;


 int VAR_0 ;
 struct pn544_hci_info* FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_1,
     const char *VAR_2)
{
 struct pn544_hci_info *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->fw_download == ((void*)0))
  return -VAR_0;

 return VAR_3->fw_download(VAR_3->phy_id, VAR_2, VAR_1->sw_romlib);
}
