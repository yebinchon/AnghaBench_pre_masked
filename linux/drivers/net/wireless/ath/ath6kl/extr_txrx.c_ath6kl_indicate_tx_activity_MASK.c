
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath6kl {int* ac2ep_map; int* ac_stream_active; scalar_t__* ac_stream_pri_map; scalar_t__ hiac_stream_active_pri; int htc_target; int lock; int flag; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(void *VAR_2, u8 VAR_3, bool VAR_4)
{
 struct ath6kl *VAR_5 = VAR_2;
 enum htc_endpoint_id VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->ac2ep_map[VAR_3];

 if (!FUNC_3(VAR_0, &VAR_5->flag))
  goto notify_htc;

 FUNC_1(&VAR_5->lock);

 VAR_5->ac_stream_active[VAR_3] = VAR_4;

 if (VAR_4) {




  if (VAR_5->ac_stream_pri_map[VAR_3] >
      VAR_5->hiac_stream_active_pri)

   VAR_5->hiac_stream_active_pri =
     VAR_5->ac_stream_pri_map[VAR_3];

 } else {




  if (VAR_5->hiac_stream_active_pri ==
   VAR_5->ac_stream_pri_map[VAR_3]) {





   VAR_5->hiac_stream_active_pri = 0;

   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    if (VAR_5->ac_stream_active[VAR_7] &&
        (VAR_5->ac_stream_pri_map[VAR_7] >
         VAR_5->hiac_stream_active_pri))




     VAR_5->hiac_stream_active_pri =
      VAR_5->ac_stream_pri_map[VAR_7];
   }
  }
 }

 FUNC_2(&VAR_5->lock);

notify_htc:

 FUNC_0(VAR_5->htc_target, VAR_6, VAR_4);
}
