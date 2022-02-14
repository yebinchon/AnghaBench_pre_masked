
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {int num_rx_qs; int num_tx_qs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6, int VAR_7)
{
 struct be_adapter *VAR_8 = FUNC_1(VAR_6);

 switch (VAR_7) {
 case 128:
  return VAR_3;
 case 129:
  return VAR_2 +
   VAR_8->num_rx_qs * VAR_1 +
   VAR_8->num_tx_qs * VAR_4;
 case 130:
  return FUNC_0(VAR_5);
 default:
  return -VAR_0;
 }
}
