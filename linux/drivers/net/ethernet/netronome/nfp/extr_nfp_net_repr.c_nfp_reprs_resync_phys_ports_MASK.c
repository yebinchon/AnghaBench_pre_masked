
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_reprs {int num_reprs; int * reprs; } ;
struct nfp_repr {TYPE_1__* port; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nfp_repr* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_app*,struct net_device*) ;
 int FUNC_2 (struct nfp_repr*) ;
 struct net_device* FUNC_3 (struct nfp_app*,struct nfp_reprs*,int) ;
 struct nfp_reprs* FUNC_4 (struct nfp_app*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct nfp_app *VAR_2)
{
 struct net_device *VAR_3;
 struct nfp_reprs *VAR_4;
 struct nfp_repr *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_4)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_reprs; VAR_6++) {
  VAR_3 = FUNC_3(VAR_2, VAR_4, VAR_6);
  if (!VAR_3)
   continue;

  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5->port->type != VAR_0)
   continue;

  FUNC_1(VAR_2, VAR_3);
  FUNC_6();
  FUNC_5(VAR_4->reprs[VAR_6], ((void*)0));
  FUNC_7();
  FUNC_8();
  FUNC_2(VAR_5);
 }

 return 0;
}
