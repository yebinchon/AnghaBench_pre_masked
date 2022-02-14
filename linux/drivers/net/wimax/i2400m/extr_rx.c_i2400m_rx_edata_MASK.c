
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct sk_buff {int cb; scalar_t__ data; } ;
struct TYPE_4__ {int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct i2400m_roq_data {unsigned int sn; int cs; } ;
struct i2400m_roq {int ws; } ;
struct i2400m_pl_edata_hdr {int cs; int reorder; } ;
struct TYPE_3__ {struct net_device* net_dev; } ;
struct i2400m {int rx_lock; int rx_roq_refcount; struct i2400m_roq* rx_roq; TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;
typedef enum i2400m_cs { ____Placeholder_i2400m_cs } i2400m_cs ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;



 unsigned int VAR_8 ;

 int FUNC_1 (struct i2400m_roq*,unsigned int) ;
 int FUNC_2 (int,struct device*,void const*,size_t) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct sk_buff*,unsigned int,void const*,size_t) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*,struct sk_buff*,unsigned int,void const*,size_t) ;
 int FUNC_5 (int,struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,...) ;
 struct device* FUNC_7 (struct i2400m*) ;
 int FUNC_8 (struct i2400m*,struct sk_buff*,int) ;
 int FUNC_9 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_10 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_11 (struct i2400m*,struct i2400m_roq*) ;
 int FUNC_12 (struct i2400m*,struct i2400m_roq*,unsigned int) ;
 int VAR_9 ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 unsigned int FUNC_16 (int ) ;
 struct sk_buff* FUNC_17 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 struct sk_buff* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;

__attribute__((used)) static
void FUNC_24(struct i2400m *VAR_10, struct sk_buff *VAR_11,
       unsigned VAR_12, const void *VAR_13, size_t VAR_14)
{
 struct device *VAR_15 = FUNC_7(VAR_10);
 const struct i2400m_pl_edata_hdr *VAR_16 = VAR_13;
 struct net_device *VAR_17 = VAR_10->wimax_dev.net_dev;
 struct sk_buff *VAR_18;
 enum i2400m_cs VAR_19;
 u32 VAR_20;
 unsigned VAR_21, VAR_22, VAR_23, VAR_24;
 struct i2400m_roq *VAR_25;
 struct i2400m_roq_data *VAR_26;
 unsigned long VAR_27;

 FUNC_0(VAR_0 > sizeof(*VAR_16));

 FUNC_4(2, VAR_15, "(i2400m %p skb_rx %p single %u payload %p "
    "size %zu)\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 if (VAR_14 < sizeof(*VAR_16)) {
  FUNC_6(VAR_15, "ERX: HW BUG? message with short header (%zu "
   "vs %zu bytes expected)\n", VAR_14, sizeof(*VAR_16));
  goto error;
 }

 if (VAR_12) {
  VAR_18 = FUNC_19(VAR_11);
  FUNC_5(3, VAR_15, "ERX: skb %p reusing\n", VAR_18);
 } else {
  VAR_18 = FUNC_17(VAR_11, VAR_1);
  if (VAR_18 == ((void*)0)) {
   FUNC_6(VAR_15, "ERX: no memory to clone skb\n");
   VAR_17->stats.rx_dropped++;
   goto error_skb_clone;
  }
  FUNC_5(3, VAR_15, "ERX: skb %p cloned from %p\n", VAR_18, VAR_11);
 }




 FUNC_20(VAR_18, VAR_13 + sizeof(*VAR_16) - (void *) VAR_18->data);
 FUNC_21(VAR_18, (void *) FUNC_18(VAR_18) - VAR_13 - sizeof(*VAR_16));

 VAR_20 = FUNC_16(VAR_16->reorder);
 VAR_21 = VAR_20 & VAR_4;
 VAR_19 = VAR_16->cs;
 if (VAR_21) {
  VAR_22 = (VAR_20 >> VAR_8) & VAR_7;
  VAR_23 = (VAR_20 >> VAR_3) & VAR_2;
  VAR_24 = (VAR_20 >> VAR_6) & VAR_5;

  FUNC_22(&VAR_10->rx_lock, VAR_27);
  if (VAR_10->rx_roq == ((void*)0)) {
   FUNC_13(VAR_18);
   FUNC_23(&VAR_10->rx_lock, VAR_27);
   goto error;
  }
  VAR_25 = &VAR_10->rx_roq[VAR_23];
  FUNC_14(&VAR_10->rx_roq_refcount);
  FUNC_23(&VAR_10->rx_lock, VAR_27);

  VAR_26 = (struct i2400m_roq_data *) &VAR_18->cb;
  VAR_26->sn = VAR_24;
  VAR_26->cs = VAR_19;
  FUNC_5(2, VAR_15, "ERX: reorder needed: "
    "type %u cin %u [ws %u] sn %u/%u len %zuB\n",
    VAR_22, VAR_23, VAR_25->ws, VAR_24,
    FUNC_1(VAR_25, VAR_24), VAR_14);
  FUNC_2(2, VAR_15, VAR_13, VAR_14);
  switch(VAR_22) {
  case 129:
   FUNC_11(VAR_10, VAR_25);
   FUNC_13(VAR_18);
   break;
  case 131:
   FUNC_9(VAR_10, VAR_25, VAR_18, VAR_24);
   break;
  case 128:
   FUNC_12(VAR_10, VAR_25, VAR_24);
   FUNC_13(VAR_18);
   break;
  case 130:
   FUNC_10(VAR_10, VAR_25, VAR_18, VAR_24);
   break;
  default:
   FUNC_6(VAR_15, "HW BUG? unknown reorder type %u\n", VAR_22);
  }

  FUNC_22(&VAR_10->rx_lock, VAR_27);
  FUNC_15(&VAR_10->rx_roq_refcount, VAR_9);
  FUNC_23(&VAR_10->rx_lock, VAR_27);
 }
 else
  FUNC_8(VAR_10, VAR_18, VAR_19);
error_skb_clone:
error:
 FUNC_3(2, VAR_15, "(i2400m %p skb_rx %p single %u payload %p "
  "size %zu) = void\n", VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
}
