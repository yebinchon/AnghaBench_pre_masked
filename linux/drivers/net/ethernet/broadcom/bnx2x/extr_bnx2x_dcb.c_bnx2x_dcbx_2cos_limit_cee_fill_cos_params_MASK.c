
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pg_help_data {int num_of_pg; } ;
struct dcbx_ets_feature {int dummy; } ;
struct cos_help_data {int num_of_cos; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,struct pg_help_data*,struct cos_help_data*,int ,int ) ;
 int FUNC_2 (struct bnx2x*,struct pg_help_data*,struct dcbx_ets_feature*,struct cos_help_data*,int *,int ,int ) ;
 int FUNC_3 (struct bnx2x*,struct pg_help_data*,struct dcbx_ets_feature*,struct cos_help_data*,int *,int ,int ) ;
 int FUNC_4 (struct bnx2x*,struct cos_help_data*,int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_1,
           struct pg_help_data *VAR_2,
           struct dcbx_ets_feature *VAR_3,
           struct cos_help_data *VAR_4,
           u32 *VAR_5,
           u32 VAR_6,
           u8 VAR_7)
{

 VAR_4->num_of_cos = VAR_0;

 switch (VAR_2->num_of_pg) {
 case 1:
  FUNC_1(
            VAR_1,
            VAR_2,
            VAR_4,
            VAR_6,
            VAR_7);
  break;
 case 2:
  FUNC_3(
         VAR_1,
         VAR_2,
         VAR_3,
         VAR_4,
         VAR_5,
         VAR_6,
         VAR_7);
  break;

 case 3:
  FUNC_2(
           VAR_1,
           VAR_2,
           VAR_3,
           VAR_4,
           VAR_5,
           VAR_6,
           VAR_7);
  break;
 default:
  FUNC_0("Wrong pg_help_data.num_of_pg\n");
  FUNC_4(VAR_1,
         VAR_4, VAR_6);
 }
}
