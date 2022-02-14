
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct uwb_ie_drp {int drp_control; } ;
typedef enum uwb_drp_type { ____Placeholder_uwb_drp_type } uwb_drp_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct uwb_ie_drp *VAR_0, enum uwb_drp_type VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_0->drp_control);
 VAR_2 = (VAR_2 & ~(0x7 << 0)) | (VAR_1 << 0);
 VAR_0->drp_control = FUNC_0(VAR_2);
}
