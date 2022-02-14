
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct bnx2 {scalar_t__ link_up; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int) ;
 int FUNC_3 (struct bnx2*,int) ;
 int FUNC_4 (struct bnx2*,int ) ;
 int FUNC_5 (struct bnx2*) ;
 scalar_t__ FUNC_6 (struct bnx2*) ;
 scalar_t__ FUNC_7 (struct bnx2*) ;
 int FUNC_8 (struct bnx2*) ;
 scalar_t__ FUNC_9 (struct bnx2*) ;
 scalar_t__ FUNC_10 (struct bnx2*) ;
 scalar_t__ FUNC_11 (struct bnx2*) ;
 int FUNC_12 (int*,int ,int) ;
 int FUNC_13 (int) ;
 struct bnx2* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(struct net_device *VAR_4, struct ethtool_test *VAR_5, u64 *VAR_6)
{
 struct bnx2 *VAR_7 = FUNC_14(VAR_4);

 FUNC_12(VAR_6, 0, sizeof(u64) * VAR_1);
 if (VAR_5->flags & VAR_3) {
  int VAR_8;

  FUNC_3(VAR_7, 1);
  FUNC_4(VAR_7, VAR_0);
  FUNC_0(VAR_7);

  if (FUNC_11(VAR_7) != 0) {
   VAR_6[0] = 1;
   VAR_5->flags |= VAR_2;
  }
  if (FUNC_9(VAR_7) != 0) {
   VAR_6[1] = 1;
   VAR_5->flags |= VAR_2;
  }
  if ((VAR_6[2] = FUNC_8(VAR_7)) != 0)
   VAR_5->flags |= VAR_2;

  if (!FUNC_15(VAR_7->dev))
   FUNC_5(VAR_7);
  else {
   FUNC_1(VAR_7, 1);
   FUNC_2(VAR_7, 1);
  }


  for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
   if (VAR_7->link_up)
    break;
   FUNC_13(1000);
  }
 }

 if (FUNC_10(VAR_7) != 0) {
  VAR_6[3] = 1;
  VAR_5->flags |= VAR_2;
 }
 if (FUNC_6(VAR_7) != 0) {
  VAR_6[4] = 1;
  VAR_5->flags |= VAR_2;
 }

 if (FUNC_7(VAR_7) != 0) {
  VAR_6[5] = 1;
  VAR_5->flags |= VAR_2;

 }
}
