
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int idx; } ;
struct st21nfca_hci_info {TYPE_1__ dep_info; } ;
struct nfc_target {int idx; } ;
struct nfc_hci_dev {int dummy; } ;


 struct st21nfca_hci_info* FUNC_0 (struct nfc_hci_dev*) ;
 int FUNC_1 (struct nfc_hci_dev*,int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct nfc_hci_dev *VAR_0,
        struct nfc_target *VAR_1, u8 VAR_2,
        u8 *VAR_3, size_t VAR_4)
{
 struct st21nfca_hci_info *VAR_5 = FUNC_0(VAR_0);

 VAR_5->dep_info.idx = VAR_1->idx;
 return FUNC_1(VAR_0, VAR_3, VAR_4);
}
