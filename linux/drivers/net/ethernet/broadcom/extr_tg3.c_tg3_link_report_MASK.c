
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ active_speed; scalar_t__ active_duplex; int active_flowctrl; } ;
struct tg3 {int phy_flags; int dev; scalar_t__ link_up; scalar_t__ setlpicnt; TYPE_1__ link_config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tg3*,int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_7)
{
 if (!FUNC_1(VAR_7->dev)) {
  FUNC_2(VAR_7, VAR_6, VAR_7->dev, "Link is down\n");
  FUNC_4(VAR_7);
 } else if (FUNC_3(VAR_7)) {
  FUNC_0(VAR_7->dev, "Link is up at %d Mbps, %s duplex\n",
       (VAR_7->link_config.active_speed == VAR_4 ?
        1000 :
        (VAR_7->link_config.active_speed == VAR_3 ?
         100 : 10)),
       (VAR_7->link_config.active_duplex == VAR_0 ?
        "full" : "half"));

  FUNC_0(VAR_7->dev, "Flow control is %s for TX and %s for RX\n",
       (VAR_7->link_config.active_flowctrl & VAR_2) ?
       "on" : "off",
       (VAR_7->link_config.active_flowctrl & VAR_1) ?
       "on" : "off");

  if (VAR_7->phy_flags & VAR_5)
   FUNC_0(VAR_7->dev, "EEE is %s\n",
        VAR_7->setlpicnt ? "enabled" : "disabled");

  FUNC_4(VAR_7);
 }

 VAR_7->link_up = FUNC_1(VAR_7->dev);
}
