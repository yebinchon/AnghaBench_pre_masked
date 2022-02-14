
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct arcnet_local {int recon_led_trig; int recon_led_trig_name; int tx_led_trig; int tx_led_trig_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*) ;
 void* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct arcnet_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int,char*,int,int) ;

void FUNC_6(struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 struct arcnet_local *VAR_5 = FUNC_4(VAR_2);
 void *VAR_6;

 VAR_6 = FUNC_1(VAR_1, 0, VAR_0);
 if (!VAR_6) {
  FUNC_3(VAR_2, "cannot register LED triggers\n");
  return;
 }

 FUNC_5(VAR_5->tx_led_trig_name, sizeof(VAR_5->tx_led_trig_name),
   "arc%d-%d-tx", VAR_3, VAR_4);
 FUNC_5(VAR_5->recon_led_trig_name, sizeof(VAR_5->recon_led_trig_name),
   "arc%d-%d-recon", VAR_3, VAR_4);

 FUNC_2(VAR_5->tx_led_trig_name,
        &VAR_5->tx_led_trig);
 FUNC_2(VAR_5->recon_led_trig_name,
        &VAR_5->recon_led_trig);

 FUNC_0(&VAR_2->dev, VAR_6);
}
