
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bm; } ;
struct uwb_rsv_move {TYPE_1__ companion_mas; } ;
struct TYPE_4__ {int bm; } ;
struct uwb_rsv {TYPE_2__ mas; struct uwb_rsv_move mv; struct uwb_rc* rc; } ;
struct uwb_drp_backoff_win {int can_reserve_extra_mases; } ;
struct uwb_rc {struct uwb_drp_backoff_win bow; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct uwb_ie_drp*,int,struct uwb_rsv*,int ) ;
 int FUNC_2 (struct uwb_rc*) ;
 scalar_t__ FUNC_3 (struct uwb_rsv*) ;
 int FUNC_4 (struct uwb_rsv*,int ) ;
 int FUNC_5 (struct uwb_rsv*) ;

__attribute__((used)) static void FUNC_6(struct uwb_ie_drp *VAR_4,
       int VAR_5,
       struct uwb_rsv *VAR_6,
       struct uwb_mas_bm *VAR_7)
{
 struct uwb_rc *VAR_8 = VAR_6->rc;
 struct uwb_rsv_move *VAR_9 = &VAR_6->mv;
 struct uwb_drp_backoff_win *VAR_10 = &VAR_8->bow;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6, FUNC_5(VAR_6));

 if (FUNC_3(VAR_6)) {
  switch(VAR_11) {
  case 129:

   FUNC_4(VAR_6, VAR_2);
   if (VAR_10->can_reserve_extra_mases == 0)
    FUNC_2(VAR_8);

   break;
  case 128:
   FUNC_2(VAR_8);


   FUNC_0(VAR_9->companion_mas.bm, VAR_6->mas.bm, VAR_7->bm, VAR_0);
   FUNC_4(VAR_6, VAR_1);
  default:
   break;
  }
 } else {
  switch(VAR_11) {
  case 129:
  case 128:
   FUNC_4(VAR_6, VAR_3);
  default:
   break;
  }

 }

}
