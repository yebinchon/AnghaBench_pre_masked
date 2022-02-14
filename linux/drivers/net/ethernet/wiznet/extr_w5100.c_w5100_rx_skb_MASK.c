
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct w5100_priv {int dummy; } ;
struct sk_buff {int protocol; int * data; } ;
struct TYPE_2__ {scalar_t__ rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct w5100_priv*) ;
 int FUNC_1 (struct w5100_priv*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct sk_buff* FUNC_4 (struct net_device*,scalar_t__) ;
 struct w5100_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct w5100_priv*,int ) ;
 scalar_t__ FUNC_9 (struct w5100_priv*,int ) ;
 int FUNC_10 (struct w5100_priv*,scalar_t__,int *,scalar_t__) ;
 int FUNC_11 (struct w5100_priv*,int ,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_12(struct net_device *VAR_1)
{
 struct w5100_priv *VAR_2 = FUNC_5(VAR_1);
 struct sk_buff *VAR_3;
 u16 VAR_4;
 u16 VAR_5;
 u8 VAR_6[2];
 u16 VAR_7 = FUNC_9(VAR_2, FUNC_1(VAR_2));

 if (VAR_7 == 0)
  return ((void*)0);

 VAR_5 = FUNC_9(VAR_2, FUNC_0(VAR_2));
 FUNC_10(VAR_2, VAR_5, VAR_6, 2);
 VAR_4 = FUNC_3(VAR_6) - 2;

 VAR_3 = FUNC_4(VAR_1, VAR_4);
 if (FUNC_7(!VAR_3)) {
  FUNC_11(VAR_2, FUNC_0(VAR_2), VAR_5 + VAR_7);
  FUNC_8(VAR_2, VAR_0);
  VAR_1->stats.rx_dropped++;
  return ((void*)0);
 }

 FUNC_6(VAR_3, VAR_4);
 FUNC_10(VAR_2, VAR_5 + 2, VAR_3->data, VAR_4);
 FUNC_11(VAR_2, FUNC_0(VAR_2), VAR_5 + 2 + VAR_4);
 FUNC_8(VAR_2, VAR_0);
 VAR_3->protocol = FUNC_2(VAR_3, VAR_1);

 VAR_1->stats.rx_packets++;
 VAR_1->stats.rx_bytes += VAR_4;

 return VAR_3;
}
