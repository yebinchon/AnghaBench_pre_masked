
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_rss_config_obj {int ind_table; scalar_t__ udp_rss_v6; scalar_t__ udp_rss_v4; } ;
struct bnx2x_config_rss_params {int rss_flags; int rss_key; int ind_table; int rss_result_mask; int ramrod_flags; struct bnx2x_rss_config_obj* rss_obj; int * member_0; } ;
struct bnx2x {int dummy; } ;


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
 int VAR_11 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(struct bnx2x *VAR_15, struct bnx2x_rss_config_obj *VAR_16,
       bool VAR_17, bool VAR_18)
{
 struct bnx2x_config_rss_params VAR_19 = {((void*)0)};
 VAR_19.rss_obj = VAR_16;

 FUNC_2(VAR_13, &VAR_19.ramrod_flags);

 if (VAR_18) {
  FUNC_2(VAR_9, &VAR_19.rss_flags);


  FUNC_2(VAR_0, &VAR_19.rss_flags);
  FUNC_2(VAR_1, &VAR_19.rss_flags);
  FUNC_2(VAR_4, &VAR_19.rss_flags);
  FUNC_2(VAR_5, &VAR_19.rss_flags);
  if (VAR_16->udp_rss_v4)
   FUNC_2(VAR_2, &VAR_19.rss_flags);
  if (VAR_16->udp_rss_v6)
   FUNC_2(VAR_6, &VAR_19.rss_flags);

  if (!FUNC_0(VAR_15)) {

   FUNC_2(VAR_3, &VAR_19.rss_flags);
   FUNC_2(VAR_7, &VAR_19.rss_flags);


   FUNC_2(VAR_11, &VAR_19.rss_flags);
  }
 } else {
  FUNC_2(VAR_8, &VAR_19.rss_flags);
 }


 VAR_19.rss_result_mask = VAR_12;

 FUNC_5(VAR_19.ind_table, VAR_16->ind_table, sizeof(VAR_19.ind_table));

 if (VAR_17) {

  FUNC_6(VAR_19.rss_key, VAR_14 * 4);
  FUNC_2(VAR_10, &VAR_19.rss_flags);
 }

 if (FUNC_1(VAR_15))
  return FUNC_3(VAR_15, &VAR_19);
 else
  return FUNC_4(VAR_15, &VAR_19);
}
