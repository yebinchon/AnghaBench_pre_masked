
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct timer_list {int dummy; } ;
struct TYPE_3__ {int bwi_active; int xch_error; int cb_context; int (* cb ) (int ,int *,int ,int ) ;} ;
struct st21nfca_hci_info {TYPE_1__ se_info; int hdev; } ;
struct TYPE_4__ {int bwi_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct st21nfca_hci_info* FUNC_0 (int ,struct timer_list*,int ) ;
 struct st21nfca_hci_info* VAR_5 ;
 int FUNC_1 (int ,int ,int ,int*,int) ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_7)
{
 u8 VAR_8 = 0x01;
 struct st21nfca_hci_info *VAR_9 = FUNC_0(VAR_9, VAR_7,
          VAR_6.bwi_timer);

 FUNC_2("\n");

 VAR_9->se_info.bwi_active = 0;

 if (!VAR_9->se_info.xch_error) {
  VAR_9->se_info.xch_error = 1;
  FUNC_1(VAR_9->hdev, VAR_1,
    VAR_4, ((void*)0), 0);
 } else {
  VAR_9->se_info.xch_error = 0;
  FUNC_1(VAR_9->hdev, VAR_2,
    VAR_3, &VAR_8, 1);
 }
 VAR_9->se_info.cb(VAR_9->se_info.cb_context, ((void*)0), 0, -VAR_0);
}
