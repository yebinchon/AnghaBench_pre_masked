
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_repr {TYPE_2__* netdev; TYPE_1__* app; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int cpp; } ;


 int FUNC_0 (struct nfp_repr*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct nfp_repr*) ;

void FUNC_3(struct nfp_repr *VAR_0)
{
 FUNC_1(VAR_0->app->cpp, "Destroying Representor(%s)\n",
   VAR_0->netdev->name);
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
}
