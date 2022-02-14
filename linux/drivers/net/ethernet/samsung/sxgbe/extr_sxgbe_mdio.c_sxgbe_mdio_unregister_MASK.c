
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_priv_data {TYPE_1__* mii; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int * priv; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct sxgbe_priv_data* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_0)
{
 struct sxgbe_priv_data *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->mii)
  return 0;

 FUNC_1(VAR_1->mii);
 VAR_1->mii->priv = ((void*)0);
 FUNC_0(VAR_1->mii);
 VAR_1->mii = ((void*)0);

 return 0;
}
