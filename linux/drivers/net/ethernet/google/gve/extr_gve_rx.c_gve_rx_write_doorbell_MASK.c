
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct gve_rx_ring {int fill_cnt; TYPE_1__* q_resources; } ;
struct gve_priv {int * db_bar2; } ;
struct TYPE_2__ {int db_index; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct gve_priv *VAR_0, struct gve_rx_ring *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->q_resources->db_index);

 FUNC_1(VAR_1->fill_cnt, &VAR_0->db_bar2[VAR_2]);
}
