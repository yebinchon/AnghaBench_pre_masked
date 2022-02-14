
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; } ;
struct mt7615_mcu_txd {int seq; int cid; int ext_cid; int ext_cid_ack; int s2d_index; int set_query; int pkt_type; void* pq_id; void* len; int * txd; } ;
struct TYPE_4__ {int msg_seq; } ;
struct TYPE_5__ {TYPE_1__ mcu; } ;
struct TYPE_6__ {int state; TYPE_2__ mmio; } ;
struct mt7615_dev {TYPE_3__ mt76; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;
typedef int __le32 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mt7615_mcu_txd*,int ,int) ;
 int FUNC_5 (struct mt7615_dev*,int,struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mt7615_dev *VAR_21, struct sk_buff *VAR_22,
     int VAR_23, int *VAR_24)
{
 struct mt7615_mcu_txd *VAR_25;
 u8 VAR_26, VAR_27, VAR_28;
 enum mt76_txq_id VAR_29;
 u32 VAR_30;
 __le32 *VAR_31;

 VAR_26 = ++VAR_21->mt76.mmio.mcu.msg_seq & 0xf;
 if (!VAR_26)
  VAR_26 = ++VAR_21->mt76.mmio.mcu.msg_seq & 0xf;

 VAR_25 = (struct mt7615_mcu_txd *)FUNC_6(VAR_22,
     sizeof(struct mt7615_mcu_txd));
 FUNC_4(VAR_25, 0, sizeof(struct mt7615_mcu_txd));

 if (VAR_23 != -VAR_1) {
  VAR_27 = VAR_17;
  VAR_28 = VAR_19;
 } else {
  VAR_27 = VAR_16;
  VAR_28 = VAR_20;
 }

 VAR_31 = VAR_25->txd;

 VAR_30 = FUNC_0(VAR_10, VAR_22->len) |
       FUNC_0(VAR_8, VAR_18) |
       FUNC_0(VAR_9, VAR_27);
 VAR_31[0] = FUNC_3(VAR_30);

 VAR_30 = VAR_12 |
       FUNC_0(VAR_11, VAR_7) |
       FUNC_0(VAR_13, VAR_28);
 VAR_31[1] = FUNC_3(VAR_30);

 VAR_25->len = FUNC_2(VAR_22->len - sizeof(VAR_25->txd));
 VAR_25->pq_id = FUNC_2(FUNC_1(VAR_18, VAR_27));
 VAR_25->pkt_type = VAR_2;
 VAR_25->seq = VAR_26;

 if (VAR_23 < 0) {
  VAR_25->set_query = VAR_3;
  VAR_25->cid = -VAR_23;
 } else {
  VAR_25->cid = VAR_0;
  VAR_25->set_query = VAR_4;
  VAR_25->ext_cid = VAR_23;
  VAR_25->ext_cid_ack = 1;
 }
 VAR_25->s2d_index = VAR_5;

 if (VAR_24)
  *VAR_24 = VAR_26;

 if (FUNC_7(VAR_6, &VAR_21->mt76.state))
  VAR_29 = VAR_15;
 else
  VAR_29 = VAR_14;

 return FUNC_5(VAR_21, VAR_29, VAR_22, 0);
}
