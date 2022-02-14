
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fm10k_ring {int queue_index; } ;
struct TYPE_4__ {int count; struct fm10k_ring* ring; } ;
struct TYPE_3__ {int count; struct fm10k_ring* ring; } ;
struct fm10k_q_vector {int v_idx; int dbg_q_vector; TYPE_2__ rx; TYPE_1__ tx; struct fm10k_intfc* interface; } ;
struct fm10k_intfc {int dbg_intfc; } ;
typedef int name ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct fm10k_ring*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char*,int) ;

void FUNC_3(struct fm10k_q_vector *VAR_1)
{
 struct fm10k_intfc *VAR_2 = VAR_1->interface;
 char VAR_3[16];
 int VAR_4;

 if (!VAR_2->dbg_intfc)
  return;


 FUNC_2(VAR_3, sizeof(VAR_3), "q_vector.%03d", VAR_1->v_idx);

 VAR_1->dbg_q_vector = FUNC_0(VAR_3, VAR_2->dbg_intfc);


 for (VAR_4 = 0; VAR_4 < VAR_1->tx.count; VAR_4++) {
  struct fm10k_ring *VAR_5 = &VAR_1->tx.ring[VAR_4];

  FUNC_2(VAR_3, sizeof(VAR_3), "tx_ring.%03d", VAR_5->queue_index);

  FUNC_1(VAR_3, 0600,
        VAR_1->dbg_q_vector, VAR_5,
        &VAR_0);
 }


 for (VAR_4 = 0; VAR_4 < VAR_1->rx.count; VAR_4++) {
  struct fm10k_ring *VAR_6 = &VAR_1->rx.ring[VAR_4];

  FUNC_2(VAR_3, sizeof(VAR_3), "rx_ring.%03d", VAR_6->queue_index);

  FUNC_1(VAR_3, 0600,
        VAR_1->dbg_q_vector, VAR_6,
        &VAR_0);
 }
}
