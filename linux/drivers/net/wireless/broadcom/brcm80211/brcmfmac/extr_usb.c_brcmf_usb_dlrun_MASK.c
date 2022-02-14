
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdl_state_le {scalar_t__ state; } ;
struct TYPE_2__ {int devid; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; } ;
typedef int state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct brcmf_usbdev_info*,int ,struct rdl_state_le*,int) ;
 scalar_t__ FUNC_3 (struct brcmf_usbdev_info*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct brcmf_usbdev_info *VAR_6)
{
 struct rdl_state_le VAR_7;

 FUNC_0(VAR_5, "Enter\n");
 if (!VAR_6)
  return -VAR_3;

 if (VAR_6->bus_pub.devid == 0xDEAD)
  return -VAR_3;


 VAR_7.state = 0;
 FUNC_2(VAR_6, VAR_0, &VAR_7, sizeof(VAR_7));


 if (VAR_7.state == FUNC_4(VAR_2)) {
  if (FUNC_2(VAR_6, VAR_1, &VAR_7, sizeof(VAR_7)))
   return -VAR_4;
  if (FUNC_3(VAR_6))
   return -VAR_4;

 } else {
  FUNC_1("Dongle not runnable\n");
  return -VAR_3;
 }
 FUNC_0(VAR_5, "Exit\n");
 return 0;
}
