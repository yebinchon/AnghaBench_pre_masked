
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mwifiex_wmm_desc {size_t* queue_priority; int highest_queued_prio; } ;
struct mwifiex_private {size_t* tos_to_tid_inv; struct mwifiex_wmm_desc wmm; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t** VAR_2 ;
 int FUNC_0 (int *,int ) ;
 size_t* VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct mwifiex_private *VAR_4)
{
 struct mwifiex_wmm_desc *VAR_5 = &VAR_4->wmm;
 u8 *VAR_6 = VAR_5->queue_priority;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
  VAR_3[7 - (VAR_7 * 2)] = VAR_2[VAR_6[VAR_7]][1];
  VAR_3[6 - (VAR_7 * 2)] = VAR_2[VAR_6[VAR_7]][0];
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
  VAR_4->tos_to_tid_inv[VAR_3[VAR_7]] = (u8)VAR_7;

 FUNC_0(&VAR_5->highest_queued_prio, VAR_0);
}
