
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rave_sp_status {int bootloader_version; int firmware_version; } ;
struct rave_sp {char const* part_number_firmware; char const* part_number_bootloader; TYPE_3__* variant; TYPE_1__* serdev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int (* get_status ) (struct rave_sp*,struct rave_sp_status*) ;} ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 char* FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct rave_sp*,struct rave_sp_status*) ;

__attribute__((used)) static int FUNC_2(struct rave_sp *VAR_1)
{
 struct device *VAR_2 = &VAR_1->serdev->dev;
 struct rave_sp_status VAR_3;
 const char *VAR_4;
 int VAR_5;

 VAR_5 = VAR_1->variant->cmd.get_status(VAR_1, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_0(VAR_2, &VAR_3.firmware_version);
 if (!VAR_4)
  return -VAR_0;

 VAR_1->part_number_firmware = VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3.bootloader_version);
 if (!VAR_4)
  return -VAR_0;

 VAR_1->part_number_bootloader = VAR_4;

 return 0;
}
