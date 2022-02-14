
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_napi {int int_num; int last_status_idx; } ;
struct bnx2 {int irq_nvecs; int hc_cmd; struct bnx2_napi* bnx2_napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_5)
{
 int VAR_6;
 struct bnx2_napi *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->irq_nvecs; VAR_6++) {
  VAR_7 = &VAR_5->bnx2_napi[VAR_6];

  FUNC_0(VAR_5, VAR_2, VAR_7->int_num |
   VAR_3 |
   VAR_4 |
   VAR_7->last_status_idx);

  FUNC_0(VAR_5, VAR_2, VAR_7->int_num |
   VAR_3 |
   VAR_7->last_status_idx);
 }
 FUNC_0(VAR_5, VAR_0, VAR_5->hc_cmd | VAR_1);
}
