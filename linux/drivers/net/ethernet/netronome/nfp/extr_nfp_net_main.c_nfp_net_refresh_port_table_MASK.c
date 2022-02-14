
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_port {int flags; TYPE_1__* app; } ;
struct nfp_pf {int port_refresh_work; int wq; } ;
struct TYPE_2__ {struct nfp_pf* pf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct nfp_port *VAR_1)
{
 struct nfp_pf *VAR_2 = VAR_1->app->pf;

 FUNC_1(VAR_0, &VAR_1->flags);

 FUNC_0(VAR_2->wq, &VAR_2->port_refresh_work);
}
