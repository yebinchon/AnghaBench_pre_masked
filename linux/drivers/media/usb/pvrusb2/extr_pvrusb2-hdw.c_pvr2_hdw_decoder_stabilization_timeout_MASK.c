
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pvr2_hdw {int state_decoder_ready; int state_stale; int workpoll; } ;


 int VAR_0 ;
 struct pvr2_hdw* FUNC_0 (int ,struct timer_list*,int ) ;
 struct pvr2_hdw* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct pvr2_hdw *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 VAR_3->state_decoder_ready = !0;
 FUNC_2("state_decoder_ready", VAR_3->state_decoder_ready);
 VAR_3->state_stale = !0;
 FUNC_1(&VAR_3->workpoll);
}
