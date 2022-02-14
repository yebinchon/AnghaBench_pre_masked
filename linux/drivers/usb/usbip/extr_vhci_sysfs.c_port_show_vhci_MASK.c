
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int sockfd; } ;
struct vhci_device {int speed; int devid; TYPE_2__* udev; TYPE_1__ ud; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void FUNC_2(char **VAR_2, int VAR_3, int VAR_4, struct vhci_device *VAR_5)
{
 if (VAR_3 == VAR_0)
  *VAR_2 += FUNC_1(*VAR_2, "hs  %04u %03u ",
          VAR_4, VAR_5->ud.status);
 else
  *VAR_2 += FUNC_1(*VAR_2, "ss  %04u %03u ",
          VAR_4, VAR_5->ud.status);

 if (VAR_5->ud.status == VAR_1) {
  *VAR_2 += FUNC_1(*VAR_2, "%03u %08x ",
          VAR_5->speed, VAR_5->devid);
  *VAR_2 += FUNC_1(*VAR_2, "%06u %s",
          VAR_5->ud.sockfd,
          FUNC_0(&VAR_5->udev->dev));

 } else {
  *VAR_2 += FUNC_1(*VAR_2, "000 00000000 ");
  *VAR_2 += FUNC_1(*VAR_2, "000000 0-0");
 }

 *VAR_2 += FUNC_1(*VAR_2, "\n");
}
