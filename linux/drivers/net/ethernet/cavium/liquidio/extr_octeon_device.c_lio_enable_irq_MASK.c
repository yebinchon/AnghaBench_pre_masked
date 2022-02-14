
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct octeon_instr_queue {int inst_cnt_reg; struct octeon_device* oct_dev; int lock; scalar_t__ pkts_processed; int pkt_in_done; } ;
struct octeon_droq {int pkts_sent_reg; struct octeon_device* oct_dev; scalar_t__ pkt_count; int pkts_pending; } ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int,int ) ;

void FUNC_8(struct octeon_droq *VAR_1, struct octeon_instr_queue *VAR_2)
{
 u64 VAR_3;
 u32 VAR_4;
 struct octeon_device *VAR_5 = ((void*)0);


 if (VAR_1) {
  VAR_4 = (u32)FUNC_2(&VAR_1->pkts_pending);
  FUNC_6(VAR_1->pkt_count - VAR_4, VAR_1->pkts_sent_reg);
  VAR_1->pkt_count = VAR_4;
  VAR_5 = VAR_1->oct_dev;
 }
 if (VAR_2) {
  FUNC_4(&VAR_2->lock);
  FUNC_6(VAR_2->pkts_processed, VAR_2->inst_cnt_reg);
  VAR_2->pkt_in_done -= VAR_2->pkts_processed;
  VAR_2->pkts_processed = 0;

  FUNC_5(&VAR_2->lock);
  VAR_5 = VAR_2->oct_dev;
 }



 if (VAR_5 && (FUNC_0(VAR_5) || FUNC_1(VAR_5))) {
  if (VAR_1)
   FUNC_7(VAR_0, VAR_1->pkts_sent_reg);

  else if (VAR_2) {
   VAR_3 = FUNC_3(VAR_2->inst_cnt_reg);
   FUNC_7(((VAR_3 & 0xFFFFFFFF00000000ULL) |
    VAR_0),
          VAR_2->inst_cnt_reg);
  }
 }
}
