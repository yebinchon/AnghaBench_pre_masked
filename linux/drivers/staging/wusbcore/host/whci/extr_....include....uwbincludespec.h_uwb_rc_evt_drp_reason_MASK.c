
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_evt_drp {int reason; } ;
typedef enum uwb_drp_notif_reason { ____Placeholder_uwb_drp_notif_reason } uwb_drp_notif_reason ;



__attribute__((used)) static inline enum uwb_drp_notif_reason FUNC_0(struct uwb_rc_evt_drp *VAR_0)
{
 return VAR_0->reason & 0x0f;
}
