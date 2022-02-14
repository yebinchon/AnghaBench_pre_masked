
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct sk_buff {int len; scalar_t__ data; int head; } ;
struct net_device {int dummy; } ;
struct dnet {int lock; } ;
typedef int netdev_tx_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct dnet*,int ) ;
 int FUNC_3 (struct dnet*,unsigned long,int ) ;
 struct dnet* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int,int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_10(struct sk_buff *VAR_10, struct net_device *VAR_11)
{

 struct dnet *VAR_12 = FUNC_4(VAR_11);
 u32 VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19;
 unsigned int *VAR_20;

 VAR_13 = FUNC_2(VAR_12, VAR_9);

 FUNC_6("start_xmit: len %u head %p data %p\n",
        VAR_10->len, VAR_10->head, VAR_10->data);
 FUNC_1(VAR_10);


 VAR_15 = (VAR_10->len + 3) >> 2;

 FUNC_8(&VAR_12->lock, VAR_19);

 VAR_13 = FUNC_2(VAR_12, VAR_9);

 VAR_20 = (unsigned int *)(((unsigned long) VAR_10->data) & ~0x3UL);
 VAR_18 = (u32) VAR_10->len + 3;
 VAR_18 += ((unsigned long) VAR_10->data) & 0x3;
 VAR_18 >>= 2;
 VAR_17 = ((((unsigned long)(VAR_10->data)) & 0x03) << 16) | (u32) VAR_10->len;


 if (VAR_18 < (VAR_0 - FUNC_2(VAR_12, VAR_7))) {
  for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++)
   FUNC_3(VAR_12, *VAR_20++, VAR_6);





  FUNC_3(VAR_12, VAR_17, VAR_8);
 }

 if (FUNC_2(VAR_12, VAR_7) > VAR_1) {
  FUNC_5(VAR_11);
  VAR_13 = FUNC_2(VAR_12, VAR_4);
  VAR_14 = FUNC_2(VAR_12, VAR_3);
  VAR_14 |= VAR_2;
  FUNC_3(VAR_12, VAR_14, VAR_3);
 }

 FUNC_7(VAR_10);


 FUNC_0(VAR_10);

 FUNC_9(&VAR_12->lock, VAR_19);

 return VAR_5;
}
