
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* olinfo_status; void* cmd_type_len; int buffer_addr; } ;
union ixgbe_adv_tx_desc {TYPE_1__ read; } ;
typedef int u32 ;
typedef size_t u16 ;
struct xdp_frame {int len; int data; } ;
struct ixgbe_tx_buffer {int bytecount; int gso_segs; union ixgbe_adv_tx_desc* next_to_watch; struct xdp_frame* xdpf; scalar_t__ protocol; } ;
struct ixgbe_ring {size_t next_to_use; size_t count; struct ixgbe_tx_buffer* tx_buffer_info; int dev; } ;
struct ixgbe_adapter {struct ixgbe_ring** xdp_ring; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union ixgbe_adv_tx_desc* FUNC_0 (struct ixgbe_ring*,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ixgbe_tx_buffer*,int ,int ) ;
 int FUNC_6 (struct ixgbe_tx_buffer*,int,int) ;
 int FUNC_7 (struct ixgbe_ring*) ;
 size_t FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct ixgbe_adapter *VAR_8,
   struct xdp_frame *VAR_9)
{
 struct ixgbe_ring *VAR_10 = VAR_8->xdp_ring[FUNC_8()];
 struct ixgbe_tx_buffer *VAR_11;
 union ixgbe_adv_tx_desc *VAR_12;
 u32 VAR_13, VAR_14;
 dma_addr_t VAR_15;
 u16 VAR_16;

 VAR_13 = VAR_9->len;

 if (FUNC_10(!FUNC_7(VAR_10)))
  return VAR_6;

 VAR_15 = FUNC_3(VAR_10->dev, VAR_9->data, VAR_13, VAR_0);
 if (FUNC_4(VAR_10->dev, VAR_15))
  return VAR_6;


 VAR_11 = &VAR_10->tx_buffer_info[VAR_10->next_to_use];
 VAR_11->bytecount = VAR_13;
 VAR_11->gso_segs = 1;
 VAR_11->protocol = 0;

 VAR_16 = VAR_10->next_to_use;
 VAR_12 = FUNC_0(VAR_10, VAR_16);

 FUNC_6(VAR_11, VAR_13, VAR_13);
 FUNC_5(VAR_11, VAR_15, VAR_15);
 VAR_11->xdpf = VAR_9;

 VAR_12->read.buffer_addr = FUNC_2(VAR_15);


 VAR_14 = VAR_3 |
     VAR_1 |
     VAR_2;
 VAR_14 |= VAR_13 | VAR_5;
 VAR_12->read.cmd_type_len = FUNC_1(VAR_14);
 VAR_12->read.olinfo_status =
  FUNC_1(VAR_13 << VAR_4);


 FUNC_9();


 VAR_16++;
 if (VAR_16 == VAR_10->count)
  VAR_16 = 0;

 VAR_11->next_to_watch = VAR_12;
 VAR_10->next_to_use = VAR_16;

 return VAR_7;
}
