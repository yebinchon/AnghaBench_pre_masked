
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct pvr2_hdw {int state_encoder_run; TYPE_1__ encoder_run_timer; int state_encoder_runok; scalar_t__ state_encoder_ok; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pvr2_hdw*) ;
 scalar_t__ FUNC_4 (struct pvr2_hdw*) ;
 int FUNC_5 (struct pvr2_hdw*) ;
 int FUNC_6 (struct pvr2_hdw*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int FUNC_8(struct pvr2_hdw *VAR_2)
{
 if (VAR_2->state_encoder_run) {
  if (!FUNC_5(VAR_2)) return 0;
  if (VAR_2->state_encoder_ok) {
   FUNC_1(&VAR_2->encoder_run_timer);
   if (FUNC_4(VAR_2) < 0) return !0;
  }
  VAR_2->state_encoder_run = 0;
 } else {
  if (!FUNC_6(VAR_2)) return 0;
  if (FUNC_3(VAR_2) < 0) return !0;
  VAR_2->state_encoder_run = !0;
  if (!VAR_2->state_encoder_runok) {
   VAR_2->encoder_run_timer.expires = VAR_1 +
     FUNC_2(VAR_0);
   FUNC_0(&VAR_2->encoder_run_timer);
  }
 }
 FUNC_7("state_encoder_run",VAR_2->state_encoder_run);
 return !0;
}
