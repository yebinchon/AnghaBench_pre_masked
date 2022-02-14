
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int bm; } ;
struct uwb_rsv_move {TYPE_3__ companion_mas; } ;
struct TYPE_5__ {int bm; } ;
struct uwb_rsv {TYPE_2__ mas; int rc; struct uwb_rsv_move mv; } ;
struct uwb_rc_evt_drp {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;
typedef enum uwb_drp_reason { ____Placeholder_uwb_drp_reason } uwb_drp_reason ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct device*,char*,int,int) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (struct uwb_mas_bm*,struct uwb_ie_drp*) ;
 int FUNC_7 (struct uwb_rc*,struct uwb_rsv*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*,struct uwb_mas_bm*) ;
 int FUNC_8 (struct uwb_ie_drp*) ;
 int FUNC_9 (struct uwb_ie_drp*) ;
 int FUNC_10 (struct uwb_rsv*,int ) ;

__attribute__((used)) static void FUNC_11(struct uwb_rc *VAR_3, struct uwb_rsv *VAR_4,
     struct uwb_ie_drp *VAR_5, struct uwb_rc_evt_drp *VAR_6)
{
 struct device *VAR_7 = &VAR_3->uwb_dev.dev;
 struct uwb_rsv_move *VAR_8 = &VAR_4->mv;
 int VAR_9;
 enum uwb_drp_reason VAR_10;
 struct uwb_mas_bm VAR_11;

 VAR_9 = FUNC_9(VAR_5);
 VAR_10 = FUNC_8(VAR_5);
 FUNC_6(&VAR_11, VAR_5);

 switch (VAR_10) {
 case 129:
  FUNC_7(VAR_3, VAR_4, VAR_6, VAR_5, &VAR_11);
  break;

 case 128:

  if (FUNC_2(VAR_4->mas.bm, VAR_11.bm, VAR_0)) {
   FUNC_10(VAR_4, VAR_1);
   break;
  }


  if (FUNC_3(VAR_11.bm, VAR_4->mas.bm, VAR_0)) {

   FUNC_0(VAR_8->companion_mas.bm, VAR_4->mas.bm, VAR_11.bm,
    VAR_0);
   FUNC_5(VAR_4->rc, &VAR_8->companion_mas);
  }

  FUNC_1(VAR_4->mas.bm, VAR_11.bm, VAR_0);
  FUNC_10(VAR_4, VAR_2);
  break;
 default:
  FUNC_4(VAR_7, "ignoring invalid DRP IE state (%d/%d)\n",
    VAR_10, VAR_9);
 }
}
