
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmnet_priv {int pcpu_stats; int gro_cells; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct rmnet_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct rmnet_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->gro_cells);
 FUNC_0(VAR_1->pcpu_stats);
}
