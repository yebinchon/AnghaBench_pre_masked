
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct can_priv {int rxtx_led_trig; int rx_led_trig; int tx_led_trig; } ;


 int FUNC_0 (int ) ;
 struct can_priv* FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct can_priv *VAR_2 = FUNC_1(FUNC_2(VAR_0));

 FUNC_0(VAR_2->tx_led_trig);
 FUNC_0(VAR_2->rx_led_trig);
 FUNC_0(VAR_2->rxtx_led_trig);
}
