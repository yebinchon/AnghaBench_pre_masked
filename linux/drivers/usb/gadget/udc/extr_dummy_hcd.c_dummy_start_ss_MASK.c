
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dummy_hcd {int urbp_list; scalar_t__ stream_en_ep; int rh_state; int timer; } ;
struct TYPE_3__ {int otg_port; } ;
struct TYPE_4__ {int uses_new_polling; TYPE_1__ self; int state; int power_budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dummy_hcd*) ;
 TYPE_2__* FUNC_3 (struct dummy_hcd*) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dummy_hcd *VAR_5)
{
 FUNC_4(&VAR_5->timer, VAR_4, 0);
 VAR_5->rh_state = VAR_0;
 VAR_5->stream_en_ep = 0;
 FUNC_0(&VAR_5->urbp_list);
 FUNC_3(VAR_5)->power_budget = VAR_2;
 FUNC_3(VAR_5)->state = VAR_1;
 FUNC_3(VAR_5)->uses_new_polling = 1;



 return 0;


 return FUNC_1(FUNC_2(VAR_5), &VAR_3);
}
