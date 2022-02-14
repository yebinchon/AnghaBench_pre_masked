
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3 {scalar_t__ current_dr_role; scalar_t__ revision; int usb2_generic_phy; int usb3_generic_phy; int regs; int usb3_phy; int usb2_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct dwc3*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dwc3 *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 1000;
 int VAR_9;

 FUNC_7(VAR_6->usb2_phy);
 FUNC_7(VAR_6->usb3_phy);
 VAR_9 = FUNC_5(VAR_6->usb2_generic_phy);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_6->usb3_generic_phy);
 if (VAR_9 < 0) {
  FUNC_4(VAR_6->usb2_generic_phy);
  return VAR_9;
 }






 if (VAR_6->current_dr_role == VAR_2)
  return 0;

 VAR_7 = FUNC_1(VAR_6->regs, VAR_0);
 VAR_7 |= VAR_1;
 FUNC_2(VAR_6->regs, VAR_0, VAR_7);







 if (FUNC_0(VAR_6) && VAR_6->revision >= VAR_4)
  VAR_8 = 10;

 do {
  VAR_7 = FUNC_1(VAR_6->regs, VAR_0);
  if (!(VAR_7 & VAR_1))
   goto done;

  if (FUNC_0(VAR_6) &&
      VAR_6->revision >= VAR_4)
   FUNC_3(20);
  else
   FUNC_6(1);
 } while (--VAR_8);

 FUNC_4(VAR_6->usb3_generic_phy);
 FUNC_4(VAR_6->usb2_generic_phy);

 return -VAR_5;

done:





 if (FUNC_0(VAR_6) && VAR_6->revision <= VAR_3)
  FUNC_3(50);

 return 0;
}
