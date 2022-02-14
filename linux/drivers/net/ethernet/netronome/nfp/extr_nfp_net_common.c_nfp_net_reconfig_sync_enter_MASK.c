
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct nfp_net {int reconfig_sync_present; int reconfig_timer_active; TYPE_1__ reconfig_timer; int reconfig_lock; scalar_t__ reconfig_posted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct nfp_net*,scalar_t__) ;
 int FUNC_3 (struct nfp_net*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nfp_net *VAR_3)
{
 bool VAR_4 = 0;
 u32 VAR_5;

 FUNC_4(&VAR_3->reconfig_lock);

 FUNC_0(VAR_3->reconfig_sync_present);
 VAR_3->reconfig_sync_present = 1;

 if (VAR_3->reconfig_timer_active) {
  VAR_3->reconfig_timer_active = 0;
  VAR_4 = 1;
 }
 VAR_5 = VAR_3->reconfig_posted;
 VAR_3->reconfig_posted = 0;

 FUNC_5(&VAR_3->reconfig_lock);

 if (VAR_4) {
  FUNC_1(&VAR_3->reconfig_timer);
  FUNC_3(VAR_3, VAR_3->reconfig_timer.expires);
 }


 if (VAR_5) {
  FUNC_2(VAR_3, VAR_5);
  FUNC_3(VAR_3, VAR_2 + VAR_0 * VAR_1);
 }
}
