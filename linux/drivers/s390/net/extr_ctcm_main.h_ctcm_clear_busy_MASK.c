
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ml_priv; } ;
struct mpc_group {scalar_t__ in_sweep; } ;
struct ctcm_priv {struct mpc_group* mpcg; } ;


 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_0)
{
 struct mpc_group *VAR_1;
 VAR_1 = ((struct ctcm_priv *)VAR_0->ml_priv)->mpcg;

 if (!(VAR_1 && VAR_1->in_sweep))
  FUNC_0(VAR_0);
}
