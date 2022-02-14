
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int tstats; } ;
struct TYPE_2__ {int dst_cache; } ;
struct geneve_dev {int gro_cells; TYPE_1__ info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct geneve_dev* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct geneve_dev *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(&VAR_1->info.dst_cache);
 FUNC_2(&VAR_1->gro_cells);
 FUNC_1(VAR_0->tstats);
}
