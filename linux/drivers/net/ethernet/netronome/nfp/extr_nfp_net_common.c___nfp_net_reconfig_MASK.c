
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_net {int reconfig_sync_present; int reconfig_lock; scalar_t__ reconfig_posted; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nfp_net*,int ) ;
 int FUNC_1 (struct nfp_net*,int ) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (struct nfp_net*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct nfp_net *VAR_3, u32 VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3);

 FUNC_0(VAR_3, VAR_4);
 VAR_5 = FUNC_3(VAR_3, VAR_2 + VAR_0 * VAR_1);

 FUNC_4(&VAR_3->reconfig_lock);

 if (VAR_3->reconfig_posted)
  FUNC_1(VAR_3, 0);

 VAR_3->reconfig_sync_present = 0;

 FUNC_5(&VAR_3->reconfig_lock);

 return VAR_5;
}
