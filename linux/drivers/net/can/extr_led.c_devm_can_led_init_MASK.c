
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char* name; int dev; } ;
struct can_priv {int rxtx_led_trig; int rxtx_led_trig_name; int rx_led_trig; int rx_led_trig_name; int tx_led_trig; int tx_led_trig_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct can_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int,char*,char*) ;

void FUNC_6(struct net_device *VAR_2)
{
 struct can_priv *VAR_3 = FUNC_4(VAR_2);
 void *VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, VAR_0);
 if (!VAR_4) {
  FUNC_3(VAR_2, "cannot register LED triggers\n");
  return;
 }

 FUNC_5(VAR_3->tx_led_trig_name, sizeof(VAR_3->tx_led_trig_name),
   "%s-tx", VAR_2->name);
 FUNC_5(VAR_3->rx_led_trig_name, sizeof(VAR_3->rx_led_trig_name),
   "%s-rx", VAR_2->name);
 FUNC_5(VAR_3->rxtx_led_trig_name, sizeof(VAR_3->rxtx_led_trig_name),
   "%s-rxtx", VAR_2->name);

 FUNC_2(VAR_3->tx_led_trig_name,
        &VAR_3->tx_led_trig);
 FUNC_2(VAR_3->rx_led_trig_name,
        &VAR_3->rx_led_trig);
 FUNC_2(VAR_3->rxtx_led_trig_name,
        &VAR_3->rxtx_led_trig);

 FUNC_0(&VAR_2->dev, VAR_4);
}
