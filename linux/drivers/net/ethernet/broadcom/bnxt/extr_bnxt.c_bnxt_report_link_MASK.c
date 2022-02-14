
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ duplex; scalar_t__ pause; int fec_cfg; int link_speed; scalar_t__ link_up; } ;
struct TYPE_3__ {scalar_t__ eee_active; } ;
struct bnxt {int flags; int dev; TYPE_2__ link_info; TYPE_1__ eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bnxt *VAR_9)
{
 if (VAR_9->link_info.link_up) {
  const char *VAR_10;
  const char *VAR_11;
  u32 VAR_12;
  u16 VAR_13;

  FUNC_4(VAR_9->dev);
  if (VAR_9->link_info.duplex == VAR_4)
   VAR_10 = "full";
  else
   VAR_10 = "half";
  if (VAR_9->link_info.pause == VAR_5)
   VAR_11 = "ON - receive & transmit";
  else if (VAR_9->link_info.pause == VAR_7)
   VAR_11 = "ON - transmit";
  else if (VAR_9->link_info.pause == VAR_6)
   VAR_11 = "ON - receive";
  else
   VAR_11 = "none";
  VAR_12 = FUNC_0(VAR_9->link_info.link_speed);
  FUNC_2(VAR_9->dev, "NIC Link is Up, %u Mbps %s duplex, Flow control: %s\n",
       VAR_12, VAR_10, VAR_11);
  if (VAR_9->flags & VAR_3)
   FUNC_2(VAR_9->dev, "EEE is %s\n",
        VAR_9->eee.eee_active ? "active" :
        "not active");
  VAR_13 = VAR_9->link_info.fec_cfg;
  if (!(VAR_13 & VAR_8))
   FUNC_2(VAR_9->dev, "FEC autoneg %s encodings: %s\n",
        (VAR_13 & VAR_0) ? "on" : "off",
        (VAR_13 & VAR_1) ? "BaseR" :
         (VAR_13 & VAR_2) ? "RS" : "None");
 } else {
  FUNC_3(VAR_9->dev);
  FUNC_1(VAR_9->dev, "NIC Link is Down\n");
 }
}
