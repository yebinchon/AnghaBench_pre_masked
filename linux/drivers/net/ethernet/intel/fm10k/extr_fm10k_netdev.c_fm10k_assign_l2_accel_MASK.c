
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_ring {int l2_accel; } ;
struct fm10k_l2_accel {int dummy; } ;
struct fm10k_intfc {int num_rx_queues; struct fm10k_l2_accel* l2_accel; struct fm10k_ring** rx_ring; } ;


 int FUNC_0 (int ,struct fm10k_l2_accel*) ;

__attribute__((used)) static void FUNC_1(struct fm10k_intfc *VAR_0,
      struct fm10k_l2_accel *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_queues; VAR_2++) {
  struct fm10k_ring *VAR_3 = VAR_0->rx_ring[VAR_2];

  FUNC_0(VAR_3->l2_accel, VAR_1);
 }

 VAR_0->l2_accel = VAR_1;
}
