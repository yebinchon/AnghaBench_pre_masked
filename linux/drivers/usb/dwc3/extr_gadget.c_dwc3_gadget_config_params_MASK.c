
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct usb_dcd_config_params {int besl_baseline; scalar_t__ bU2DevExitLat; scalar_t__ bU1devExitLat; void* besl_deep; } ;
struct dwc3 {scalar_t__ dis_u2_entry_quirk; scalar_t__ dis_u1_entry_quirk; int hird_threshold; scalar_t__ is_utmi_l1_suspend; int dis_enblslpm_quirk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int ,int ,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dwc3* FUNC_2 (struct usb_gadget*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct usb_gadget *VAR_4,
          struct usb_dcd_config_params *VAR_5)
{
 struct dwc3 *VAR_6 = FUNC_2(VAR_4);

 VAR_5->besl_baseline = VAR_2;
 VAR_5->besl_deep = VAR_2;


 if (!VAR_6->dis_enblslpm_quirk) {
  VAR_5->besl_baseline = 1;
  if (VAR_6->is_utmi_l1_suspend)
   VAR_5->besl_deep =
    FUNC_0(VAR_3, VAR_6->hird_threshold, 2, 15);
 }


 if (VAR_6->dis_u1_entry_quirk)
  VAR_5->bU1devExitLat = 0;
 else
  VAR_5->bU1devExitLat = VAR_0;


 if (VAR_6->dis_u2_entry_quirk)
  VAR_5->bU2DevExitLat = 0;
 else
  VAR_5->bU2DevExitLat =
    FUNC_1(VAR_1);
}
