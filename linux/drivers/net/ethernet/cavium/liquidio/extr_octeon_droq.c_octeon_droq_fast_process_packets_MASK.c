
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; } ;
union octeon_rh {TYPE_2__ r_dh; } ;
typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct octeon_skb_page_info {int * page; } ;
struct octeon_droq_info {scalar_t__ length; union octeon_rh rh; } ;
struct TYPE_10__ {int dropped_toomany; int bytes_received; int pkts_received; int rx_alloc_failure; } ;
struct TYPE_9__ {scalar_t__ drop_on_max; int farg; int (* fptr ) (int ,struct sk_buff*,scalar_t__,union octeon_rh*,int *,int ) ;} ;
struct octeon_droq {size_t read_idx; scalar_t__ refill_count; scalar_t__ buffer_size; scalar_t__ refill_threshold; int pkts_pending; int pkts_credit_reg; TYPE_5__ stats; TYPE_4__ ops; int napi; int max_count; TYPE_3__* recv_buf_list; int q_no; } ;
struct octeon_device {int octeon_id; TYPE_1__* pci_dev; } ;
struct TYPE_8__ {struct sk_buff* buffer; struct octeon_skb_page_info pg_info; scalar_t__ data; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,char*,int ,size_t,scalar_t__) ;
 void* FUNC_4 (size_t,int,int ) ;
 int FUNC_5 (struct octeon_droq*) ;
 scalar_t__ FUNC_6 (struct octeon_device*,struct octeon_droq*,union octeon_rh*,struct octeon_droq_info*) ;
 int FUNC_7 (struct octeon_device*,struct octeon_droq*,scalar_t__) ;
 int FUNC_8 (struct octeon_device*,struct octeon_droq*) ;
 struct sk_buff* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct octeon_droq*,struct sk_buff*,int,int) ;
 int FUNC_11 (struct octeon_device*,struct octeon_droq*) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (union octeon_rh*) ;
 int FUNC_14 (char*,int ,int *,int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct octeon_device*,struct octeon_skb_page_info*) ;
 int FUNC_19 (int ,struct sk_buff*,scalar_t__,union octeon_rh*,int *,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int,int ) ;

__attribute__((used)) static u32
FUNC_22(struct octeon_device *VAR_4,
     struct octeon_droq *VAR_5,
     u32 VAR_6)
{
 u32 VAR_7, VAR_8 = 0, VAR_9, VAR_10;
 struct octeon_droq_info *VAR_11;
 union octeon_rh *VAR_12;

 VAR_9 = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  u32 VAR_13 = 0;
  struct sk_buff *VAR_14 = ((void*)0);
  struct octeon_skb_page_info *VAR_15;
  void *VAR_16;

  VAR_11 = (struct octeon_droq_info *)
   VAR_5->recv_buf_list[VAR_5->read_idx].data;
  FUNC_12((u64 *)VAR_11, 2);

  if (!VAR_11->length) {
   FUNC_3(&VAR_4->pci_dev->dev,
    "DROQ[%d] idx: %d len:0, pkt_cnt: %d\n",
    VAR_5->q_no, VAR_5->read_idx, VAR_9);
   FUNC_14("", VAR_1,
          (u8 *)VAR_11,
          VAR_3);
   break;
  }


  VAR_12 = &VAR_11->rh;

  VAR_11->length += VAR_2;
  VAR_12->r_dh.len += (FUNC_0(VAR_3) / sizeof(u64));
  VAR_8 += (u32)VAR_11->length;
  if (FUNC_13(VAR_12)) {
   u32 VAR_17;

   VAR_17 = FUNC_6(VAR_4, VAR_5, VAR_12, VAR_11);
   VAR_5->read_idx = FUNC_4(VAR_5->read_idx,
          VAR_17, VAR_5->max_count);
   VAR_5->refill_count += VAR_17;
  } else {
   if (VAR_11->length <= VAR_5->buffer_size) {
    VAR_13 = (u32)VAR_11->length;
    VAR_14 = VAR_5->recv_buf_list[
     VAR_5->read_idx].buffer;
    VAR_15 = &VAR_5->recv_buf_list[
     VAR_5->read_idx].pg_info;
    if (FUNC_18(VAR_4, VAR_15))
     VAR_15->page = ((void*)0);
    VAR_5->recv_buf_list[VAR_5->read_idx].buffer =
     ((void*)0);

    VAR_5->read_idx = FUNC_4(VAR_5->read_idx, 1,
           VAR_5->max_count);
    VAR_5->refill_count++;
   } else {
    VAR_14 = FUNC_9((u32)
          VAR_11->length);
    VAR_13 = 0;



    while (VAR_13 < VAR_11->length) {
     int VAR_18, VAR_19 = VAR_5->read_idx;

     VAR_18 = ((VAR_13 + VAR_5->buffer_size)
         > VAR_11->length) ?
      ((u32)VAR_11->length - VAR_13) :
      VAR_5->buffer_size;

     if (VAR_14) {
      FUNC_10(VAR_5,
         VAR_14,
         VAR_18,
         VAR_19);
      VAR_16 = VAR_5->recv_buf_list[
       VAR_19].buffer;
      FUNC_16(VAR_16);
      VAR_5->recv_buf_list[VAR_19].buffer
       = ((void*)0);
     } else {
      VAR_5->stats.rx_alloc_failure++;
     }

     VAR_13 += VAR_18;
     VAR_5->read_idx =
      FUNC_4(VAR_5->read_idx, 1,
          VAR_5->max_count);
     VAR_5->refill_count++;
    }
   }

   if (VAR_14) {
    if (VAR_5->ops.fptr) {
     VAR_5->ops.fptr(VAR_4->octeon_id,
             VAR_14, VAR_13,
             VAR_12, &VAR_5->napi,
             VAR_5->ops.farg);
    } else {
     FUNC_17(VAR_14);
    }
   }
  }

  if (VAR_5->refill_count >= VAR_5->refill_threshold) {
   int VAR_20 = FUNC_8(VAR_4, VAR_5);

   if (VAR_20) {




    FUNC_20();
    FUNC_21(VAR_20, VAR_5->pkts_credit_reg);
   }
  }
 }


 VAR_5->stats.pkts_received += VAR_7;
 VAR_5->stats.bytes_received += VAR_8;

 VAR_10 = VAR_7;
 if ((VAR_5->ops.drop_on_max) && (VAR_6 - VAR_7)) {
  FUNC_7(VAR_4, VAR_5, (VAR_6 - VAR_7));

  VAR_5->stats.dropped_toomany += (VAR_6 - VAR_7);
  VAR_10 = VAR_6;
 }

 FUNC_2(VAR_10, &VAR_5->pkts_pending);

 if (VAR_5->refill_count >= VAR_5->refill_threshold &&
     FUNC_15(VAR_5->pkts_credit_reg) < VAR_0) {
  FUNC_5(VAR_5);


  if (!FUNC_1(&VAR_5->pkts_pending))
   FUNC_11(VAR_4, VAR_5);
 }

 return VAR_10;
}
