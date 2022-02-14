
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* olinfo_status; void* cmd_type_len; int buffer_addr; } ;
union ixgbe_adv_tx_desc {TYPE_1__ read; } ;
typedef int u32 ;
struct xdp_desc {int len; int addr; } ;
struct ixgbe_tx_buffer {int bytecount; int gso_segs; int * xdpf; } ;
struct ixgbe_ring {size_t next_to_use; size_t count; int xsk_umem; struct ixgbe_tx_buffer* tx_buffer_info; int dev; int netdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union ixgbe_adv_tx_desc* FUNC_0 (struct ixgbe_ring*,size_t) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct xdp_desc*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static bool FUNC_11(struct ixgbe_ring *VAR_6, unsigned int VAR_7)
{
 union ixgbe_adv_tx_desc *VAR_8 = ((void*)0);
 struct ixgbe_tx_buffer *VAR_9;
 bool VAR_10 = 1;
 struct xdp_desc VAR_11;
 dma_addr_t VAR_12;
 u32 VAR_13;

 while (VAR_7-- > 0) {
  if (FUNC_7(!FUNC_4(VAR_6)) ||
      !FUNC_6(VAR_6->netdev)) {
   VAR_10 = 0;
   break;
  }

  if (!FUNC_9(VAR_6->xsk_umem, &VAR_11))
   break;

  VAR_12 = FUNC_8(VAR_6->xsk_umem, VAR_11.addr);

  FUNC_3(VAR_6->dev, VAR_12, VAR_11.len,
        VAR_0);

  VAR_9 = &VAR_6->tx_buffer_info[VAR_6->next_to_use];
  VAR_9->bytecount = VAR_11.len;
  VAR_9->xdpf = ((void*)0);
  VAR_9->gso_segs = 1;

  VAR_8 = FUNC_0(VAR_6, VAR_6->next_to_use);
  VAR_8->read.buffer_addr = FUNC_2(VAR_12);


  VAR_13 = VAR_3 |
      VAR_1 |
      VAR_2;
  VAR_13 |= VAR_11.len | VAR_5;
  VAR_8->read.cmd_type_len = FUNC_1(VAR_13);
  VAR_8->read.olinfo_status =
   FUNC_1(VAR_11.len << VAR_4);

  VAR_6->next_to_use++;
  if (VAR_6->next_to_use == VAR_6->count)
   VAR_6->next_to_use = 0;
 }

 if (VAR_8) {
  FUNC_5(VAR_6);
  FUNC_10(VAR_6->xsk_umem);
 }

 return !!VAR_7 && VAR_10;
}
