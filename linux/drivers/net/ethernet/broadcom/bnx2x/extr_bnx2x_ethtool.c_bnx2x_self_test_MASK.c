
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct TYPE_2__ {int link_status; int link_up; } ;
struct bnx2x {scalar_t__ recovery_state; TYPE_1__ link_vars; int dev; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct bnx2x*,scalar_t__) ;
 int FUNC_5 (struct bnx2x*,scalar_t__,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct bnx2x*,int) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int FUNC_8 (struct bnx2x*,int ,int) ;
 int FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 scalar_t__ FUNC_12 (struct bnx2x*) ;
 scalar_t__ FUNC_13 (struct bnx2x*) ;
 scalar_t__ FUNC_14 (struct bnx2x*) ;
 int FUNC_15 (struct bnx2x*,int,int) ;
 int FUNC_16 (int*,int ,int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,char*) ;
 struct bnx2x* FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;
 scalar_t__ FUNC_21 (int ) ;

__attribute__((used)) static void FUNC_22(struct net_device *VAR_12,
       struct ethtool_test *VAR_13, u64 *VAR_14)
{
 struct bnx2x *VAR_15 = FUNC_19(VAR_12);
 u8 VAR_16, VAR_17;
 int VAR_18, VAR_19 = 0;

 if (FUNC_21(VAR_15->pdev)) {
  FUNC_2(VAR_1,
     "VFs are enabled, can not perform self test\n");
  return;
 }

 if (VAR_15->recovery_state != VAR_2) {
  FUNC_18(VAR_15->dev,
      "Handling parity error recovery. Try again later\n");
  VAR_13->flags |= VAR_5;
  return;
 }

 FUNC_2(VAR_0,
    "Self-test command parameters: offline = %d, external_lb = %d\n",
    (VAR_13->flags & VAR_6),
    (VAR_13->flags & VAR_3)>>2);

 FUNC_16(VAR_14, 0, sizeof(u64) * FUNC_0(VAR_15));

 if (FUNC_13(VAR_15) != 0) {
  if (!FUNC_3(VAR_15))
   VAR_14[4] = 1;
  else
   VAR_14[0] = 1;
  VAR_13->flags |= VAR_5;
 }

 if (!FUNC_20(VAR_12)) {
  FUNC_2(VAR_0, "Interface is down\n");
  return;
 }

 VAR_16 = (VAR_15->link_vars.link_status & VAR_7) > 0;
 VAR_17 = VAR_15->link_vars.link_up;

 if ((VAR_13->flags & VAR_6) && !FUNC_3(VAR_15)) {
  int VAR_20 = FUNC_1(VAR_15);
  u32 VAR_21;


  VAR_21 = FUNC_4(VAR_15, VAR_10 + VAR_20*4);

  FUNC_5(VAR_15, VAR_10 + VAR_20*4, 0);

  FUNC_8(VAR_15, VAR_11, 0);
  VAR_18 = FUNC_7(VAR_15, VAR_8);
  if (VAR_18) {
   VAR_13->flags |= VAR_5;
   FUNC_2(VAR_0,
      "Can't perform self-test, nic_load (for offline) failed\n");
   return;
  }


  FUNC_15(VAR_15, 1, VAR_16);

  if (FUNC_14(VAR_15) != 0) {
   VAR_14[0] = 1;
   VAR_13->flags |= VAR_5;
  }
  if (FUNC_12(VAR_15) != 0) {
   VAR_14[1] = 1;
   VAR_13->flags |= VAR_5;
  }

  VAR_14[2] = FUNC_11(VAR_15);
  if (VAR_14[2] != 0)
   VAR_13->flags |= VAR_5;

  if (VAR_13->flags & VAR_3) {
   VAR_14[3] = FUNC_9(VAR_15);
   if (VAR_14[3] != 0)
    VAR_13->flags |= VAR_5;
   VAR_13->flags |= VAR_4;
  }

  FUNC_8(VAR_15, VAR_11, 0);


  FUNC_5(VAR_15, VAR_10 + VAR_20*4, VAR_21);
  VAR_18 = FUNC_7(VAR_15, VAR_9);
  if (VAR_18) {
   VAR_13->flags |= VAR_5;
   FUNC_2(VAR_0,
      "Can't perform self-test, nic_load (for online) failed\n");
   return;
  }

  FUNC_15(VAR_15, VAR_17, VAR_16);
 }

 if (FUNC_10(VAR_15) != 0) {
  if (!FUNC_3(VAR_15))
   VAR_14[5] = 1;
  else
   VAR_14[1] = 1;
  VAR_13->flags |= VAR_5;
 }

 if (VAR_17) {
  VAR_19 = 100;
  while (FUNC_6(VAR_15, VAR_16) && --VAR_19)
   FUNC_17(20);
 }

 if (!VAR_19) {
  if (!FUNC_3(VAR_15))
   VAR_14[6] = 1;
  else
   VAR_14[2] = 1;
  VAR_13->flags |= VAR_5;
 }
}
