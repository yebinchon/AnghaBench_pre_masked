
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mu3h_sch_ep_info {int esit; int num_budget_microframes; int* bw_budget_table; } ;
struct mu3h_sch_bw_info {int* bus_bw; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct mu3h_sch_bw_info *VAR_1,
 struct mu3h_sch_ep_info *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_4 = VAR_0 / VAR_2->esit;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  u32 VAR_9 = VAR_3 + VAR_7 * VAR_2->esit;

  for (VAR_8 = 0; VAR_8 < VAR_2->num_budget_microframes; VAR_8++) {
   VAR_6 = VAR_1->bus_bw[VAR_9 + VAR_8] +
     VAR_2->bw_budget_table[VAR_8];
   if (VAR_6 > VAR_5)
    VAR_5 = VAR_6;
  }
 }
 return VAR_5;
}
