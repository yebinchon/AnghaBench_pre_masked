
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct TYPE_2__ {int wiphy; int iftype; } ;
struct qtnf_vif {scalar_t__ cons_tx_timeout_cnt; int reset_work; TYPE_1__ wdev; int bss_priority; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct qtnf_wmac*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct qtnf_wmac *VAR_4)
{
 struct qtnf_vif *VAR_5 = &VAR_4->iflist[VAR_2];

 VAR_5->wdev.iftype = VAR_0;
 VAR_5->bss_priority = VAR_1;
 VAR_5->wdev.wiphy = FUNC_1(VAR_4);
 FUNC_0(&VAR_5->reset_work, VAR_3);
 VAR_5->cons_tx_timeout_cnt = 0;
}
