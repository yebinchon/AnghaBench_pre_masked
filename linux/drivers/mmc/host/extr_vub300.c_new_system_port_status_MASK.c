
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_flags; } ;
struct vub300_mmc_host {int card_present; int read_only; int mmc; TYPE_2__* udev; scalar_t__* vub_name; scalar_t__ bus_width; TYPE_1__ system_port_status; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct vub300_mmc_host *VAR_1)
{
 int VAR_2 = VAR_1->card_present;
 int VAR_3 =
  (0x0001 & VAR_1->system_port_status.port_flags) ? 1 : 0;
 VAR_1->read_only =
  (0x0010 & VAR_1->system_port_status.port_flags) ? 1 : 0;
 if (VAR_3 && !VAR_2) {
  FUNC_0(&VAR_1->udev->dev, "card just inserted\n");
  VAR_1->card_present = 1;
  VAR_1->bus_width = 0;
  if (VAR_0)
   FUNC_2(VAR_1->vub_name, "EMPTY Processing Disabled",
    sizeof(VAR_1->vub_name));
  else
   VAR_1->vub_name[0] = 0;
  FUNC_1(VAR_1->mmc, 1);
 } else if (!VAR_3 && VAR_2) {
  FUNC_0(&VAR_1->udev->dev, "card just ejected\n");
  VAR_1->card_present = 0;
  FUNC_1(VAR_1->mmc, 0);
 } else {

 }
}
