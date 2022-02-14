
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nig_stats {int dummy; } ;
struct host_func_stats {int dummy; } ;
struct TYPE_8__ {int egress_mac_pkt1_lo; int egress_mac_pkt0_lo; void* brb_truncate; void* brb_discard; } ;
struct TYPE_6__ {TYPE_3__ old_nig_stats; void* port_stx; scalar_t__ pmf; } ;
struct bnx2x {void* func_stx; scalar_t__ stats_init; TYPE_1__ port; scalar_t__ stats_counter; scalar_t__ executer_idx; scalar_t__ stats_pending; } ;
struct TYPE_9__ {int fw_mb_param; } ;
struct TYPE_7__ {int port_stx; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int ,char*,void*,void*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (struct bnx2x*,scalar_t__) ;
 int FUNC_7 (struct bnx2x*,scalar_t__,int *,int) ;
 void* FUNC_8 (struct bnx2x*,int ) ;
 int VAR_5 ;
 int FUNC_9 (struct bnx2x*) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 TYPE_3__* FUNC_13 (struct bnx2x*,int ) ;
 int FUNC_14 (struct bnx2x*) ;
 int FUNC_15 (struct bnx2x*,int ) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (TYPE_3__*,int ,int) ;
 TYPE_2__* VAR_8 ;

void FUNC_17(struct bnx2x *VAR_9)
{
 int VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = FUNC_0(VAR_9);

 if (FUNC_5(VAR_9)) {
  FUNC_11(VAR_9);
  return;
 }

 VAR_9->stats_pending = 0;
 VAR_9->executer_idx = 0;
 VAR_9->stats_counter = 0;


 if (!FUNC_1(VAR_9)) {
  VAR_9->port.port_stx = FUNC_8(VAR_9, VAR_8[VAR_10].port_stx);
  VAR_9->func_stx = FUNC_8(VAR_9, VAR_6[VAR_11].fw_mb_param);

 } else {
  VAR_9->port.port_stx = 0;
  VAR_9->func_stx = 0;
 }
 FUNC_4(VAR_0, "port_stx 0x%x  func_stx 0x%x\n",
    VAR_9->port.port_stx, VAR_9->func_stx);


 if (!VAR_9->stats_init && VAR_9->port.pmf && VAR_9->port.port_stx)
  FUNC_15(VAR_9, VAR_5);

 VAR_10 = FUNC_2(VAR_9);

 FUNC_16(&(VAR_9->port.old_nig_stats), 0, sizeof(struct nig_stats));
 VAR_9->port.old_nig_stats.brb_discard =
   FUNC_6(VAR_9, VAR_1 + VAR_10*0x38);
 VAR_9->port.old_nig_stats.brb_truncate =
   FUNC_6(VAR_9, VAR_2 + VAR_10*0x38);
 if (!FUNC_3(VAR_9)) {
  FUNC_7(VAR_9, VAR_3 + VAR_10*0x50,
       &(VAR_9->port.old_nig_stats.egress_mac_pkt0_lo), 2);
  FUNC_7(VAR_9, VAR_4 + VAR_10*0x50,
       &(VAR_9->port.old_nig_stats.egress_mac_pkt1_lo), 2);
 }


 FUNC_12(VAR_9);


 if (VAR_9->stats_init) {
  if (VAR_9->func_stx) {
   FUNC_16(FUNC_13(VAR_9, VAR_7), 0,
          sizeof(struct host_func_stats));
   FUNC_9(VAR_9);
   FUNC_10(VAR_9);
   FUNC_14(VAR_9);
  }
 }

 FUNC_11(VAR_9);
}
