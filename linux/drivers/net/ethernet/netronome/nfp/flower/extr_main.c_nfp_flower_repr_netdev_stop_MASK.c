
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_repr {TYPE_1__* netdev; } ;
struct nfp_app {int dummy; } ;
struct TYPE_2__ {int mtu; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct nfp_repr*,int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct nfp_app *VAR_0, struct nfp_repr *VAR_1)
{
 FUNC_0(VAR_1->netdev);

 return FUNC_1(VAR_1, 0, VAR_1->netdev->mtu, 0);
}
