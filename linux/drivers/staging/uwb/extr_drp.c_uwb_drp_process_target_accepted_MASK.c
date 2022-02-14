
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bm; } ;
struct uwb_rsv_move {TYPE_2__ companion_mas; } ;
struct TYPE_3__ {int bm; } ;
struct uwb_rsv {scalar_t__ state; TYPE_1__ mas; struct uwb_rsv_move mv; } ;
struct uwb_rc_evt_drp {int dummy; } ;
struct uwb_rc {int dummy; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_mas_bm*) ;
 int FUNC_3 (struct uwb_rc*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*,struct uwb_mas_bm*) ;
 int FUNC_4 (struct uwb_ie_drp*) ;
 int FUNC_5 (struct uwb_rsv*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uwb_rc *VAR_5,
 struct uwb_rsv *VAR_6, struct uwb_rc_evt_drp *VAR_7,
 struct uwb_ie_drp *VAR_8, struct uwb_mas_bm *VAR_9)
{
 struct uwb_rsv_move *VAR_10 = &VAR_6->mv;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8);

 if (VAR_6->state == VAR_3) {
  FUNC_5(VAR_6, VAR_3);
  return;
 }

 if (VAR_6->state == VAR_4) {

  if (!FUNC_1(VAR_6->mas.bm, VAR_9->bm, VAR_1)) {

   FUNC_5(VAR_6,
    VAR_4);
  }
 } else {
  if (!FUNC_1(VAR_6->mas.bm, VAR_9->bm, VAR_1)) {
   if (FUNC_2(VAR_5, VAR_9) == -VAR_0) {





    FUNC_3(VAR_5, VAR_7,
      VAR_8, VAR_9);
   } else {

    FUNC_0(VAR_10->companion_mas.bm, VAR_9->bm,
        VAR_1);
    FUNC_5(VAR_6,
     VAR_4);
   }
  } else {
   if (VAR_11) {
    FUNC_5(VAR_6,
      VAR_2);
   }
  }

 }
}
