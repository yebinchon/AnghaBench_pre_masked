
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int queue; } ;
struct xmit_priv {int free_xmitframe_cnt; int txirp_cnt; int free_xmitbuf_cnt; int xmit_tasklet; int hwxmit_entry; int hwxmits; TYPE_1__ free_xmitbuf_queue; void* pxmitbuf; void* pallocated_xmitbuf; int * pallocated_frame_buf; TYPE_1__ pending_xmitbuf_queue; scalar_t__ voq_cnt; scalar_t__ viq_cnt; scalar_t__ bkq_cnt; scalar_t__ beq_cnt; int frag_len; int bmc_txqueue; int vo_txqueue; int vi_txqueue; int bk_txqueue; int be_txqueue; TYPE_1__ free_xmit_queue; int * pxmit_frame_buf; TYPE_1__ apsd_queue; TYPE_1__ legacy_dz_queue; TYPE_1__ bm_pending; TYPE_1__ vo_pending; TYPE_1__ vi_pending; TYPE_1__ bk_pending; TYPE_1__ be_pending; struct _adapter* adapter; int lock; } ;
struct xmit_frame {int list; int * pxmitbuf; int * buf_addr; int * pkt; int frame_tag; struct _adapter* padapter; } ;
struct xmit_buf {int list; void* pallocated_buf; void* pbuf; } ;
struct _adapter {int wk_filter_rx_ff0; } ;
typedef int sint ;
typedef int addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct _adapter*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_10 (struct _adapter*,struct xmit_buf*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,void (*) (unsigned long),unsigned long) ;

int FUNC_13(struct xmit_priv *VAR_15,
     struct _adapter *VAR_16)
{
 sint VAR_17;
 struct xmit_buf *VAR_18;
 struct xmit_frame *VAR_19;

 FUNC_9((unsigned char *)VAR_15, 0, sizeof(struct xmit_priv));
 FUNC_11(&VAR_15->lock);



 VAR_15->adapter = VAR_16;
 FUNC_2(&VAR_15->be_pending);
 FUNC_2(&VAR_15->bk_pending);
 FUNC_2(&VAR_15->vi_pending);
 FUNC_2(&VAR_15->vo_pending);
 FUNC_2(&VAR_15->bm_pending);
 FUNC_2(&VAR_15->legacy_dz_queue);
 FUNC_2(&VAR_15->apsd_queue);
 FUNC_2(&VAR_15->free_xmit_queue);





 VAR_15->pallocated_frame_buf =
  FUNC_7(VAR_9 * sizeof(struct xmit_frame) + 4, VAR_5);
 if (!VAR_15->pallocated_frame_buf) {
  VAR_15->pxmit_frame_buf = ((void*)0);
  return -VAR_4;
 }
 VAR_15->pxmit_frame_buf = VAR_15->pallocated_frame_buf + 4 -
   ((addr_t) (VAR_15->pallocated_frame_buf) & 3);
 VAR_19 = (struct xmit_frame *) VAR_15->pxmit_frame_buf;
 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  FUNC_0(&(VAR_19->list));
  VAR_19->padapter = VAR_16;
  VAR_19->frame_tag = VAR_3;
  VAR_19->pkt = ((void*)0);
  VAR_19->buf_addr = ((void*)0);
  VAR_19->pxmitbuf = ((void*)0);
  FUNC_8(&(VAR_19->list),
     &(VAR_15->free_xmit_queue.queue));
  VAR_19++;
 }
 VAR_15->free_xmitframe_cnt = VAR_9;



 FUNC_3(&VAR_15->be_txqueue, VAR_0);
 FUNC_3(&VAR_15->bk_txqueue, VAR_1);
 FUNC_3(&VAR_15->vi_txqueue, VAR_10);
 FUNC_3(&VAR_15->vo_txqueue, VAR_11);
 FUNC_3(&VAR_15->bmc_txqueue, VAR_2);
 VAR_15->frag_len = VAR_6;
 VAR_15->txirp_cnt = 1;

 VAR_15->beq_cnt = 0;
 VAR_15->bkq_cnt = 0;
 VAR_15->viq_cnt = 0;
 VAR_15->voq_cnt = 0;

 FUNC_2(&VAR_15->free_xmitbuf_queue);
 FUNC_2(&VAR_15->pending_xmitbuf_queue);
 VAR_15->pallocated_xmitbuf =
  FUNC_7(VAR_8 * sizeof(struct xmit_buf) + 4, VAR_5);
 if (!VAR_15->pallocated_xmitbuf) {
  FUNC_6(VAR_15->pallocated_frame_buf);
  VAR_15->pallocated_frame_buf = ((void*)0);
  return -VAR_4;
 }
 VAR_15->pxmitbuf = VAR_15->pallocated_xmitbuf + 4 -
         ((addr_t)(VAR_15->pallocated_xmitbuf) & 3);
 VAR_18 = (struct xmit_buf *)VAR_15->pxmitbuf;
 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  FUNC_0(&VAR_18->list);
  VAR_18->pallocated_buf = FUNC_7(VAR_7 + VAR_12,
         VAR_5);
  if (!VAR_18->pallocated_buf)
   return -VAR_4;
  VAR_18->pbuf = VAR_18->pallocated_buf + VAR_12 -
     ((addr_t) (VAR_18->pallocated_buf) &
     (VAR_12 - 1));
  if (FUNC_10(VAR_16, VAR_18))
   return -VAR_4;
  FUNC_8(&VAR_18->list,
     &(VAR_15->free_xmitbuf_queue.queue));
  VAR_18++;
 }
 VAR_15->free_xmitbuf_cnt = VAR_8;
 FUNC_1(&VAR_16->wk_filter_rx_ff0, VAR_13);
 FUNC_4(VAR_16);
 FUNC_5(VAR_15->hwxmits, VAR_15->hwxmit_entry);
 FUNC_12(&VAR_15->xmit_tasklet,
  (void(*)(unsigned long))VAR_14,
  (unsigned long)VAR_16);
 return 0;
}
