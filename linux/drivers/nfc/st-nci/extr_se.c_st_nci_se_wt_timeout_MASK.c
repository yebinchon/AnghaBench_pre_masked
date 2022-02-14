
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct timer_list {int dummy; } ;
struct TYPE_5__ {int bwi_active; int xch_error; int cb_context; int (* cb ) (int ,int *,int ,int ) ;} ;
struct st_nci_info {TYPE_2__ se_info; TYPE_1__* ndlc; } ;
struct TYPE_6__ {int bwi_timer; } ;
struct TYPE_4__ {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct st_nci_info* FUNC_0 (int ,struct timer_list*,int ) ;
 struct st_nci_info* VAR_5 ;
 int FUNC_1 (int ,int ,int ,int*,int) ;
 int FUNC_2 (char*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_3 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_7)
{
 u8 VAR_8 = 0x01;
 struct st_nci_info *VAR_9 = FUNC_0(VAR_9, VAR_7, VAR_6.bwi_timer);

 FUNC_2("\n");

 VAR_9->se_info.bwi_active = 0;

 if (!VAR_9->se_info.xch_error) {
  VAR_9->se_info.xch_error = 1;
  FUNC_1(VAR_9->ndlc->ndev, VAR_1,
    VAR_4, ((void*)0), 0);
 } else {
  VAR_9->se_info.xch_error = 0;
  FUNC_1(VAR_9->ndlc->ndev, VAR_2,
    VAR_3, &VAR_8, 1);
 }
 VAR_9->se_info.cb(VAR_9->se_info.cb_context, ((void*)0), 0, -VAR_0);
}
