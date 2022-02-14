
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; struct brcmf_bus* bus; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; } ;
struct brcmf_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct brcmf_bus*,int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_2(struct brcmf_usbdev_info *VAR_5, int VAR_6)
{
 struct brcmf_bus *VAR_7 = VAR_5->bus_pub.bus;

 FUNC_1(VAR_4, "Enter, current state=%d, new state=%d\n",
    VAR_5->bus_pub.state, VAR_6);

 if (VAR_5->bus_pub.state == VAR_6)
  return;

 VAR_5->bus_pub.state = VAR_6;


 if (VAR_6 == VAR_0) {
  FUNC_1(VAR_4, "DBUS is down\n");
  FUNC_0(VAR_7, VAR_2);
 } else if (VAR_6 == VAR_1) {
  FUNC_1(VAR_4, "DBUS is up\n");
  FUNC_0(VAR_7, VAR_3);
 } else {
  FUNC_1(VAR_4, "DBUS current state=%d\n", VAR_6);
 }
}
