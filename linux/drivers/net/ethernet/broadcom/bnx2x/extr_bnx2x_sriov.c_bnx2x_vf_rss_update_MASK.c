
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_config_rss_params {int ramrod_flags; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3,
   struct bnx2x_config_rss_params *VAR_4)
{
 FUNC_0(VAR_0, "vf[%d]\n", VAR_3->abs_vfid);
 FUNC_2(VAR_1, &VAR_4->ramrod_flags);
 return FUNC_1(VAR_2, VAR_4);
}
