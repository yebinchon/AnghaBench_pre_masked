
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_hci_info {int state; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct st21nfca_hci_info* FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,int *,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_3)
{
 struct st21nfca_hci_info *VAR_4 = FUNC_0(VAR_3);

 VAR_4->state = VAR_2;

 return FUNC_1(VAR_3, VAR_0,
    VAR_1, ((void*)0), 0, ((void*)0));
}
