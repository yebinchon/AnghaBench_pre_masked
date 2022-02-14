
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* evt_handler; } ;
struct brcmf_pub {TYPE_1__ fweh; } ;
typedef enum brcmf_fweh_event_code { ____Placeholder_brcmf_fweh_event_code } brcmf_fweh_event_code ;
typedef scalar_t__ brcmf_fweh_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(struct brcmf_pub *VAR_2, enum brcmf_fweh_event_code VAR_3,
   brcmf_fweh_handler_t VAR_4)
{
 if (VAR_2->fweh.evt_handler[VAR_3]) {
  FUNC_0(VAR_2, "event code %d already registered\n", VAR_3);
  return -VAR_0;
 }
 VAR_2->fweh.evt_handler[VAR_3] = VAR_4;
 FUNC_1(VAR_1, "event handler registered for %s\n",
    FUNC_2(VAR_3));
 return 0;
}
