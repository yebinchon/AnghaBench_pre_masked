
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int netdev; } ;
struct nfp_net {int port; TYPE_1__ dp; } ;
struct nfp_app {int pf; } ;


 int FUNC_0 (int ,struct nfp_app*,struct nfp_net*,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct nfp_app *VAR_0, struct nfp_net *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->pf, VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3 < 0 ? VAR_3 : 0;

 FUNC_1(VAR_0->pf, VAR_1->dp.netdev, VAR_1->port);

 return 0;
}
