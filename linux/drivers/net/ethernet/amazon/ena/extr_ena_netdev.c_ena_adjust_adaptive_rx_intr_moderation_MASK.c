
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes; int cnt; } ;
struct ena_ring {scalar_t__ per_napi_packets; TYPE_1__ rx_stats; int non_empty_napi_events; } ;
struct ena_napi {int dim; struct ena_ring* rx_ring; } ;
struct dim_sample {int dummy; } ;


 int FUNC_0 (int ,int ,int ,struct dim_sample*) ;
 int FUNC_1 (int *,struct dim_sample) ;

__attribute__((used)) static void FUNC_2(struct ena_napi *VAR_0)
{
 struct dim_sample VAR_1;
 struct ena_ring *VAR_2 = VAR_0->rx_ring;

 if (!VAR_2->per_napi_packets)
  return;

 VAR_2->non_empty_napi_events++;

 FUNC_0(VAR_2->non_empty_napi_events,
     VAR_2->rx_stats.cnt,
     VAR_2->rx_stats.bytes,
     &VAR_1);

 FUNC_1(&VAR_0->dim, VAR_1);

 VAR_2->per_napi_packets = 0;
}
