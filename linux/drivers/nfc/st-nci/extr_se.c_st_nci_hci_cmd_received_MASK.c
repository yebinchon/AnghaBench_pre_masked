
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {int se_active; int req_completion; int se_active_timer; } ;
struct st_nci_info {TYPE_3__ se_info; } ;
struct sk_buff {int dummy; } ;
struct nci_dev {TYPE_2__* hci_dev; } ;
struct TYPE_5__ {int count_pipes; int expected_pipes; TYPE_1__* pipes; } ;
struct TYPE_4__ {size_t gate; int host; } ;



 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct st_nci_info* FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (char*,size_t) ;

void FUNC_4(struct nci_dev *VAR_2, u8 VAR_3, u8 VAR_4,
          struct sk_buff *VAR_5)
{
 struct st_nci_info *VAR_6 = FUNC_2(VAR_2);
 u8 VAR_7 = VAR_2->hci_dev->pipes[VAR_3].gate;

 FUNC_3("cmd: %x\n", VAR_4);

 switch (VAR_4) {
 case 128:
  if (VAR_7 != VAR_0 &&
      VAR_2->hci_dev->pipes[VAR_3].host != VAR_1)
   VAR_2->hci_dev->count_pipes++;

  if (VAR_2->hci_dev->count_pipes ==
      VAR_2->hci_dev->expected_pipes) {
   FUNC_1(&VAR_6->se_info.se_active_timer);
   VAR_6->se_info.se_active = 0;
   VAR_2->hci_dev->count_pipes = 0;
   FUNC_0(&VAR_6->se_info.req_completion);
  }
 break;
 }
}
