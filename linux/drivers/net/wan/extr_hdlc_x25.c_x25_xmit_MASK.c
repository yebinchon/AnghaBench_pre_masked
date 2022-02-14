
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct net_device*,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 int VAR_6;



 switch (VAR_4->data[0]) {
 case 129:
  FUNC_5(VAR_4, 1);
  if ((VAR_6 = FUNC_2(VAR_5, VAR_4)) != VAR_2)
   FUNC_0(VAR_4);
  return VAR_3;

 case 130:
  if ((VAR_6 = FUNC_1(VAR_5))!= VAR_2) {
   if (VAR_6 == VAR_0)

    FUNC_6(VAR_5, 0);
   else
    FUNC_4(VAR_5, "LAPB connect request failed, error code = %i\n",
        VAR_6);
  }
  break;

 case 128:
  if ((VAR_6 = FUNC_3(VAR_5)) != VAR_2) {
   if (VAR_6 == VAR_1)

    FUNC_7(VAR_5, 0);
   else
    FUNC_4(VAR_5, "LAPB disconnect request failed, error code = %i\n",
        VAR_6);
  }
  break;

 default:
  break;
 }

 FUNC_0(VAR_4);
 return VAR_3;
}
