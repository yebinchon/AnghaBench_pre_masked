
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcmf_event_msg {int event_code; int reason; } ;







__attribute__((used)) static u16 FUNC_0(const struct brcmf_event_msg *VAR_0)
{
 u16 VAR_1;

 switch (VAR_0->event_code) {
 case 131:
 case 130:
 case 129:
  VAR_1 = VAR_0->reason;
  break;
 case 128:
 default:
  VAR_1 = 0;
  break;
 }
 return VAR_1;
}
