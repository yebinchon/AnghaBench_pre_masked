
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct fec_platform_data {int (* sleep_mode_enable ) (int) ;} ;
struct fec_enet_private {int wol_flag; int quirks; int phy_speed; scalar_t__ hwp; scalar_t__ link; TYPE_2__* pdev; } ;
struct TYPE_3__ {struct fec_platform_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_14)
{
 struct fec_enet_private *VAR_15 = FUNC_1(VAR_14);
 struct fec_platform_data *VAR_16 = VAR_15->pdev->dev.platform_data;
 u32 VAR_17 = FUNC_2(VAR_15->hwp + VAR_11) & (1 << 8);
 u32 VAR_18;


 if (VAR_15->link) {
  FUNC_5(1, VAR_15->hwp + VAR_13);
  FUNC_4(10);
  if (!(FUNC_2(VAR_15->hwp + VAR_6) & VAR_4))
   FUNC_0(VAR_14, "Graceful transmit stop did not complete!\n");
 }





 if (!(VAR_15->wol_flag & VAR_12)) {
  if (VAR_15->quirks & VAR_10) {
   FUNC_5(0, VAR_15->hwp + VAR_1);
  } else {
   FUNC_5(1, VAR_15->hwp + VAR_1);
   FUNC_4(10);
  }
  FUNC_5(VAR_0, VAR_15->hwp + VAR_7);
 } else {
  FUNC_5(VAR_0 | VAR_5, VAR_15->hwp + VAR_7);
  VAR_18 = FUNC_2(VAR_15->hwp + VAR_1);
  VAR_18 |= (VAR_2 | VAR_3);
  FUNC_5(VAR_18, VAR_15->hwp + VAR_1);

  if (VAR_16 && VAR_16->sleep_mode_enable)
   VAR_16->sleep_mode_enable(1);
 }
 FUNC_5(VAR_15->phy_speed, VAR_15->hwp + VAR_8);


 if (VAR_15->quirks & VAR_9 &&
  !(VAR_15->wol_flag & VAR_12)) {
  FUNC_5(2, VAR_15->hwp + VAR_1);
  FUNC_5(VAR_17, VAR_15->hwp + VAR_11);
 }
}
