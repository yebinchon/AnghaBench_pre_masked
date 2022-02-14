
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {char* name; } ;
struct can_priv {int rxtx_led_trig; int rx_led_trig; int tx_led_trig; } ;
typedef int name ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 struct net_device* FUNC_1 (void*) ;
 struct can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_3, unsigned long VAR_4,
       void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_1(VAR_5);
 struct can_priv *VAR_7 = FUNC_2(VAR_6);
 char VAR_8[VAR_0];

 if (!VAR_7)
  return VAR_2;

 if (!VAR_7->tx_led_trig || !VAR_7->rx_led_trig || !VAR_7->rxtx_led_trig)
  return VAR_2;

 if (VAR_4 == VAR_1) {
  FUNC_3(VAR_8, sizeof(VAR_8), "%s-tx", VAR_6->name);
  FUNC_0(VAR_8, VAR_7->tx_led_trig);

  FUNC_3(VAR_8, sizeof(VAR_8), "%s-rx", VAR_6->name);
  FUNC_0(VAR_8, VAR_7->rx_led_trig);

  FUNC_3(VAR_8, sizeof(VAR_8), "%s-rxtx", VAR_6->name);
  FUNC_0(VAR_8, VAR_7->rxtx_led_trig);
 }

 return VAR_2;
}
