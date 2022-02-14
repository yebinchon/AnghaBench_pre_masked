
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct tg3_rx_prodring_set {struct ring_info* rx_jmb_buffers; TYPE_1__* rx_jmb; struct ring_info* rx_std_buffers; struct tg3_rx_buffer_desc* rx_std; } ;
struct tg3_rx_buffer_desc {int addr_hi; int addr_lo; } ;
struct tg3 {int rx_std_ring_mask; int rx_pkt_map_sz; int rx_jmb_ring_mask; int pdev; } ;
struct skb_shared_info {int dummy; } ;
struct ring_info {int * data; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct tg3_rx_buffer_desc std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct tg3*) ;
 int FUNC_2 (struct ring_info*,scalar_t__,scalar_t__) ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int,int *) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct tg3 *VAR_7, struct tg3_rx_prodring_set *VAR_8,
        u32 VAR_9, u32 VAR_10,
        unsigned int *VAR_11)
{
 struct tg3_rx_buffer_desc *VAR_12;
 struct ring_info *VAR_13;
 u8 *VAR_14;
 dma_addr_t VAR_15;
 int VAR_16, VAR_17, VAR_18;

 switch (VAR_9) {
 case 128:
  VAR_18 = VAR_10 & VAR_7->rx_std_ring_mask;
  VAR_12 = &VAR_8->rx_std[VAR_18];
  VAR_13 = &VAR_8->rx_std_buffers[VAR_18];
  VAR_17 = VAR_7->rx_pkt_map_sz;
  break;

 case 129:
  VAR_18 = VAR_10 & VAR_7->rx_jmb_ring_mask;
  VAR_12 = &VAR_8->rx_jmb[VAR_18].std;
  VAR_13 = &VAR_8->rx_jmb_buffers[VAR_18];
  VAR_17 = VAR_6;
  break;

 default:
  return -VAR_0;
 }







 VAR_16 = FUNC_0(VAR_17 + FUNC_1(VAR_7)) +
     FUNC_0(sizeof(struct skb_shared_info));
 if (VAR_16 <= VAR_4) {
  VAR_14 = FUNC_4(VAR_16);
  *VAR_11 = VAR_16;
 } else {
  VAR_14 = FUNC_3(VAR_16, VAR_3);
  *VAR_11 = 0;
 }
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_6(VAR_7->pdev,
     VAR_14 + FUNC_1(VAR_7),
     VAR_17,
     VAR_5);
 if (FUNC_8(FUNC_5(VAR_7->pdev, VAR_15))) {
  FUNC_7(VAR_16 <= VAR_4, VAR_14);
  return -VAR_1;
 }

 VAR_13->data = VAR_14;
 FUNC_2(VAR_13, VAR_15, VAR_15);

 VAR_12->addr_hi = ((u64)VAR_15 >> 32);
 VAR_12->addr_lo = ((u64)VAR_15 & 0xffffffff);

 return VAR_17;
}
