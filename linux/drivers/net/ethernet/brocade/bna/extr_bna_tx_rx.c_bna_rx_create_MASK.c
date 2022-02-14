
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t u32 ;
struct bnad {int dummy; } ;
struct bna_rxq {size_t q_depth; int num_vecs; struct bna_rcb* rcb; scalar_t__ rxbuf_map_failed; scalar_t__ rxbuf_alloc_failed; scalar_t__ rx_packets_with_error; scalar_t__ rx_bytes; scalar_t__ rx_packets; int buffer_size; int multi_buffer; struct bna_rxp* rxp; struct bna_rx* rx; } ;
struct TYPE_11__ {int msb; int lsb; } ;
struct TYPE_15__ {scalar_t__ intr_type; int coalescing_timeo; int intr_vector; int door_bell; scalar_t__ ib_seg_host_addr_kva; int interpkt_timeo; int interpkt_count; TYPE_2__ ib_seg_host_addr; } ;
struct TYPE_17__ {struct bna_ccb* ccb; TYPE_6__ ib; struct bna_rx* rx; } ;
struct bna_rxp {scalar_t__ type; TYPE_8__ cq; int vector; struct bna_rx* rx; int qe; } ;
struct bna_rx_mod {int flags; int rid_mask; } ;
struct bna_rx_event_cbfn {int rx_post_cbfn; int rx_cleanup_cbfn; int rx_stall_cbfn; int ccb_destroy_cbfn; int (* ccb_setup_cbfn ) (struct bnad*,struct bna_ccb*) ;int rcb_destroy_cbfn; int (* rcb_setup_cbfn ) (struct bnad*,struct bna_rcb*) ;} ;
struct TYPE_18__ {int forced_offset; } ;
struct bna_rx_config {size_t num_paths; scalar_t__ rxp_type; size_t q0_depth; int q0_num_vecs; size_t q1_depth; TYPE_9__ hds_config; int q1_buf_size; int q0_buf_size; int q0_multi_buf; int coalescing_timeo; int rx_type; } ;
struct bna_rx {int type; size_t num_paths; int rid; int rxf; TYPE_9__ hds_cfg; int (* ccb_setup_cbfn ) (struct bnad*,struct bna_ccb*) ;int (* rcb_setup_cbfn ) (struct bnad*,struct bna_rcb*) ;int rxp_q; scalar_t__ rx_flags; struct bna* bna; int rx_post_cbfn; int rx_cleanup_cbfn; int rx_stall_cbfn; int ccb_destroy_cbfn; int rcb_destroy_cbfn; void* priv; int * stop_cbarg; int * stop_cbfn; } ;
struct TYPE_13__ {size_t len; struct bna_mem_descr* mdl; } ;
struct bna_intr_info {int num; scalar_t__ intr_type; TYPE_1__* idl; } ;
struct TYPE_14__ {TYPE_4__ mem_info; struct bna_intr_info intr_info; } ;
struct bna_res_info {TYPE_5__ res_u; } ;
struct bna_rcb {size_t q_depth; int id; struct bna_ccb* ccb; int bnad; struct bna_rxq* rxq; void* unmap_q; } ;
struct TYPE_12__ {int msb; int lsb; } ;
struct bna_mem_descr {scalar_t__ kva; TYPE_3__ dma; } ;
struct TYPE_16__ {scalar_t__ large_pkt_cnt; scalar_t__ small_pkt_cnt; } ;
struct bna_ccb {size_t q_depth; size_t* hw_producer_index; scalar_t__ intr_type; size_t id; int bnad; TYPE_7__ pkt_rate; int rx_coalescing_timeo; int intr_vector; int * i_dbell; struct bna_rcb** rcb; TYPE_8__* cq; } ;
struct bna {int bnad; struct bna_rx_mod rx_mod; } ;
struct TYPE_10__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;


 int VAR_23 ;
 int FUNC_1 (int *) ;
 size_t VAR_24 ;
 int FUNC_2 (struct bna_rx*,int ) ;
 struct bna_rx* FUNC_3 (struct bna_rx_mod*,int ) ;
 int FUNC_4 (struct bna_rx_mod*,struct bna_rx_config*) ;
 int VAR_25 ;
 int FUNC_5 (int *,struct bna_rx*,struct bna_rx_config*,struct bna_res_info*) ;
 int FUNC_6 (struct bna_rxp*,struct bna_rxq*,struct bna_rxq*) ;
 int FUNC_7 (struct bna_rxp*,size_t,size_t,struct bna_mem_descr*,struct bna_mem_descr*,struct bna_mem_descr*) ;
 struct bna_rxp* FUNC_8 (struct bna_rx_mod*) ;
 struct bna_rxq* FUNC_9 (struct bna_rx_mod*) ;
 int FUNC_10 (struct bna_rxq*,struct bna_rxp*,size_t,size_t,struct bna_mem_descr*,struct bna_mem_descr*,struct bna_mem_descr*) ;
 int FUNC_11 (int *,int *) ;
 size_t FUNC_12 (size_t) ;
 int FUNC_13 (struct bnad*,struct bna_rcb*) ;
 int FUNC_14 (struct bnad*,struct bna_rcb*) ;
 int FUNC_15 (struct bnad*,struct bna_ccb*) ;

