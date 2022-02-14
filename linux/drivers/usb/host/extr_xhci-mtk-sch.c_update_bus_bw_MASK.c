
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mu3h_sch_ep_info {int esit; int offset; int num_budget_microframes; scalar_t__* bw_budget_table; } ;
struct mu3h_sch_bw_info {int * bus_bw; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mu3h_sch_bw_info *VAR_1,
 struct mu3h_sch_ep_info *VAR_2, bool VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = VAR_0 / VAR_2->esit;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = VAR_2->offset + VAR_6 * VAR_2->esit;
  for (VAR_7 = 0; VAR_7 < VAR_2->num_budget_microframes; VAR_7++) {
   if (VAR_3)
    VAR_1->bus_bw[VAR_5 + VAR_7] +=
     VAR_2->bw_budget_table[VAR_7];
   else
    VAR_1->bus_bw[VAR_5 + VAR_7] -=
     VAR_2->bw_budget_table[VAR_7];
  }
 }
}
