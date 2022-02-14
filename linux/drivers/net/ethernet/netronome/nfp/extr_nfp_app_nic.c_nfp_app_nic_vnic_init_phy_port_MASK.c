
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nfp_pf {int eth_tbl; } ;
struct TYPE_7__ {int netdev; } ;
struct nfp_net {TYPE_2__* port; TYPE_1__ dp; } ;
struct nfp_app {int dummy; } ;
struct TYPE_8__ {scalar_t__ type; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (struct nfp_app*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct nfp_pf*,struct nfp_app*,TYPE_2__*,unsigned int) ;

int FUNC_5(struct nfp_pf *VAR_2, struct nfp_app *VAR_3,
       struct nfp_net *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 if (!VAR_2->eth_tbl)
  return 0;

 VAR_4->port = FUNC_2(VAR_3, VAR_1, VAR_4->dp.netdev);
 if (FUNC_0(VAR_4->port))
  return FUNC_1(VAR_4->port);

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4->port, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_4->port);
  return VAR_6;
 }

 return VAR_4->port->type == VAR_0;
}
