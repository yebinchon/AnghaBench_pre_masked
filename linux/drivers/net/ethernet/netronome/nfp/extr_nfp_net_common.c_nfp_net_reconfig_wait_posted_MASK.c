
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int reconfig_sync_present; int reconfig_lock; } ;


 int FUNC_0 (struct nfp_net*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfp_net *VAR_0)
{
 FUNC_0(VAR_0);

 FUNC_1(&VAR_0->reconfig_lock);
 VAR_0->reconfig_sync_present = 0;
 FUNC_2(&VAR_0->reconfig_lock);
}
