
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; int actual_length; scalar_t__ context; } ;
struct brcmf_usbdev_info {int ctl_urb_actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_usbdev_info*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct urb *VAR_2)
{
 struct brcmf_usbdev_info *VAR_3 =
  (struct brcmf_usbdev_info *)VAR_2->context;

 FUNC_0(VAR_1, "Enter\n");
 VAR_3->ctl_urb_actual_length = VAR_2->actual_length;
 FUNC_1(VAR_3, VAR_0,
  VAR_2->status);
}
