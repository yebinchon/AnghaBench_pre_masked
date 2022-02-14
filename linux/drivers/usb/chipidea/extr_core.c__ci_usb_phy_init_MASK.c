
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int usb_phy; scalar_t__ phy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ci_hdrc *VAR_0)
{
 int VAR_1;

 if (VAR_0->phy) {
  VAR_1 = FUNC_1(VAR_0->phy);
  if (VAR_1)
   return VAR_1;

  VAR_1 = FUNC_2(VAR_0->phy);
  if (VAR_1) {
   FUNC_0(VAR_0->phy);
   return VAR_1;
  }
 } else {
  VAR_1 = FUNC_3(VAR_0->usb_phy);
 }

 return VAR_1;
}
