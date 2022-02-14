
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dcb_state; scalar_t__ dcbx_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,char*,char*) ;

void FUNC_2(struct bnx2x *VAR_5, bool VAR_6, u32 VAR_7)
{
 if (!FUNC_0(VAR_5)) {
  VAR_5->dcb_state = VAR_6;
  VAR_5->dcbx_enabled = VAR_7;
 } else {
  VAR_5->dcb_state = 0;
  VAR_5->dcbx_enabled = VAR_0;
 }
 FUNC_1(VAR_4, "DCB state [%s:%s]\n",
    VAR_6 ? "ON" : "OFF",
    VAR_7 == VAR_1 ? "user-mode" :
    VAR_7 == VAR_2 ? "on-chip static" :
    VAR_7 == VAR_3 ?
    "on-chip with negotiation" : "invalid");
}
