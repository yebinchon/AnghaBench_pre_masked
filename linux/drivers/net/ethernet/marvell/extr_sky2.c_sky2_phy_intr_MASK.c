
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {int phy_lock; int duplex; int speed; int netdev; } ;
struct sky2_hw {struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sky2_hw*,unsigned int,int ) ;
 int VAR_10 ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sky2_port*,int ,int ,char*,int,int) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sky2_port*,int) ;
 int FUNC_6 (struct sky2_port*) ;
 int FUNC_7 (struct sky2_port*) ;
 int FUNC_8 (struct sky2_hw*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct sky2_hw *VAR_11, unsigned VAR_12)
{
 struct net_device *VAR_13 = VAR_11->dev[VAR_12];
 struct sky2_port *VAR_14 = FUNC_1(VAR_13);
 u16 VAR_15, VAR_16;

 if (!FUNC_4(VAR_13))
  return;

 FUNC_9(&VAR_14->phy_lock);
 VAR_15 = FUNC_0(VAR_11, VAR_12, VAR_2);
 VAR_16 = FUNC_0(VAR_11, VAR_12, VAR_3);

 FUNC_3(VAR_14, VAR_10, VAR_14->netdev, "phy interrupt status 0x%x 0x%x\n",
     VAR_15, VAR_16);

 if (VAR_15 & VAR_4) {
  if (FUNC_5(VAR_14, VAR_16) == 0 &&
      !FUNC_2(VAR_13))
   FUNC_7(VAR_14);
  goto out;
 }

 if (VAR_15 & VAR_6)
  VAR_14->speed = FUNC_8(VAR_11, VAR_16);

 if (VAR_15 & VAR_5)
  VAR_14->duplex =
      (VAR_16 & VAR_8) ? VAR_0 : VAR_1;

 if (VAR_15 & VAR_7) {
  if (VAR_16 & VAR_9)
   FUNC_7(VAR_14);
  else
   FUNC_6(VAR_14);
 }
out:
 FUNC_10(&VAR_14->phy_lock);
}
