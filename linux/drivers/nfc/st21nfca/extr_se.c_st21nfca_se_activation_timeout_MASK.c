
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int se_active; int req_completion; } ;
struct st21nfca_hci_info {TYPE_1__ se_info; } ;
struct TYPE_4__ {int se_active_timer; } ;


 int FUNC_0 (int *) ;
 struct st21nfca_hci_info* FUNC_1 (int ,struct timer_list*,int ) ;
 struct st21nfca_hci_info* VAR_0 ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct st21nfca_hci_info *VAR_3 = FUNC_1(VAR_3, VAR_2,
          VAR_1.se_active_timer);

 FUNC_2("\n");

 VAR_3->se_info.se_active = 0;

 FUNC_0(&VAR_3->se_info.req_completion);
}
