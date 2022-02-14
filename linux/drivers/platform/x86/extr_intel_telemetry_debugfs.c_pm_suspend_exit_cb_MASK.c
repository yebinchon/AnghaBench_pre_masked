
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct telemetry_evtlog {int dummy; } ;
struct TYPE_2__ {int deep_res; int deep_ctr; int shlw_res; int shlw_ctr; } ;
struct telemetry_debugfs_conf {TYPE_1__ suspend_stats; int s0ix_deep_res_id; int s0ix_shlw_res_id; int s0ix_deep_occ_id; int s0ix_shlw_occ_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 struct telemetry_debugfs_conf* VAR_5 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,struct telemetry_evtlog*,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct telemetry_evtlog VAR_11[VAR_4];
 static u32 VAR_12, VAR_13;
 static u64 VAR_14, VAR_15;
 struct telemetry_debugfs_conf *VAR_16 = VAR_5;
 int VAR_17, VAR_18;

 if (!VAR_8)
  goto out;

 VAR_17 = FUNC_3(VAR_3, VAR_11,
       VAR_4);
 if (VAR_17 < 0)
  goto out;

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  FUNC_0(VAR_16->s0ix_shlw_occ_id,
        VAR_12);

  FUNC_0(VAR_16->s0ix_deep_occ_id,
        VAR_13);

  FUNC_0(VAR_16->s0ix_shlw_res_id,
        VAR_14);

  FUNC_0(VAR_16->s0ix_deep_res_id,
        VAR_15);
 }

 if ((VAR_12 < VAR_9) ||
     (VAR_13 < VAR_6) ||
     (VAR_14 < VAR_10) ||
     (VAR_15 < VAR_7)) {
  FUNC_2("Wrong s0ix counters detected\n");
  goto out;
 }







 if (VAR_12 == VAR_9 &&
     VAR_13 == VAR_6) {
  VAR_17 = FUNC_1(VAR_2,
       &VAR_14);
  if (VAR_17 < 0)
   goto out;

  VAR_17 = FUNC_1(VAR_1,
       &VAR_15);
  if (VAR_17 < 0)
   goto out;

  if (VAR_14 > VAR_10)
   VAR_12++;

  if (VAR_15 > VAR_7)
   VAR_13++;
 }

 VAR_12 -= VAR_9;
 VAR_13 -= VAR_6;
 VAR_14 -= VAR_10;
 VAR_15 -= VAR_7;

 if (VAR_12 != 0) {
  VAR_16->suspend_stats.shlw_ctr +=
  VAR_12;

  VAR_16->suspend_stats.shlw_res +=
  VAR_14;
 }

 if (VAR_13 != 0) {
  VAR_16->suspend_stats.deep_ctr +=
  VAR_13;

  VAR_16->suspend_stats.deep_res +=
  VAR_15;
 }

out:
 VAR_8 = 0;
 return VAR_0;
}
