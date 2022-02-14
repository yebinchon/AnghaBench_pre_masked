
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rsv {int dummy; } ;
struct uwb_rc_evt_drp {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;
struct uwb_dev {int last_availability_bm; } ;
typedef enum uwb_drp_reason { ____Placeholder_uwb_drp_reason } uwb_drp_reason ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_rsv*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*,struct uwb_mas_bm*) ;
 int FUNC_3 (struct uwb_mas_bm*,struct uwb_ie_drp*) ;
 int FUNC_4 (struct uwb_rsv*,struct uwb_mas_bm*) ;
 int FUNC_5 (struct uwb_ie_drp*) ;
 int FUNC_6 (struct uwb_ie_drp*) ;
 int FUNC_7 (struct uwb_rsv*,int ) ;

__attribute__((used)) static void FUNC_8(struct uwb_rc *VAR_3, struct uwb_rsv *VAR_4,
      struct uwb_dev *VAR_5, struct uwb_ie_drp *VAR_6,
      struct uwb_rc_evt_drp *VAR_7)
{
 struct device *VAR_8 = &VAR_3->uwb_dev.dev;
 int VAR_9;
 enum uwb_drp_reason VAR_10;
 struct uwb_mas_bm VAR_11;

 VAR_9 = FUNC_6(VAR_6);
 VAR_10 = FUNC_5(VAR_6);
 FUNC_3(&VAR_11, VAR_6);

 if (VAR_9) {
  switch (VAR_10) {
  case 131:
   FUNC_4(VAR_4, &VAR_11);
   break;
  default:
   FUNC_1(VAR_8, "ignoring invalid DRP IE state (%d/%d)\n",
     VAR_10, VAR_9);
  }
 } else {
  switch (VAR_10) {
  case 128:
   FUNC_7(VAR_4, VAR_2);
   break;
  case 129:
   FUNC_7(VAR_4, VAR_1);
   break;
  case 130:

   FUNC_0(VAR_11.bm, VAR_5->last_availability_bm,
       VAR_0);
   FUNC_2(VAR_3, VAR_4, VAR_7, VAR_6, &VAR_11);
   break;
  default:
   FUNC_1(VAR_8, "ignoring invalid DRP IE state (%d/%d)\n",
     VAR_10, VAR_9);
  }
 }
}
