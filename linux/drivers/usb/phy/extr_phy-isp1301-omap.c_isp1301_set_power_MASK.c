
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_phy {TYPE_1__* otg; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct usb_phy *VAR_3, unsigned VAR_4)
{
 if (!VAR_2)
  return -VAR_0;
 if (VAR_3->otg->state == VAR_1)
  FUNC_0(VAR_2, VAR_4);
 return 0;
}
