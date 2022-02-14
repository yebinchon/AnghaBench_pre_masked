
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct TYPE_3__ {int msg_seq; } ;
struct TYPE_4__ {TYPE_1__ mcu; } ;
struct mt76_dev {TYPE_2__ mmio; } ;
struct mt7603_mcu_txd {int seq; int cid; int ext_cid; int ext_cid_ack; int set_query; int pkt_type; void* pq_id; void* len; } ;
struct mt7603_dev {struct mt76_dev mt76; scalar_t__ mcu_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct mt7603_mcu_txd*,int ,int) ;
 int FUNC_2 (struct mt7603_dev*,int ,struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_4(struct mt7603_dev *VAR_8, struct sk_buff *VAR_9,
        int VAR_10, int *VAR_11)
{
 int VAR_12 = VAR_8->mcu_running ? sizeof(struct mt7603_mcu_txd) : 12;
 struct mt76_dev *VAR_13 = &VAR_8->mt76;
 struct mt7603_mcu_txd *VAR_14;
 u8 VAR_15;

 VAR_15 = ++VAR_13->mmio.mcu.msg_seq & 0xf;
 if (!VAR_15)
  VAR_15 = ++VAR_13->mmio.mcu.msg_seq & 0xf;

 VAR_14 = (struct mt7603_mcu_txd *)FUNC_3(VAR_9, VAR_12);
 FUNC_1(VAR_14, 0, VAR_12);

 VAR_14->len = FUNC_0(VAR_9->len);
 if (VAR_10 == -VAR_1)
  VAR_14->pq_id = FUNC_0(VAR_4);
 else
  VAR_14->pq_id = FUNC_0(VAR_3);
 VAR_14->pkt_type = VAR_2;
 VAR_14->seq = VAR_15;

 if (VAR_10 < 0) {
  VAR_14->cid = -VAR_10;
  VAR_14->set_query = VAR_5;
 } else {
  VAR_14->cid = VAR_0;
  VAR_14->ext_cid = VAR_10;
  VAR_14->set_query = VAR_6;
  VAR_14->ext_cid_ack = 1;
 }

 if (VAR_11)
  *VAR_11 = VAR_15;

 return FUNC_2(VAR_8, VAR_7, VAR_9, 0);
}
