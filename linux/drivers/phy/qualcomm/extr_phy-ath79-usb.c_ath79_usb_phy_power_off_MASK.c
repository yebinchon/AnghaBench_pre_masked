
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ath79_usb_phy {scalar_t__ reset; scalar_t__ no_suspend_override; } ;


 struct ath79_usb_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct ath79_usb_phy *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1->reset);
 if (VAR_2)
  return VAR_2;

 if (VAR_1->no_suspend_override) {
  VAR_2 = FUNC_2(VAR_1->no_suspend_override);
  if (VAR_2)
   FUNC_2(VAR_1->reset);
 }

 return VAR_2;
}
