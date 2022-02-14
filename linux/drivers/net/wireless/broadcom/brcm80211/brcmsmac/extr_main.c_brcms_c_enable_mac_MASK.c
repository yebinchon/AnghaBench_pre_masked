
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_hardware {scalar_t__ mac_suspend_depth; int unit; struct bcma_device* d11core; } ;
struct brcms_c_info {TYPE_1__* band; struct brcms_hardware* hw; } ;
struct bcma_device {int dummy; } ;
struct TYPE_2__ {int bandunit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bcma_device*,int ) ;
 int FUNC_3 (struct bcma_device*,int ,int) ;
 int FUNC_4 (struct brcms_hardware*,int,int) ;
 int FUNC_5 (struct brcms_hardware*,int ) ;
 int FUNC_6 (struct bcma_device*,char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_7(struct brcms_c_info *VAR_7)
{
 struct brcms_hardware *VAR_8 = VAR_7->hw;
 struct bcma_device *VAR_9 = VAR_8->d11core;
 u32 VAR_10, VAR_11;

 FUNC_6(VAR_9, "wl%d: bandunit %d\n", VAR_8->unit,
      VAR_7->band->bandunit);




 VAR_8->mac_suspend_depth--;
 if (VAR_8->mac_suspend_depth > 0)
  return;

 VAR_10 = FUNC_2(VAR_9, FUNC_0(VAR_5));
 FUNC_1(VAR_10 & VAR_2);
 FUNC_1(VAR_10 & VAR_1);
 FUNC_1(!(VAR_10 & VAR_3));

 FUNC_4(VAR_8, VAR_1, VAR_1);
 FUNC_3(VAR_9, FUNC_0(VAR_6), VAR_4);

 VAR_10 = FUNC_2(VAR_9, FUNC_0(VAR_5));
 FUNC_1(VAR_10 & VAR_2);
 FUNC_1(!(VAR_10 & VAR_1));
 FUNC_1(!(VAR_10 & VAR_3));

 VAR_11 = FUNC_2(VAR_9, FUNC_0(VAR_6));
 FUNC_1(VAR_11 & VAR_4);

 FUNC_5(VAR_8,
       VAR_0);
}
