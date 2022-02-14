
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nfp_net {int reconfig_timer_active; int reconfig_lock; scalar_t__ reconfig_posted; scalar_t__ reconfig_sync_present; } ;


 struct nfp_net* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct nfp_net*,int) ;
 int FUNC_2 (struct nfp_net*,int ) ;
 struct nfp_net* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct nfp_net *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_3(&VAR_3->reconfig_lock);

 VAR_3->reconfig_timer_active = 0;


 if (VAR_3->reconfig_sync_present)
  goto done;


 FUNC_1(VAR_3, 1);

 if (VAR_3->reconfig_posted)
  FUNC_2(VAR_3, 0);
done:
 FUNC_4(&VAR_3->reconfig_lock);
}
