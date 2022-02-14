
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_ptp_shaper_params {int egr_timestamp_inc; int ing_timestamp_inc; int port_to_shaper_credits; int shaper_bs; int shaper_inc; int shaper_time_mantissa; int shaper_time_exp; int port_speed; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 struct mlxsw_sp1_ptp_shaper_params* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_4)
{
 const struct mlxsw_sp1_ptp_shaper_params *VAR_5;
 char VAR_6[VAR_0];
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_2[VAR_7];
  FUNC_1(VAR_6, VAR_5->port_speed,
        VAR_5->shaper_time_exp,
        VAR_5->shaper_time_mantissa,
        VAR_5->shaper_inc, VAR_5->shaper_bs,
        VAR_5->port_to_shaper_credits,
        VAR_5->ing_timestamp_inc,
        VAR_5->egr_timestamp_inc);
  VAR_8 = FUNC_2(VAR_4->core, FUNC_0(VAR_3), VAR_6);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
