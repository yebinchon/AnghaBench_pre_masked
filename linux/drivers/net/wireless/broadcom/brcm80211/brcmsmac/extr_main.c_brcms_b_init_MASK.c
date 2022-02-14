
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct brcms_hardware {int forcefastclk; int mac_suspend_depth; int wake_override; TYPE_1__* band; struct brcms_c_info* wlc; } ;
struct brcms_c_info {int wl; } ;
struct TYPE_2__ {int pi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_c_info*,int ) ;
 int FUNC_1 (struct brcms_hardware*,int ) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_hardware*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct brcms_hardware *VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 bool VAR_6;
 struct brcms_c_info *VAR_7 = VAR_3->wlc;


 VAR_6 = VAR_3->forcefastclk;
 if (!VAR_6)
  FUNC_1(VAR_3, VAR_1);


 VAR_5 = FUNC_4(VAR_7->wl);


 FUNC_3(VAR_3, FUNC_6(VAR_4));
 FUNC_9(VAR_3->band->pi, VAR_4);


 FUNC_8(VAR_3->band->pi);


 FUNC_2(VAR_7);


 FUNC_0(VAR_7, VAR_4);


 FUNC_5(VAR_7->wl, VAR_5);




 FUNC_7(VAR_3->wake_override, VAR_2);





 VAR_3->mac_suspend_depth = 1;


 if (!VAR_6)
  FUNC_1(VAR_3, VAR_0);
}
