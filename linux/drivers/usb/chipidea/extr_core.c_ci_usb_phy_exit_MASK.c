
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {int usb_phy; scalar_t__ phy; TYPE_1__* platdata; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ci_hdrc *VAR_1)
{
 if (VAR_1->platdata->flags & VAR_0)
  return;

 if (VAR_1->phy) {
  FUNC_1(VAR_1->phy);
  FUNC_0(VAR_1->phy);
 } else {
  FUNC_2(VAR_1->usb_phy);
 }
}
