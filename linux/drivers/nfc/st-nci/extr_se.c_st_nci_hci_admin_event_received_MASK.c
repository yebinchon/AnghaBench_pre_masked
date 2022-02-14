
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int se_active; int se_active_timer; int req_completion; } ;
struct st_nci_info {TYPE_2__ se_info; } ;
struct sk_buff {int dummy; } ;
struct nci_dev {TYPE_1__* nfc_dev; } ;
struct TYPE_3__ {int dev; } ;



 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 struct st_nci_info* FUNC_5 (struct nci_dev*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void FUNC_7(struct nci_dev *VAR_2,
           u8 VAR_3, struct sk_buff *VAR_4)
{
 struct st_nci_info *VAR_5 = FUNC_5(VAR_2);

 switch (VAR_3) {
 case 128:
  if (VAR_5->se_info.se_active) {
   if (!FUNC_0(VAR_4)) {
    FUNC_2(&VAR_5->se_info.se_active_timer);
    VAR_5->se_info.se_active = 0;
    FUNC_1(&VAR_5->se_info.req_completion);
   } else {
    FUNC_3(&VAR_5->se_info.se_active_timer,
          VAR_1 +
          FUNC_4(VAR_0));
   }
  }
 break;
 default:
  FUNC_6(&VAR_2->nfc_dev->dev, "Unexpected event on admin gate\n");
 }
}
