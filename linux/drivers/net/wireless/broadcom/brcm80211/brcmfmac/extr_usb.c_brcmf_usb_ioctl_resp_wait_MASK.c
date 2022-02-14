
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_usbdev_info {int ctl_completed; int ioctl_resp_wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct brcmf_usbdev_info *VAR_1)
{
 return FUNC_0(VAR_1->ioctl_resp_wait,
      VAR_1->ctl_completed, VAR_0);
}
