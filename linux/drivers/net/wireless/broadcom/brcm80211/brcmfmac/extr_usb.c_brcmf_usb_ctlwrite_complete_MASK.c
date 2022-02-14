
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; scalar_t__ context; } ;
struct brcmf_usbdev_info {int dummy; } ;


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
 FUNC_1(VAR_3, VAR_0,
  VAR_2->status);
}
