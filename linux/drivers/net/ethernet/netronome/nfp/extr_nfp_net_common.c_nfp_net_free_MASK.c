
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ netdev; } ;
struct nfp_net {TYPE_1__ dp; scalar_t__ reconfig_posted; int reconfig_timer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nfp_net*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct nfp_net*) ;

void FUNC_5(struct nfp_net *VAR_0)
{
 FUNC_0(FUNC_3(&VAR_0->reconfig_timer) || VAR_0->reconfig_posted);
 FUNC_2(VAR_0);

 if (VAR_0->dp.netdev)
  FUNC_1(VAR_0->dp.netdev);
 else
  FUNC_4(VAR_0);
}
