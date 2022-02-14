
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ionic_queue {int drop; int stop; } ;
struct ionic_lif {int state; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ionic_queue*,int) ;
 int FUNC_2 (struct ionic_queue*,struct sk_buff*) ;
 int FUNC_3 (struct ionic_queue*,struct sk_buff*) ;
 int FUNC_4 (struct ionic_queue*,struct sk_buff*) ;
 struct ionic_queue* FUNC_5 (struct ionic_lif*,scalar_t__) ;
 int FUNC_6 (struct ionic_lif*,scalar_t__) ;
 struct ionic_lif* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

netdev_tx_t FUNC_12(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 u16 VAR_5 = FUNC_8(VAR_3);
 struct ionic_lif *VAR_6 = FUNC_7(VAR_4);
 struct ionic_queue *VAR_7;
 int VAR_8;
 int VAR_9;

 if (FUNC_11(!FUNC_10(VAR_0, VAR_6->state))) {
  FUNC_0(VAR_3);
  return VAR_2;
 }

 if (FUNC_11(!FUNC_6(VAR_6, VAR_5)))
  VAR_5 = 0;
 VAR_7 = FUNC_5(VAR_6, VAR_5);

 VAR_8 = FUNC_3(VAR_7, VAR_3);
 if (VAR_8 < 0)
  goto err_out_drop;

 if (FUNC_11(FUNC_1(VAR_7, VAR_8)))
  return VAR_1;

 if (FUNC_9(VAR_3))
  VAR_9 = FUNC_4(VAR_7, VAR_3);
 else
  VAR_9 = FUNC_2(VAR_7, VAR_3);

 if (VAR_9)
  goto err_out_drop;





 FUNC_1(VAR_7, 4);

 return VAR_2;

err_out_drop:
 VAR_7->stop++;
 VAR_7->drop++;
 FUNC_0(VAR_3);
 return VAR_2;
}
