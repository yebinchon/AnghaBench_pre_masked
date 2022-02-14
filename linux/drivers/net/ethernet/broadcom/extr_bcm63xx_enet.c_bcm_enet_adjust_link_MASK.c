
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct bcm_enet_priv {scalar_t__ pause_tx; scalar_t__ pause_rx; scalar_t__ force_duplex_full; scalar_t__ force_speed_100; } ;


 int FUNC_0 (struct bcm_enet_priv*,scalar_t__) ;
 int FUNC_1 (struct bcm_enet_priv*,scalar_t__,scalar_t__) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct bcm_enet_priv *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1, VAR_1->force_duplex_full);
 FUNC_1(VAR_1, VAR_1->pause_rx, VAR_1->pause_tx);
 FUNC_3(VAR_0);

 FUNC_4("%s: link forced UP - %d/%s - flow control %s/%s\n",
  VAR_0->name,
  VAR_1->force_speed_100 ? 100 : 10,
  VAR_1->force_duplex_full ? "full" : "half",
  VAR_1->pause_rx ? "rx" : "off",
  VAR_1->pause_tx ? "tx" : "off");
}
