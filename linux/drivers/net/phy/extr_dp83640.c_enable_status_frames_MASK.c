
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int attached_dev; struct dp83640_private* priv; } ;
struct dp83640_private {struct dp83640_clock* clock; } ;
struct dp83640_clock {int extreg_lock; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct phy_device*,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct phy_device*,char*) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(struct phy_device *VAR_12, bool VAR_13)
{
 struct dp83640_private *VAR_14 = VAR_12->priv;
 struct dp83640_clock *VAR_15 = VAR_14->clock;
 u16 VAR_16 = 0, VAR_17;

 if (VAR_13)
  VAR_16 = VAR_5 | VAR_7 | VAR_8 | VAR_0;

 VAR_17 = (VAR_6 & VAR_9) << VAR_10;

 FUNC_3(&VAR_15->extreg_lock);

 FUNC_2(0, VAR_12, VAR_1, VAR_3, VAR_16);
 FUNC_2(0, VAR_12, VAR_2, VAR_4, VAR_17);

 FUNC_4(&VAR_15->extreg_lock);

 if (!VAR_12->attached_dev) {
  FUNC_5(VAR_12,
       "expected to find an attached netdevice\n");
  return;
 }

 if (VAR_13) {
  if (FUNC_0(VAR_12->attached_dev, VAR_11))
   FUNC_5(VAR_12, "failed to add mc address\n");
 } else {
  if (FUNC_1(VAR_12->attached_dev, VAR_11))
   FUNC_5(VAR_12, "failed to delete mc address\n");
 }
}
