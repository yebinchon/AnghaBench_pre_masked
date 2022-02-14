
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ena_stats {scalar_t__ stat_offset; } ;
struct ena_adapter {TYPE_1__* ena_dev; } ;
struct TYPE_4__ {int stats; } ;
struct TYPE_3__ {TYPE_2__ admin_queue; } ;


 int VAR_0 ;
 struct ena_stats* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ena_adapter *VAR_2, u64 **VAR_3)
{
 const struct ena_stats *VAR_4;
 u32 *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = &VAR_1[VAR_6];

  VAR_5 = (u32 *)((uintptr_t)&VAR_2->ena_dev->admin_queue.stats +
   (uintptr_t)VAR_4->stat_offset);

  *(*VAR_3)++ = *VAR_5;
 }
}
