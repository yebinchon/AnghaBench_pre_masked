
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telemetry_evtlog {int dummy; } ;
struct telemetry_debugfs_conf {int s0ix_deep_res_id; int s0ix_shlw_res_id; int s0ix_deep_occ_id; int s0ix_shlw_occ_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct telemetry_debugfs_conf* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,struct telemetry_evtlog*,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct telemetry_evtlog VAR_9[VAR_2];
 struct telemetry_debugfs_conf *VAR_10 = VAR_3;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_1(VAR_1, VAR_9,
   VAR_2);
 if (VAR_11 < 0) {
  VAR_6 = 0;
  goto out;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {

  FUNC_0(VAR_10->s0ix_shlw_occ_id,
        VAR_7);

  FUNC_0(VAR_10->s0ix_deep_occ_id,
        VAR_4);

  FUNC_0(VAR_10->s0ix_shlw_res_id,
        VAR_8);

  FUNC_0(VAR_10->s0ix_deep_res_id,
        VAR_5);
 }
 VAR_6 = 1;
out:
 return VAR_0;
}
