
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hub {TYPE_1__* hdev; int power_bits; int intfdev; } ;
struct TYPE_3__ {int maxchild; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct usb_hub*) ;
 int FUNC_2 (struct usb_hub*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct usb_hub *VAR_1, bool VAR_2)
{
 int VAR_3;







 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1->intfdev, "enabling power on all ports\n");
 else
  FUNC_0(VAR_1->intfdev, "trying to enable port power on "
    "non-switchable hub\n");
 for (VAR_3 = 1; VAR_3 <= VAR_1->hdev->maxchild; VAR_3++)
  if (FUNC_5(VAR_3, VAR_1->power_bits))
   FUNC_4(VAR_1->hdev, VAR_3, VAR_0);
  else
   FUNC_6(VAR_1->hdev, VAR_3,
      VAR_0);
 if (VAR_2)
  FUNC_3(FUNC_2(VAR_1));
}
