
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tx_packet_desc {int word3; int word2; } ;
struct sk_buff {scalar_t__ len; scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct atl1_tpd_ring {int next_to_use; } ;
struct atl1_adapter {TYPE_1__* pdev; struct atl1_tpd_ring tpd_ring; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {unsigned int nr_frags; unsigned int gso_size; int * frags; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 struct tx_packet_desc* FUNC_0 (struct atl1_tpd_ring*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct atl1_tpd_ring*) ;
 int FUNC_2 (struct atl1_adapter*,struct sk_buff*,struct tx_packet_desc*) ;
 int FUNC_3 (struct atl1_adapter*,struct sk_buff*,struct tx_packet_desc*) ;
 int FUNC_4 (struct atl1_adapter*,struct sk_buff*,struct tx_packet_desc*) ;
 int FUNC_5 (struct atl1_adapter*,int,struct tx_packet_desc*) ;
 int FUNC_6 (struct atl1_adapter*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int *,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct tx_packet_desc*,int ,int) ;
 struct atl1_adapter* FUNC_12 (struct net_device*) ;
 scalar_t__ FUNC_13 (struct atl1_adapter*) ;
 int FUNC_14 (struct net_device*) ;
 unsigned int FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;
 unsigned int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 unsigned int FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_23(struct sk_buff *VAR_8,
      struct net_device *VAR_9)
{
 struct atl1_adapter *VAR_10 = FUNC_12(VAR_9);
 struct atl1_tpd_ring *VAR_11 = &VAR_10->tpd_ring;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 1;
 int VAR_15;
 struct tx_packet_desc *VAR_16;
 u16 VAR_17;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21;

 VAR_12 = FUNC_16(VAR_8);

 if (FUNC_22(VAR_8->len <= 0)) {
  FUNC_8(VAR_8);
  return VAR_4;
 }

 VAR_18 = FUNC_17(VAR_8)->nr_frags;
 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
  unsigned int VAR_22 = FUNC_15(&FUNC_17(VAR_8)->frags[VAR_20]);
  VAR_14 += (VAR_22 + VAR_0 - 1) /
    VAR_0;
 }

 VAR_19 = FUNC_17(VAR_8)->gso_size;
 if (VAR_19) {
  if (VAR_8->protocol == FUNC_10(VAR_1)) {
   VAR_21 = (FUNC_18(VAR_8) +
      FUNC_21(VAR_8));
   if (FUNC_22(VAR_21 > VAR_12)) {
    FUNC_8(VAR_8);
    return VAR_4;
   }

   if (VAR_21 != VAR_12)
    VAR_14 += (VAR_12 - VAR_21 +
     VAR_0 - 1) /
     VAR_0;
  }
 }

 if (FUNC_1(&VAR_10->tpd_ring) < VAR_14) {

  FUNC_14(VAR_9);
  if (FUNC_13(VAR_10))
   FUNC_9(VAR_2, &VAR_10->pdev->dev,
    "tx busy\n");
  return VAR_3;
 }

 VAR_16 = FUNC_0(VAR_11,
  (u16) FUNC_7(&VAR_11->next_to_use));
 FUNC_11(VAR_16, 0, sizeof(struct tx_packet_desc));

 if (FUNC_20(VAR_8)) {
  VAR_17 = FUNC_19(VAR_8);
  VAR_17 = (VAR_17 << 4) | (VAR_17 >> 13) |
   ((VAR_17 >> 9) & 0x8);
  VAR_16->word3 |= 1 << VAR_5;
  VAR_16->word2 |= (VAR_17 & VAR_6) <<
   VAR_7;
 }

 VAR_13 = FUNC_2(VAR_10, VAR_8, VAR_16);
 if (VAR_13 < 0) {
  FUNC_8(VAR_8);
  return VAR_4;
 }

 if (!VAR_13) {
  VAR_15 = FUNC_3(VAR_10, VAR_8, VAR_16);
  if (VAR_15 < 0) {
   FUNC_8(VAR_8);
   return VAR_4;
  }
 }

 FUNC_4(VAR_10, VAR_8, VAR_16);
 FUNC_5(VAR_10, VAR_14, VAR_16);
 FUNC_6(VAR_10);
 return VAR_4;
}
