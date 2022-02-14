
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct w5100_priv {int dummy; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {int tx_packets; int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct w5100_priv*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct w5100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct w5100_priv*,int ) ;
 scalar_t__ FUNC_4 (struct w5100_priv*,int ) ;
 int FUNC_5 (struct w5100_priv*,int ,scalar_t__) ;
 int FUNC_6 (struct w5100_priv*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1, struct sk_buff *VAR_2)
{
 struct w5100_priv *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4;

 VAR_4 = FUNC_4(VAR_3, FUNC_0(VAR_3));
 FUNC_6(VAR_3, VAR_4, VAR_2->data, VAR_2->len);
 FUNC_5(VAR_3, FUNC_0(VAR_3), VAR_4 + VAR_2->len);
 VAR_1->stats.tx_bytes += VAR_2->len;
 VAR_1->stats.tx_packets++;
 FUNC_1(VAR_2);

 FUNC_3(VAR_3, VAR_0);
}
