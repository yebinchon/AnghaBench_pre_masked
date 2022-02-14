
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* evt_handler; } ;
struct brcmf_pub {TYPE_1__ fweh; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int s8 ;
typedef int eventmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct brcmf_if*,char*,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int) ;

int FUNC_6(struct brcmf_if *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_4->drvr;
 int VAR_6, VAR_7;
 s8 VAR_8[VAR_0];

 FUNC_4(VAR_8, 0, sizeof(VAR_8));
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_4->drvr->fweh.evt_handler[VAR_6]) {
   FUNC_1(VAR_3, "enable event %s\n",
      FUNC_3(VAR_6));
   FUNC_5(VAR_8, VAR_6);
  }
 }


 FUNC_1(VAR_3, "enable event IF\n");
 FUNC_5(VAR_8, VAR_1);

 VAR_7 = FUNC_2(VAR_4, "event_msgs",
           VAR_8, VAR_0);
 if (VAR_7)
  FUNC_0(VAR_5, "Set event_msgs error (%d)\n", VAR_7);

 return VAR_7;
}
