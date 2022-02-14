
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bm; } ;
struct uwb_rsv_move {TYPE_1__ companion_mas; } ;
struct TYPE_4__ {int bm; } ;
struct uwb_rsv {TYPE_2__ mas; struct uwb_rsv_move mv; } ;
struct uwb_rc_evt_drp {int beacon_slot_number; } ;
struct uwb_rc {int dummy; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct uwb_ie_drp*,int ,struct uwb_rsv*,int,struct uwb_mas_bm*) ;
 int FUNC_2 (struct uwb_ie_drp*,int ,struct uwb_rsv*,struct uwb_mas_bm*) ;
 scalar_t__ FUNC_3 (struct uwb_rsv*) ;

__attribute__((used)) static void FUNC_4(struct uwb_rc *VAR_1, struct uwb_rsv *VAR_2,
     struct uwb_rc_evt_drp *VAR_3,
     struct uwb_ie_drp *VAR_4,
     struct uwb_mas_bm *VAR_5)
{
 struct uwb_rsv_move *VAR_6;


 if (FUNC_3(VAR_2)) {
  VAR_6 = &VAR_2->mv;
  if (FUNC_0(VAR_2->mas.bm, VAR_5->bm,
        VAR_0)) {
   FUNC_1(VAR_4,
      VAR_3->beacon_slot_number,
      VAR_2, 0, VAR_5);
  } else {
   if (FUNC_0(VAR_6->companion_mas.bm,
     VAR_5->bm, VAR_0)) {
    FUNC_1(
     VAR_4, VAR_3->beacon_slot_number,
     VAR_2, 1, VAR_5);
   }
  }
 } else if (FUNC_0(VAR_2->mas.bm, VAR_5->bm,
       VAR_0)) {
  FUNC_2(VAR_4, VAR_3->beacon_slot_number,
     VAR_2, VAR_5);
 }
}
