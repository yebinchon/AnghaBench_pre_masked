
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi {struct ath6kl* parent_dev; } ;
struct ath6kl_vif {int flags; } ;
struct ath6kl {int event_wq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct wmi *VAR_1,
            struct ath6kl_vif *VAR_2)
{
 struct ath6kl *VAR_3 = VAR_1->parent_dev;

 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(&VAR_3->event_wq);

 return 0;
}
