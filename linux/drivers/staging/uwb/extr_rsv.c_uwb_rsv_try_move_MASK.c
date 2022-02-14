
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int bm; } ;
struct TYPE_7__ {int bm; } ;
struct uwb_rsv_move {TYPE_4__ companion_mas; TYPE_3__ final_mas; } ;
struct TYPE_6__ {int bm; } ;
struct uwb_rsv {TYPE_2__ mas; struct uwb_rsv_move mv; struct uwb_rc* rc; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;
struct uwb_drp_backoff_win {int can_reserve_extra_mases; } ;
struct uwb_rc {TYPE_1__ uwb_dev; struct uwb_drp_backoff_win bow; } ;
struct uwb_mas_bm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct uwb_rc*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (struct uwb_rsv*,struct uwb_mas_bm*,TYPE_3__*) ;
 int FUNC_5 (struct uwb_rsv*,int ) ;

int FUNC_6(struct uwb_rsv *VAR_4, struct uwb_mas_bm *VAR_5)
{
 struct uwb_rc *VAR_6 = VAR_4->rc;
 struct uwb_drp_backoff_win *VAR_7 = &VAR_6->bow;
 struct device *VAR_8 = &VAR_6->uwb_dev.dev;
 struct uwb_rsv_move *VAR_9;
 int VAR_10 = 0;

 if (VAR_7->can_reserve_extra_mases == 0)
  return -VAR_0;

 VAR_9 = &VAR_4->mv;

 if (FUNC_4(VAR_4, VAR_5, &VAR_9->final_mas) == VAR_2) {

  if (!FUNC_1(VAR_4->mas.bm, VAR_9->final_mas.bm, VAR_1)) {

   FUNC_0(VAR_9->companion_mas.bm, VAR_9->final_mas.bm, VAR_4->mas.bm, VAR_1);
   FUNC_3(VAR_6, &VAR_9->companion_mas);
   FUNC_5(VAR_4, VAR_3);
  }
 } else {
  FUNC_2(VAR_8, "new allocation not found\n");
 }

 return VAR_10;
}
