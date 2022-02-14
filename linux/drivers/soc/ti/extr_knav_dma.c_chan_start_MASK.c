
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct knav_dma_chan {scalar_t__ direction; int lock; int cfg; TYPE_6__* reg_rx_flow; TYPE_3__* reg_tx_sched; TYPE_1__* reg_chan; } ;
struct TYPE_10__ {scalar_t__ err_mode; int desc_type; int sop_offset; int dst_q; int* fdq; scalar_t__ psinfo_at_sop; scalar_t__ psinfo_present; scalar_t__ einfo_present; } ;
struct TYPE_8__ {int priority; scalar_t__ filt_einfo; scalar_t__ filt_pswords; } ;
struct TYPE_11__ {TYPE_4__ rx; TYPE_2__ tx; } ;
struct knav_dma_cfg {TYPE_5__ u; } ;
struct TYPE_12__ {int * thresh; int * fdq_sel; int tag_sel; int tags; int control; } ;
struct TYPE_9__ {int prio; } ;
struct TYPE_7__ {int control; int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,struct knav_dma_cfg*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct knav_dma_chan *VAR_14,
   struct knav_dma_cfg *VAR_15)
{
 u32 VAR_16 = 0;

 FUNC_1(&VAR_14->lock);
 if ((VAR_14->direction == VAR_10) && VAR_14->reg_chan) {
  if (VAR_15->u.tx.filt_pswords)
   VAR_16 |= VAR_13;
  if (VAR_15->u.tx.filt_einfo)
   VAR_16 |= VAR_12;
  FUNC_3(VAR_16, &VAR_14->reg_chan->mode);
  FUNC_3(VAR_9, &VAR_14->reg_chan->control);
 }

 if (VAR_14->reg_tx_sched)
  FUNC_3(VAR_15->u.tx.priority, &VAR_14->reg_tx_sched->prio);

 if (VAR_14->reg_rx_flow) {
  VAR_16 = 0;

  if (VAR_15->u.rx.einfo_present)
   VAR_16 |= VAR_1;
  if (VAR_15->u.rx.psinfo_present)
   VAR_16 |= VAR_2;
  if (VAR_15->u.rx.err_mode == VAR_11)
   VAR_16 |= VAR_0;
  VAR_16 |= (VAR_15->u.rx.desc_type & VAR_7) << VAR_8;
  if (VAR_15->u.rx.psinfo_at_sop)
   VAR_16 |= VAR_3;
  VAR_16 |= (VAR_15->u.rx.sop_offset & VAR_5)
   << VAR_6;
  VAR_16 |= VAR_15->u.rx.dst_q & VAR_4;

  FUNC_3(VAR_16, &VAR_14->reg_rx_flow->control);
  FUNC_3(0, &VAR_14->reg_rx_flow->tags);
  FUNC_3(0, &VAR_14->reg_rx_flow->tag_sel);

  VAR_16 = VAR_15->u.rx.fdq[0] << 16;
  VAR_16 |= VAR_15->u.rx.fdq[1] & VAR_4;
  FUNC_3(VAR_16, &VAR_14->reg_rx_flow->fdq_sel[0]);

  VAR_16 = VAR_15->u.rx.fdq[2] << 16;
  VAR_16 |= VAR_15->u.rx.fdq[3] & VAR_4;
  FUNC_3(VAR_16, &VAR_14->reg_rx_flow->fdq_sel[1]);

  FUNC_3(0, &VAR_14->reg_rx_flow->thresh[0]);
  FUNC_3(0, &VAR_14->reg_rx_flow->thresh[1]);
  FUNC_3(0, &VAR_14->reg_rx_flow->thresh[2]);
 }


 FUNC_0(&VAR_14->cfg, VAR_15, sizeof(*VAR_15));
 FUNC_2(&VAR_14->lock);

 return 0;
}
