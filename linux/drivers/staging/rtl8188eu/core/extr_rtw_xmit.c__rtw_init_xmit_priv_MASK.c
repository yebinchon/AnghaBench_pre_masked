
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int queue; } ;
struct xmit_priv {int free_xmitframe_cnt; int free_xmitbuf_cnt; int free_xmit_extbuf_cnt; int* wmm_para_seq; int txirp_cnt; int ack_tx; int ack_tx_ops; int ack_tx_mutex; scalar_t__ voq_cnt; scalar_t__ viq_cnt; scalar_t__ bkq_cnt; scalar_t__ beq_cnt; int hwxmit_entry; int hwxmits; TYPE_1__ free_xmit_extbuf_queue; void* pxmit_extbuf; void* pallocated_xmit_extbuf; TYPE_1__ free_xmitbuf_queue; void* pxmitbuf; void* pallocated_xmitbuf; TYPE_1__ pending_xmitbuf_queue; int frag_len; TYPE_1__ free_xmit_queue; int * pxmit_frame_buf; void* pallocated_frame_buf; TYPE_1__ bm_pending; TYPE_1__ vo_pending; TYPE_1__ vi_pending; TYPE_1__ bk_pending; TYPE_1__ be_pending; struct adapter* adapter; int lock; } ;
struct xmit_frame {int list; int * pxmitbuf; int * buf_addr; int * pkt; int frame_tag; struct adapter* padapter; } ;
struct xmit_buf {int ext_tag; int list; struct adapter* padapter; int * priv_data; int flags; } ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (struct adapter*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct adapter*,struct xmit_buf*,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int) ;

s32 FUNC_14(struct xmit_priv *VAR_13, struct adapter *VAR_14)
{
 int VAR_15;
 struct xmit_buf *VAR_16;
 struct xmit_frame *VAR_17;
 int VAR_18 = VAR_10;
 u32 VAR_19 = VAR_2;
 u32 VAR_20 = VAR_5;



 FUNC_12(&VAR_13->lock);





 VAR_13->adapter = VAR_14;

 FUNC_3(&VAR_13->be_pending);
 FUNC_3(&VAR_13->bk_pending);
 FUNC_3(&VAR_13->vi_pending);
 FUNC_3(&VAR_13->vo_pending);
 FUNC_3(&VAR_13->bm_pending);

 FUNC_3(&VAR_13->free_xmit_queue);







 VAR_13->pallocated_frame_buf = FUNC_13(VAR_4 * sizeof(struct xmit_frame) + 4);

 if (!VAR_13->pallocated_frame_buf) {
  VAR_13->pxmit_frame_buf = ((void*)0);
  FUNC_2(VAR_12, VAR_11, ("alloc xmit_frame fail!\n"));
  VAR_18 = VAR_9;
  goto exit;
 }
 VAR_13->pxmit_frame_buf = FUNC_1(VAR_13->pallocated_frame_buf, 4);

 VAR_17 = (struct xmit_frame *)VAR_13->pxmit_frame_buf;

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  FUNC_0(&VAR_17->list);

  VAR_17->padapter = VAR_14;
  VAR_17->frame_tag = VAR_6;

  VAR_17->pkt = ((void*)0);

  VAR_17->buf_addr = ((void*)0);
  VAR_17->pxmitbuf = ((void*)0);

  FUNC_4(&VAR_17->list, &VAR_13->free_xmit_queue.queue);

  VAR_17++;
 }

 VAR_13->free_xmitframe_cnt = VAR_4;

 VAR_13->frag_len = VAR_0;


 FUNC_3(&VAR_13->free_xmitbuf_queue);
 FUNC_3(&VAR_13->pending_xmitbuf_queue);

 VAR_13->pallocated_xmitbuf = FUNC_13(VAR_3 * sizeof(struct xmit_buf) + 4);

 if (!VAR_13->pallocated_xmitbuf) {
  FUNC_2(VAR_12, VAR_11, ("alloc xmit_buf fail!\n"));
  VAR_18 = VAR_9;
  goto exit;
 }

 VAR_13->pxmitbuf = FUNC_1(VAR_13->pallocated_xmitbuf, 4);

 VAR_16 = (struct xmit_buf *)VAR_13->pxmitbuf;

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  FUNC_0(&VAR_16->list);

  VAR_16->priv_data = ((void*)0);
  VAR_16->padapter = VAR_14;
  VAR_16->ext_tag = 0;


  VAR_18 = FUNC_10(VAR_14, VAR_16, (VAR_1 + VAR_7));
  if (VAR_18 == VAR_9) {
   FUNC_5(10);
   VAR_18 = FUNC_10(VAR_14, VAR_16, (VAR_1 + VAR_7));
   if (VAR_18 == VAR_9)
    goto exit;
  }

  VAR_16->flags = VAR_8;

  FUNC_4(&VAR_16->list, &VAR_13->free_xmitbuf_queue.queue);
  VAR_16++;
 }

 VAR_13->free_xmitbuf_cnt = VAR_3;


 FUNC_3(&VAR_13->free_xmit_extbuf_queue);

 VAR_13->pallocated_xmit_extbuf = FUNC_13(VAR_20 * sizeof(struct xmit_buf) + 4);

 if (!VAR_13->pallocated_xmit_extbuf) {
  FUNC_2(VAR_12, VAR_11, ("alloc xmit_extbuf fail!\n"));
  VAR_18 = VAR_9;
  goto exit;
 }

 VAR_13->pxmit_extbuf = FUNC_1(VAR_13->pallocated_xmit_extbuf, 4);

 VAR_16 = (struct xmit_buf *)VAR_13->pxmit_extbuf;

 for (VAR_15 = 0; VAR_15 < VAR_20; VAR_15++) {
  FUNC_0(&VAR_16->list);

  VAR_16->priv_data = ((void*)0);
  VAR_16->padapter = VAR_14;
  VAR_16->ext_tag = 1;

  VAR_18 = FUNC_10(VAR_14, VAR_16, VAR_19 + VAR_7);
  if (VAR_18 == VAR_9) {
   VAR_18 = VAR_9;
   goto exit;
  }

  FUNC_4(&VAR_16->list, &VAR_13->free_xmit_extbuf_queue.queue);
  VAR_16++;
 }

 VAR_13->free_xmit_extbuf_cnt = VAR_20;

 VAR_18 = FUNC_7(VAR_14);
 if (VAR_18 == VAR_9)
  goto exit;
 FUNC_9(VAR_13->hwxmits, VAR_13->hwxmit_entry);

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
  VAR_13->wmm_para_seq[VAR_15] = VAR_15;

 VAR_13->txirp_cnt = 1;


 VAR_13->beq_cnt = 0;
 VAR_13->bkq_cnt = 0;
 VAR_13->viq_cnt = 0;
 VAR_13->voq_cnt = 0;

 VAR_13->ack_tx = 0;
 FUNC_6(&VAR_13->ack_tx_mutex);
 FUNC_11(&VAR_13->ack_tx_ops, 0);

 FUNC_8(VAR_14);

exit:
 return VAR_18;
}
