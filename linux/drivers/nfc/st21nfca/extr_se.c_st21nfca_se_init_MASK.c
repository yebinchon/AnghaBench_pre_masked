
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bwi_active; int se_active; int xch_error; int wt_timeout; scalar_t__ expected_pipes; scalar_t__ count_pipes; int se_active_timer; int bwi_timer; int req_completion; } ;
struct st21nfca_hci_info {TYPE_1__ se_info; } ;
struct nfc_hci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct st21nfca_hci_info* FUNC_2 (struct nfc_hci_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,int ) ;

void FUNC_4(struct nfc_hci_dev *VAR_3)
{
 struct st21nfca_hci_info *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(&VAR_4->se_info.req_completion);

 FUNC_3(&VAR_4->se_info.bwi_timer, VAR_2, 0);
 VAR_4->se_info.bwi_active = 0;

 FUNC_3(&VAR_4->se_info.se_active_timer,
      VAR_1, 0);
 VAR_4->se_info.se_active = 0;

 VAR_4->se_info.count_pipes = 0;
 VAR_4->se_info.expected_pipes = 0;

 VAR_4->se_info.xch_error = 0;

 VAR_4->se_info.wt_timeout =
   FUNC_0(VAR_0);
}
