
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_scale_tbl_info {int * expected_tpt; scalar_t__ is_SGI; int is_ht40; int lq_type; } ;
struct il_lq_sta {scalar_t__ is_agg; scalar_t__ is_dup; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_1 ;
 int ** VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct il_lq_sta *VAR_6,
     struct il_scale_tbl_info *VAR_7)
{

 s32(*VAR_8)[VAR_0];


 if (FUNC_0(!FUNC_2(VAR_7->lq_type) && !FUNC_1(VAR_7->lq_type))) {
  VAR_7->expected_tpt = VAR_1;
  return;
 }


 if (FUNC_2(VAR_7->lq_type)) {
  VAR_7->expected_tpt = VAR_1;
  return;
 }




 if (FUNC_4(VAR_7->lq_type) && (!VAR_7->is_ht40 || VAR_6->is_dup))
  VAR_8 = VAR_4;
 else if (FUNC_4(VAR_7->lq_type))
  VAR_8 = VAR_5;
 else if (FUNC_3(VAR_7->lq_type) && (!VAR_7->is_ht40 || VAR_6->is_dup))
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;

 if (!VAR_7->is_SGI && !VAR_6->is_agg)
  VAR_7->expected_tpt = VAR_8[0];
 else if (VAR_7->is_SGI && !VAR_6->is_agg)
  VAR_7->expected_tpt = VAR_8[1];
 else if (!VAR_7->is_SGI && VAR_6->is_agg)
  VAR_7->expected_tpt = VAR_8[2];
 else
  VAR_7->expected_tpt = VAR_8[3];
}
