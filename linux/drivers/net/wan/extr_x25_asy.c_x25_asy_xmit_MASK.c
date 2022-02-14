
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_asy {int dev; } ;
struct sk_buff {int* data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 struct x25_asy* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2,
          struct net_device *VAR_3)
{
 struct x25_asy *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 if (!FUNC_6(VAR_4->dev)) {
  FUNC_4(VAR_3, "xmit call when iface is down\n");
  FUNC_0(VAR_2);
  return VAR_1;
 }

 switch (VAR_2->data[0]) {
 case 129:
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5 != VAR_0)
   FUNC_4(VAR_3, "lapb_connect_request error: %d\n",
       VAR_5);
  FUNC_0(VAR_2);
  return VAR_1;
 case 128:
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 != VAR_0)
   FUNC_4(VAR_3, "lapb_disconnect_request error: %d\n",
       VAR_5);

 default:
  FUNC_0(VAR_2);
  return VAR_1;
 }
 FUNC_7(VAR_2, 1);
 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5 != VAR_0) {
  FUNC_4(VAR_3, "lapb_data_request error: %d\n", VAR_5);
  FUNC_0(VAR_2);
  return VAR_1;
 }
 return VAR_1;
}
