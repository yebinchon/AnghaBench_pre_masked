
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_evt_drp {int dummy; } ;
struct uwb_rc {int dummy; } ;
struct uwb_mas_bm {int dummy; } ;
struct uwb_ie_drp {int dummy; } ;


 int FUNC_0 (struct uwb_rc*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*,struct uwb_mas_bm*) ;
 int FUNC_1 (struct uwb_mas_bm*,struct uwb_ie_drp*) ;

__attribute__((used)) static void FUNC_2(struct uwb_rc *VAR_0,
      struct uwb_rc_evt_drp *VAR_1,
      struct uwb_ie_drp *VAR_2)
{
 struct uwb_mas_bm VAR_3;

 FUNC_1(&VAR_3, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
}
