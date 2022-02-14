
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_net {int reconfig_lock; int reconfig_posted; int reconfig_timer_active; scalar_t__ reconfig_sync_present; } ;


 scalar_t__ FUNC_0 (struct nfp_net*,int) ;
 int FUNC_1 (struct nfp_net*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nfp_net *VAR_0, u32 VAR_1)
{
 FUNC_2(&VAR_0->reconfig_lock);


 if (VAR_0->reconfig_sync_present) {
  VAR_0->reconfig_posted |= VAR_1;
  goto done;
 }


 if (!VAR_0->reconfig_timer_active ||
     FUNC_0(VAR_0, 0))
  FUNC_1(VAR_0, VAR_1);
 else
  VAR_0->reconfig_posted |= VAR_1;
done:
 FUNC_3(&VAR_0->reconfig_lock);
}
