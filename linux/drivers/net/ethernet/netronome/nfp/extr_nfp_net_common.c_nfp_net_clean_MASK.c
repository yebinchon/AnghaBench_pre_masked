
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netdev; } ;
struct nfp_net {TYPE_1__ dp; } ;


 int FUNC_0 (struct nfp_net*) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct nfp_net *VAR_0)
{
 if (!VAR_0->dp.netdev)
  return;

 FUNC_2(VAR_0->dp.netdev);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
