
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_adapter {size_t priv_num; void* hw_status; int cmd_pending_q_lock; int cmd_pending_q; struct mwifiex_private** priv; scalar_t__ mfg_mode; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_private*,size_t,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mwifiex_adapter *VAR_3)
{
 int VAR_4;
 struct mwifiex_private *VAR_5;
 u8 VAR_6, VAR_7 = 1;
 int VAR_8;

 VAR_3->hw_status = VAR_1;


 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return -1;


 FUNC_2(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3->priv_num; VAR_6++) {
  if (VAR_3->priv[VAR_6]) {
   VAR_5 = VAR_3->priv[VAR_6];


   VAR_4 = FUNC_3(VAR_5);
   if (VAR_4)
    return -1;
  }
 }
 if (VAR_3->mfg_mode) {
  VAR_3->hw_status = VAR_2;
  VAR_4 = -VAR_0;
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_3->priv_num; VAR_6++) {
   if (VAR_3->priv[VAR_6]) {
    VAR_4 = FUNC_5(VAR_3->priv[VAR_6],
          VAR_7, 1);
    if (VAR_4 == -1)
     return -1;

    VAR_7 = 0;
   }



  }
 }

 FUNC_6(&VAR_3->cmd_pending_q_lock);
 VAR_8 = FUNC_0(&VAR_3->cmd_pending_q);
 FUNC_7(&VAR_3->cmd_pending_q_lock);
 if (!VAR_8) {

  if (FUNC_4(VAR_3) != -1)
   VAR_4 = -VAR_0;
 } else {
  VAR_3->hw_status = VAR_2;
 }

 return VAR_4;
}
