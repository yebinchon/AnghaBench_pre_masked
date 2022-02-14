
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_ie_drp {int drp_control; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct uwb_ie_drp *VAR_0)
{
 return (FUNC_0(VAR_0->drp_control) >> 10) & 0x1;
}
