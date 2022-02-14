
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_rx_ring_info {int rx_next_cons; TYPE_1__* bnapi; } ;
struct bnxt {int sp_event; } ;
struct TYPE_2__ {int in_reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_1, struct bnxt_rx_ring_info *VAR_2)
{
 if (!VAR_2->bnapi->in_reset) {
  VAR_2->bnapi->in_reset = 1;
  FUNC_1(VAR_0, &VAR_1->sp_event);
  FUNC_0(VAR_1);
 }
 VAR_2->rx_next_cons = 0xffff;
}
