
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int se_active; int req_completion; int count_pipes; int se_active_timer; int expected_pipes; } ;
struct st21nfca_hci_info {TYPE_2__ se_info; } ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {TYPE_1__* pipes; } ;
struct TYPE_3__ {size_t gate; int dest_host; } ;



 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct st21nfca_hci_info* FUNC_2 (struct nfc_hci_dev*) ;
 int FUNC_3 (char*,size_t) ;

__attribute__((used)) static void FUNC_4(struct nfc_hci_dev *VAR_2, u8 VAR_3, u8 VAR_4,
    struct sk_buff *VAR_5)
{
 struct st21nfca_hci_info *VAR_6 = FUNC_2(VAR_2);
 u8 VAR_7 = VAR_2->pipes[VAR_3].gate;

 FUNC_3("cmd: %x\n", VAR_4);

 switch (VAR_4) {
 case 128:
  if (VAR_7 != VAR_1 &&
   VAR_2->pipes[VAR_3].dest_host != VAR_0)
   VAR_6->se_info.count_pipes++;

  if (VAR_6->se_info.count_pipes == VAR_6->se_info.expected_pipes) {
   FUNC_1(&VAR_6->se_info.se_active_timer);
   VAR_6->se_info.se_active = 0;
   VAR_6->se_info.count_pipes = 0;
   FUNC_0(&VAR_6->se_info.req_completion);
  }
 break;
 }
}
