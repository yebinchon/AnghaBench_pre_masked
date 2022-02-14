
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct brcmf_usbdev_info {int ctl_completed; int ctl_urb_status; int ctl_urb_actual_length; int ctl_op; TYPE_1__ bus_pub; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 struct brcmf_usbdev_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct brcmf_usbdev_info*) ;
 int FUNC_4 (struct brcmf_usbdev_info*,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, u8 *VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 struct brcmf_usbdev_info *VAR_8 = FUNC_2(VAR_3);

 FUNC_0(VAR_2, "Enter\n");
 if (VAR_8->bus_pub.state != VAR_0)
  return -VAR_1;

 if (FUNC_6(0, &VAR_8->ctl_op))
  return -VAR_1;

 VAR_8->ctl_completed = 0;
 VAR_6 = FUNC_4(VAR_8, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1("fail %d bytes: %d\n", VAR_6, VAR_5);
  FUNC_5(0, &VAR_8->ctl_op);
  return VAR_6;
 }
 VAR_7 = FUNC_3(VAR_8);
 VAR_6 = VAR_8->ctl_urb_status;
 FUNC_5(0, &VAR_8->ctl_op);
 if (!VAR_7) {
  FUNC_1("rxctl wait timed out\n");
  VAR_6 = -VAR_1;
 }
 if (!VAR_6)
  return VAR_8->ctl_urb_actual_length;
 else
  return VAR_6;
}
