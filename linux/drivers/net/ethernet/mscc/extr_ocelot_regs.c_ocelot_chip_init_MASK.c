
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot {int shared_queue_sz; int* base_mac; int num_stats; int stats_layout; int map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct ocelot*) ;
 int VAR_0 ;
 int FUNC_3 (struct ocelot*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct ocelot *VAR_3)
{
 int VAR_4;

 VAR_3->map = VAR_1;
 VAR_3->stats_layout = VAR_2;
 VAR_3->num_stats = FUNC_0(VAR_2);
 VAR_3->shared_queue_sz = 224 * 1024;

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3);

 FUNC_1(VAR_3->base_mac);
 VAR_3->base_mac[5] &= 0xf0;

 return 0;
}
