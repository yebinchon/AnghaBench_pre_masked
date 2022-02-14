
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nig_stats {scalar_t__ brb_truncate; scalar_t__ brb_discard; } ;
struct mac_stx {int dummy; } ;
struct host_port_stats {int host_port_stats_counter; int brb_drop_lo; int brb_drop_hi; struct nig_stats* mac_stx; } ;
struct bnx2x_eth_stats {scalar_t__ nig_timer_max; int eee_tx_lpi; int brb_drop_lo; int brb_drop_hi; struct nig_stats rx_stat_ifhcinbadoctets_hi; int brb_truncate_lo; int brb_truncate_hi; } ;
struct TYPE_5__ {int mac_type; } ;
struct TYPE_4__ {struct nig_stats old_nig_stats; } ;
struct bnx2x {TYPE_2__ link_vars; struct bnx2x_eth_stats eth_stats; TYPE_1__ port; } ;
struct TYPE_6__ {int stat_nig_timer; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*) ;
 size_t FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (int ,char*) ;





 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (struct bnx2x*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct bnx2x*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct bnx2x*) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 void* FUNC_12 (struct bnx2x*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct nig_stats*,struct nig_stats*,int) ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_14(struct bnx2x *VAR_10)
{
 struct nig_stats *VAR_11 = FUNC_12(VAR_10, VAR_7);
 struct nig_stats *VAR_12 = &(VAR_10->port.old_nig_stats);
 struct host_port_stats *VAR_13 = FUNC_12(VAR_10, VAR_9);
 struct bnx2x_eth_stats *VAR_14 = &VAR_10->eth_stats;
 struct {
  u32 lo;
  u32 hi;
 } VAR_15;

 switch (VAR_10->link_vars.mac_type) {
 case 132:
  FUNC_9(VAR_10);
  break;

 case 131:
  FUNC_10(VAR_10);
  break;

 case 129:
 case 128:
  FUNC_11(VAR_10);
  break;

 case 130:
  FUNC_5(VAR_0,
     "stats updated by DMAE but no MAC active\n");
  return -1;

 default:
  FUNC_1("Unknown MAC type\n");
 }

 FUNC_0(VAR_13->brb_drop_hi, VAR_13->brb_drop_lo,
        VAR_11->brb_discard - VAR_12->brb_discard);
 FUNC_0(VAR_14->brb_truncate_hi, VAR_14->brb_truncate_lo,
        VAR_11->brb_truncate - VAR_12->brb_truncate);

 if (!FUNC_4(VAR_10)) {
  FUNC_8(VAR_3,
     VAR_5);
  FUNC_8(VAR_4,
     VAR_6);
 }

 FUNC_13(VAR_12, VAR_11, sizeof(struct nig_stats));

 FUNC_13(&(VAR_14->rx_stat_ifhcinbadoctets_hi), &(VAR_13->mac_stx[1]),
        sizeof(struct mac_stx));
 VAR_14->brb_drop_hi = VAR_13->brb_drop_hi;
 VAR_14->brb_drop_lo = VAR_13->brb_drop_lo;

 VAR_13->host_port_stats_counter++;

 if (FUNC_4(VAR_10)) {
  u32 VAR_16 = FUNC_3(VAR_10) ? VAR_2
       : VAR_1;
  VAR_14->eee_tx_lpi += FUNC_6(VAR_10, VAR_16);
 }

 if (!FUNC_2(VAR_10)) {
  u32 VAR_17 =
   FUNC_7(VAR_10, VAR_8[FUNC_3(VAR_10)].stat_nig_timer);
  if (VAR_17 != VAR_14->nig_timer_max) {
   VAR_14->nig_timer_max = VAR_17;
   FUNC_1("NIG timer max (%u)\n",
      VAR_14->nig_timer_max);
  }
 }

 return 0;
}
