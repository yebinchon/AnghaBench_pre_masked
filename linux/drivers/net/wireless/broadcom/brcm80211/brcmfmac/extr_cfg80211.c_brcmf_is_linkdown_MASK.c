
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct brcmf_event_msg {scalar_t__ event_code; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(const struct brcmf_event_msg *VAR_6)
{
 u32 VAR_7 = VAR_6->event_code;
 u16 VAR_8 = VAR_6->flags;

 if ((VAR_7 == VAR_1) || (VAR_7 == VAR_2) ||
     (VAR_7 == VAR_3) ||
     ((VAR_7 == VAR_4) && (!(VAR_8 & VAR_0)))) {
  FUNC_0(VAR_5, "Processing link down\n");
  return 1;
 }
 return 0;
}
