
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocelot {int num_phys_ports; int num_stats; int* stats; int stats_lock; TYPE_1__* stats_layout; } ;
struct TYPE_2__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocelot*,int ,int ) ;
 int FUNC_4 (struct ocelot*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ocelot *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1(&VAR_3->stats_lock);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_phys_ports; VAR_4++) {

  FUNC_4(VAR_3, FUNC_0(VAR_4), VAR_1);

  for (VAR_5 = 0; VAR_5 < VAR_3->num_stats; VAR_5++) {
   u32 VAR_6;
   unsigned int VAR_7 = VAR_4 * VAR_3->num_stats + VAR_5;

   VAR_6 = FUNC_3(VAR_3, VAR_0,
           VAR_3->stats_layout[VAR_5].offset);

   if (VAR_6 < (VAR_3->stats[VAR_7] & VAR_2))
    VAR_3->stats[VAR_7] += (u64)1 << 32;

   VAR_3->stats[VAR_7] = (VAR_3->stats[VAR_7] &
           ~(u64)VAR_2) + VAR_6;
  }
 }

 FUNC_2(&VAR_3->stats_lock);
}
