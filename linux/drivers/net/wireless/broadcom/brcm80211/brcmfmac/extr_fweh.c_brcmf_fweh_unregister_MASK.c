
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** evt_handler; } ;
struct brcmf_pub {TYPE_1__ fweh; } ;
typedef enum brcmf_fweh_event_code { ____Placeholder_brcmf_fweh_event_code } brcmf_fweh_event_code ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct brcmf_pub *VAR_1,
      enum brcmf_fweh_event_code VAR_2)
{
 FUNC_0(VAR_0, "event handler cleared for %s\n",
    FUNC_1(VAR_2));
 VAR_1->fweh.evt_handler[VAR_2] = ((void*)0);
}
