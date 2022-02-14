
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int map_capacity; } ;
struct cw1200_common {TYPE_1__ tx_queue_stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0,
       struct cw1200_common *VAR_1,
       const char *VAR_2,
       u32 VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_0, "%s0-> ", VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1->tx_queue_stats.map_capacity; ++VAR_4)
  FUNC_1(VAR_0, "%s ", (VAR_3 & FUNC_0(VAR_4)) ? "**" : "..");
 FUNC_1(VAR_0, "<-%zu\n", VAR_1->tx_queue_stats.map_capacity - 1);
}
