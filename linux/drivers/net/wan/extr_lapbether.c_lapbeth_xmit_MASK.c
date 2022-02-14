
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_2,
          struct net_device *VAR_3)
{
 int VAR_4;





 if (!FUNC_4(VAR_3))
  goto drop;

 switch (VAR_2->data[0]) {
 case 129:
  break;
 case 130:
  if ((VAR_4 = FUNC_1(VAR_3)) != VAR_0)
   FUNC_5("lapb_connect_request error: %d\n", VAR_4);
  goto drop;
 case 128:
  if ((VAR_4 = FUNC_3(VAR_3)) != VAR_0)
   FUNC_5("lapb_disconnect_request err: %d\n", VAR_4);

 default:
  goto drop;
 }

 FUNC_6(VAR_2, 1);

 if ((VAR_4 = FUNC_2(VAR_3, VAR_2)) != VAR_0) {
  FUNC_5("lapb_data_request error - %d\n", VAR_4);
  goto drop;
 }
out:
 return VAR_1;
drop:
 FUNC_0(VAR_2);
 goto out;
}
