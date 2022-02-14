
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tx_pkt_header {int pkt_size; int ins_vlan; int vlan; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct atl2_adapter {int txd_write_ptr; int txd_ring_size; size_t txs_next_clear; size_t txs_ring_size; int hw; TYPE_1__* txs_ring; scalar_t__ txd_ring; int flags; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {scalar_t__ update; } ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct atl2_adapter*) ;
 int FUNC_2 (struct atl2_adapter*) ;
 int VAR_3 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 struct atl2_adapter* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_4,
      struct net_device *VAR_5)
{
 struct atl2_adapter *VAR_6 = FUNC_6(VAR_5);
 struct tx_pkt_header *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;

 if (FUNC_10(VAR_3, &VAR_6->flags)) {
  FUNC_4(VAR_4);
  return VAR_1;
 }

 if (FUNC_11(VAR_4->len <= 0)) {
  FUNC_4(VAR_4);
  return VAR_1;
 }

 VAR_10 = FUNC_2(VAR_6);
 VAR_11 = FUNC_1(VAR_6);

 if (VAR_4->len + sizeof(struct tx_pkt_header) + 4 > VAR_11 ||
  VAR_10 < 1) {

  FUNC_7(VAR_5);
  return VAR_0;
 }

 VAR_8 = VAR_6->txd_write_ptr;

 VAR_7 = (struct tx_pkt_header *) (((u8 *)VAR_6->txd_ring) + VAR_8);

 *(u32 *)VAR_7 = 0;
 VAR_7->pkt_size = VAR_4->len;

 VAR_8 += 4;
 if (VAR_8 >= VAR_6->txd_ring_size)
  VAR_8 -= VAR_6->txd_ring_size;
 VAR_9 = VAR_6->txd_ring_size - VAR_8;
 if (VAR_9 >= VAR_4->len) {
  FUNC_5(((u8 *)VAR_6->txd_ring) + VAR_8, VAR_4->data, VAR_4->len);
  VAR_8 += ((u32)(VAR_4->len + 3) & ~3);
 } else {
  FUNC_5(((u8 *)VAR_6->txd_ring)+VAR_8, VAR_4->data, VAR_9);
  FUNC_5((u8 *)VAR_6->txd_ring, VAR_4->data+VAR_9,
   VAR_4->len-VAR_9);
  VAR_8 = ((u32)(VAR_4->len-VAR_9 + 3) & ~3);
 }
 if (VAR_8 >= VAR_6->txd_ring_size)
  VAR_8 -= VAR_6->txd_ring_size;
 VAR_6->txd_write_ptr = VAR_8;


 VAR_6->txs_ring[VAR_6->txs_next_clear].update = 0;
 if (++VAR_6->txs_next_clear == VAR_6->txs_ring_size)
  VAR_6->txs_next_clear = 0;

 FUNC_0(&VAR_6->hw, VAR_2,
  (VAR_6->txd_write_ptr >> 2));

 FUNC_3(VAR_4);
 return VAR_1;
}
