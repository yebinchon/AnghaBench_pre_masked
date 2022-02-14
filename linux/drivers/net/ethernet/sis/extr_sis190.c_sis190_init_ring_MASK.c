
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sis190_private {scalar_t__ RxDescRing; int Rx_skbuff; int Tx_skbuff; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 struct sis190_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sis190_private*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sis190_private*) ;
 int FUNC_5 (struct sis190_private*,struct net_device*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3)
{
 struct sis190_private *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_4);

 FUNC_0(VAR_4->Tx_skbuff, 0x0, VAR_2 * sizeof(struct sk_buff *));
 FUNC_0(VAR_4->Rx_skbuff, 0x0, VAR_1 * sizeof(struct sk_buff *));

 if (FUNC_5(VAR_4, VAR_3, 0, VAR_1) != VAR_1)
  goto err_rx_clear;

 FUNC_3(VAR_4->RxDescRing + VAR_1 - 1);

 return 0;

err_rx_clear:
 FUNC_4(VAR_4);
 return -VAR_0;
}
