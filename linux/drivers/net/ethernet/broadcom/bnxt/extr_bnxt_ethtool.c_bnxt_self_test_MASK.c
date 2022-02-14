
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct TYPE_3__ {scalar_t__ active_vfs; } ;
struct bnxt {int num_tests; TYPE_2__* test_info; TYPE_1__ pf; } ;
struct TYPE_4__ {int flags; int offline_mask; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct bnxt*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*,int) ;
 int FUNC_5 (struct bnxt*,int,int) ;
 int FUNC_6 (struct bnxt*,int,int) ;
 int FUNC_7 (struct bnxt*,int,int*) ;
 scalar_t__ FUNC_8 (struct bnxt*) ;
 scalar_t__ FUNC_9 (struct bnxt*) ;
 int FUNC_10 (int*,int ,int) ;
 int FUNC_11 (int) ;
 struct bnxt* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,char*) ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_10, struct ethtool_test *VAR_11,
      u64 *VAR_12)
{
 struct bnxt *VAR_13 = FUNC_12(VAR_10);
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 u8 VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18 = 0, VAR_19;

 if (!VAR_13->num_tests || !FUNC_0(VAR_13))
  return;
 FUNC_10(VAR_12, 0, sizeof(u64) * VAR_13->num_tests);
 if (!FUNC_14(VAR_10)) {
  VAR_11->flags |= VAR_8;
  return;
 }

 if ((VAR_11->flags & VAR_6) &&
     (VAR_13->test_info->flags & VAR_5))
  VAR_14 = 1;

 if (VAR_11->flags & VAR_9) {
  if (VAR_13->pf.active_vfs) {
   VAR_11->flags |= VAR_8;
   FUNC_13(VAR_10, "Offline tests cannot be run with active VFs\n");
   return;
  }
  VAR_15 = 1;
 }

 for (VAR_19 = 0; VAR_19 < VAR_13->num_tests - VAR_0; VAR_19++) {
  u8 VAR_20 = 1 << VAR_19;

  if (!(VAR_13->test_info->offline_mask & VAR_20))
   VAR_17 |= VAR_20;
  else if (VAR_15)
   VAR_17 |= VAR_20;
 }
 if (!VAR_15) {
  FUNC_7(VAR_13, VAR_17, &VAR_16);
 } else {
  VAR_18 = FUNC_1(VAR_13, 0, 0);
  if (VAR_18)
   return;
  FUNC_7(VAR_13, VAR_17, &VAR_16);

  VAR_12[VAR_3] = 1;
  FUNC_4(VAR_13, 1);
  FUNC_11(250);
  VAR_18 = FUNC_3(VAR_13);
  if (VAR_18) {
   FUNC_4(VAR_13, 0);
   VAR_11->flags |= VAR_8;
   return;
  }
  if (FUNC_8(VAR_13))
   VAR_11->flags |= VAR_8;
  else
   VAR_12[VAR_3] = 0;

  FUNC_4(VAR_13, 0);
  FUNC_5(VAR_13, 1, 0);
  FUNC_11(1000);
  if (FUNC_8(VAR_13)) {
   VAR_12[VAR_4] = 1;
   VAR_11->flags |= VAR_8;
  }
  if (VAR_14) {
   VAR_11->flags |= VAR_7;
   FUNC_5(VAR_13, 1, 1);
   FUNC_11(1000);
   if (FUNC_8(VAR_13)) {
    VAR_12[VAR_1] = 1;
    VAR_11->flags |= VAR_8;
   }
  }
  FUNC_5(VAR_13, 0, 0);
  FUNC_2(VAR_13);
  VAR_18 = FUNC_6(VAR_13, 0, 1);
 }
 if (VAR_18 || FUNC_9(VAR_13)) {
  VAR_12[VAR_2] = 1;
  VAR_11->flags |= VAR_8;
 }
 for (VAR_19 = 0; VAR_19 < VAR_13->num_tests - VAR_0; VAR_19++) {
  u8 VAR_21 = 1 << VAR_19;

  if ((VAR_17 & VAR_21) && !(VAR_16 & VAR_21)) {
   VAR_12[VAR_19] = 1;
   VAR_11->flags |= VAR_8;
  }
 }
}
