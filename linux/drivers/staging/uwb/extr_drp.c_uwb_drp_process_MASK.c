
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_evt_drp {int dummy; } ;
struct uwb_rc {int dummy; } ;
struct uwb_ie_drp {int dummy; } ;
struct uwb_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uwb_rc*,struct uwb_ie_drp*) ;
 scalar_t__ FUNC_1 (struct uwb_rc*,struct uwb_ie_drp*) ;
 int FUNC_2 (struct uwb_rc*,struct uwb_dev*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*) ;
 int FUNC_3 (struct uwb_rc*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*) ;
 scalar_t__ FUNC_4 (struct uwb_ie_drp*) ;

__attribute__((used)) static void FUNC_5(struct uwb_rc *VAR_1, struct uwb_rc_evt_drp *VAR_2,
       struct uwb_dev *VAR_3, struct uwb_ie_drp *VAR_4)
{
 if (FUNC_4(VAR_4) == VAR_0)
  FUNC_0(VAR_1, VAR_4);
 else if (FUNC_1(VAR_1, VAR_4))
  FUNC_2(VAR_1, VAR_3, VAR_2, VAR_4);
 else
  FUNC_3(VAR_1, VAR_2, VAR_4);
}