struct bna_rx *
FUNC_16(struct bna *VAR_26, struct bnad *VAR_27,
  struct bna_rx_config *VAR_28,
  const struct bna_rx_event_cbfn *VAR_29,
  struct bna_res_info *VAR_30,
  void *VAR_31)
{
 struct bna_rx_mod *VAR_32 = &VAR_26->rx_mod;
 struct bna_rx *VAR_33;
 struct bna_rxp *VAR_34;
 struct bna_rxq *VAR_35;
 struct bna_rxq *VAR_36;
 struct bna_intr_info *VAR_37;
 struct bna_mem_descr *VAR_38;
 struct bna_mem_descr *VAR_39;
 struct bna_mem_descr *VAR_40;
 struct bna_mem_descr *VAR_41;
 struct bna_mem_descr *VAR_42;
 struct bna_mem_descr *VAR_43;
 struct bna_mem_descr *VAR_44;
 struct bna_mem_descr *VAR_45;
 struct bna_mem_descr *VAR_46;
 struct bna_mem_descr *VAR_47;
 struct bna_mem_descr *VAR_48;
 struct bna_mem_descr *VAR_49;
 struct bna_mem_descr *VAR_50;
 u32 VAR_51, VAR_52;
 u32 VAR_53, VAR_54, VAR_55;
 u32 VAR_56, VAR_57;
 u32 VAR_58;

 if (!FUNC_4(VAR_32, VAR_28))
  return ((void*)0);

 VAR_37 = &VAR_30[VAR_22].res_u.intr_info;
 VAR_40 = &VAR_30[VAR_8].res_u.mem_info.mdl[0];
 VAR_41 = &VAR_30[VAR_19].res_u.mem_info.mdl[0];
 VAR_39 = &VAR_30[VAR_20].res_u.mem_info.mdl[0];
 VAR_38 = &VAR_30[VAR_21].res_u.mem_info.mdl[0];
 VAR_42 = &VAR_30[VAR_9].res_u.mem_info.mdl[0];
 VAR_43 = &VAR_30[VAR_11].res_u.mem_info.mdl[0];
 VAR_44 = &VAR_30[VAR_10].res_u.mem_info.mdl[0];
 VAR_45 = &VAR_30[VAR_16].res_u.mem_info.mdl[0];
 VAR_46 = &VAR_30[VAR_13].res_u.mem_info.mdl[0];
 VAR_47 = &VAR_30[VAR_17].res_u.mem_info.mdl[0];
 VAR_48 = &VAR_30[VAR_14].res_u.mem_info.mdl[0];
 VAR_49 = &VAR_30[VAR_15].res_u.mem_info.mdl[0];
 VAR_50 = &VAR_30[VAR_12].res_u.mem_info.mdl[0];

 VAR_58 = VAR_30[VAR_10].res_u.mem_info.len /
   VAR_24;

 VAR_51 = VAR_30[VAR_12].res_u.mem_info.len /
   VAR_24;

 VAR_52 = VAR_30[VAR_15].res_u.mem_info.len /
   VAR_24;

 VAR_33 = FUNC_3(VAR_32, VAR_28->rx_type);
 VAR_33->bna = VAR_26;
 VAR_33->rx_flags = 0;
 FUNC_1(&VAR_33->rxp_q);
 VAR_33->stop_cbfn = ((void*)0);
 VAR_33->stop_cbarg = ((void*)0);
 VAR_33->priv = VAR_31;

 VAR_33->rcb_setup_cbfn = VAR_29->rcb_setup_cbfn;
 VAR_33->rcb_destroy_cbfn = VAR_29->rcb_destroy_cbfn;
 VAR_33->ccb_setup_cbfn = VAR_29->ccb_setup_cbfn;
 VAR_33->ccb_destroy_cbfn = VAR_29->ccb_destroy_cbfn;
 VAR_33->rx_stall_cbfn = VAR_29->rx_stall_cbfn;

 VAR_33->rx_cleanup_cbfn = VAR_29->rx_cleanup_cbfn;
 VAR_33->rx_post_cbfn = VAR_29->rx_post_cbfn;

 if (VAR_33->bna->rx_mod.flags & VAR_7) {
  switch (VAR_33->type) {
  case 128:
   if (!(VAR_33->bna->rx_mod.flags &
    VAR_6))
    VAR_33->rx_flags |= VAR_5;
   break;
  case 129:
   if (VAR_33->bna->rx_mod.flags & VAR_6)
    VAR_33->rx_flags |= VAR_5;
   break;
  }
 }

 VAR_33->num_paths = VAR_28->num_paths;
 for (VAR_57 = 0, VAR_53 = 0, VAR_54 = 0, VAR_55 = 0;
   VAR_57 < VAR_33->num_paths; VAR_57++) {
  VAR_34 = FUNC_8(VAR_32);
  FUNC_11(&VAR_34->qe, &VAR_33->rxp_q);
  VAR_34->type = VAR_28->rxp_type;
  VAR_34->rx = VAR_33;
  VAR_34->cq.rx = VAR_33;

  VAR_35 = FUNC_9(VAR_32);
  if (VAR_4 == VAR_28->rxp_type)
   VAR_36 = ((void*)0);
  else
   VAR_36 = FUNC_9(VAR_32);

  if (1 == VAR_37->num)
   VAR_34->vector = VAR_37->idl[0].vector;
  else
   VAR_34->vector = VAR_37->idl[VAR_57].vector;



  VAR_34->cq.ib.ib_seg_host_addr.lsb =
  VAR_30[VAR_18].res_u.mem_info.mdl[VAR_57].dma.lsb;
  VAR_34->cq.ib.ib_seg_host_addr.msb =
  VAR_30[VAR_18].res_u.mem_info.mdl[VAR_57].dma.msb;
  VAR_34->cq.ib.ib_seg_host_addr_kva =
  VAR_30[VAR_18].res_u.mem_info.mdl[VAR_57].kva;
  VAR_34->cq.ib.intr_type = VAR_37->intr_type;
  if (VAR_37->intr_type == VAR_2)
   VAR_34->cq.ib.intr_vector = VAR_34->vector;
  else
   VAR_34->cq.ib.intr_vector = FUNC_0(VAR_34->vector);
  VAR_34->cq.ib.coalescing_timeo = VAR_28->coalescing_timeo;
  VAR_34->cq.ib.interpkt_count = VAR_0;
  VAR_34->cq.ib.interpkt_timeo = VAR_1;

  FUNC_6(VAR_34, VAR_35, VAR_36);



  VAR_35->rx = VAR_33;
  VAR_35->rxp = VAR_34;

  VAR_35->rcb = (struct bna_rcb *) VAR_41[VAR_55].kva;
  VAR_35->rcb->unmap_q = (void *)VAR_39[VAR_54].kva;
  VAR_55++; VAR_54++;
  VAR_35->rcb->q_depth = VAR_28->q0_depth;
  VAR_35->q_depth = VAR_28->q0_depth;
  VAR_35->multi_buffer = VAR_28->q0_multi_buf;
  VAR_35->buffer_size = VAR_28->q0_buf_size;
  VAR_35->num_vecs = VAR_28->q0_num_vecs;
  VAR_35->rcb->rxq = VAR_35;
  VAR_35->rcb->bnad = VAR_26->bnad;
  VAR_35->rcb->id = 0;
  VAR_35->rx_packets = VAR_35->rx_bytes = 0;
  VAR_35->rx_packets_with_error = VAR_35->rxbuf_alloc_failed = 0;
  VAR_35->rxbuf_map_failed = 0;

  FUNC_10(VAR_35, VAR_34, VAR_51, VAR_24,
   &VAR_46[VAR_57], &VAR_48[VAR_57], &VAR_50[VAR_57]);

  if (VAR_33->rcb_setup_cbfn)
   VAR_33->rcb_setup_cbfn(VAR_27, VAR_35->rcb);



  if (VAR_36) {
   VAR_36->rx = VAR_33;
   VAR_36->rxp = VAR_34;

   VAR_36->rcb = (struct bna_rcb *) VAR_41[VAR_55].kva;
   VAR_36->rcb->unmap_q = (void *)VAR_38[VAR_53].kva;
   VAR_55++; VAR_53++;
   VAR_36->rcb->q_depth = VAR_28->q1_depth;
   VAR_36->q_depth = VAR_28->q1_depth;
   VAR_36->multi_buffer = VAR_23;
   VAR_36->num_vecs = 1;
   VAR_36->rcb->rxq = VAR_36;
   VAR_36->rcb->bnad = VAR_26->bnad;
   VAR_36->rcb->id = 1;
   VAR_36->buffer_size = (VAR_28->rxp_type == VAR_3) ?
     VAR_28->hds_config.forced_offset
     : VAR_28->q1_buf_size;
   VAR_36->rx_packets = VAR_36->rx_bytes = 0;
   VAR_36->rx_packets_with_error = VAR_36->rxbuf_alloc_failed = 0;
   VAR_36->rxbuf_map_failed = 0;

   FUNC_10(VAR_36, VAR_34, VAR_52, VAR_24,
    &VAR_45[VAR_57], &VAR_47[VAR_57],
    &VAR_49[VAR_57]);

   if (VAR_33->rcb_setup_cbfn)
    VAR_33->rcb_setup_cbfn(VAR_27, VAR_36->rcb);
  }



  VAR_34->cq.ccb = (struct bna_ccb *) VAR_40[VAR_57].kva;
  VAR_56 = VAR_28->q0_depth +
   ((VAR_28->rxp_type == VAR_4) ?
    0 : VAR_28->q1_depth);



  VAR_56 = FUNC_12(VAR_56);
  VAR_34->cq.ccb->q_depth = VAR_56;
  VAR_34->cq.ccb->cq = &VAR_34->cq;
  VAR_34->cq.ccb->rcb[0] = VAR_35->rcb;
  VAR_35->rcb->ccb = VAR_34->cq.ccb;
  if (VAR_36) {
   VAR_34->cq.ccb->rcb[1] = VAR_36->rcb;
   VAR_36->rcb->ccb = VAR_34->cq.ccb;
  }
  VAR_34->cq.ccb->hw_producer_index =
   (u32 *)VAR_34->cq.ib.ib_seg_host_addr_kva;
  VAR_34->cq.ccb->i_dbell = &VAR_34->cq.ib.door_bell;
  VAR_34->cq.ccb->intr_type = VAR_34->cq.ib.intr_type;
  VAR_34->cq.ccb->intr_vector = VAR_34->cq.ib.intr_vector;
  VAR_34->cq.ccb->rx_coalescing_timeo =
   VAR_34->cq.ib.coalescing_timeo;
  VAR_34->cq.ccb->pkt_rate.small_pkt_cnt = 0;
  VAR_34->cq.ccb->pkt_rate.large_pkt_cnt = 0;
  VAR_34->cq.ccb->bnad = VAR_26->bnad;
  VAR_34->cq.ccb->id = VAR_57;

  FUNC_7(VAR_34, VAR_58, VAR_24,
   &VAR_42[VAR_57], &VAR_43[VAR_57], &VAR_44[VAR_57]);

  if (VAR_33->ccb_setup_cbfn)
   VAR_33->ccb_setup_cbfn(VAR_27, VAR_34->cq.ccb);
 }

 VAR_33->hds_cfg = VAR_28->hds_config;

 FUNC_5(&VAR_33->rxf, VAR_33, VAR_28, VAR_30);

 FUNC_2(VAR_33, VAR_25);

 VAR_32->rid_mask |= FUNC_0(VAR_33->rid);

 return VAR_33;
}
