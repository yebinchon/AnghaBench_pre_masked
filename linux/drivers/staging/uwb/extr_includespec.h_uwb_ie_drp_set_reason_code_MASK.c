
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uwb_ie_drp {int drp_control; } ;
typedef enum uwb_drp_reason { ____Placeholder_uwb_drp_reason } uwb_drp_reason ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2(struct uwb_ie_drp *VAR_0,
           enum uwb_drp_reason VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_0->drp_control);
 VAR_2 = (VAR_0->drp_control & ~(0x7 << 6)) | (VAR_1 << 6);
 VAR_0->drp_control = FUNC_0(VAR_2);
}
