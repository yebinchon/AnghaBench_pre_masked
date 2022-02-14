
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_cl_device {int dev; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ hbm_f_os_supported; scalar_t__ fw_f_fw_ver_supported; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mei_cl_device*) ;
 int FUNC_2 (struct mei_cl_device*) ;
 int FUNC_3 (struct mei_cl_device*) ;
 int FUNC_4 (struct mei_cl_device*) ;

__attribute__((used)) static void FUNC_5(struct mei_cl_device *VAR_0)
{
 int VAR_1;


 if (!VAR_0->bus->fw_f_fw_ver_supported &&
     !VAR_0->bus->hbm_f_os_supported)
  return;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return;

 if (VAR_0->bus->fw_f_fw_ver_supported) {
  VAR_1 = FUNC_3(VAR_0);
  if (VAR_1 < 0)
   FUNC_0(&VAR_0->dev, "FW version command failed %d\n",
    VAR_1);
 }

 if (VAR_0->bus->hbm_f_os_supported) {
  VAR_1 = FUNC_4(VAR_0);
  if (VAR_1 < 0)
   FUNC_0(&VAR_0->dev, "OS version command failed %d\n",
    VAR_1);
 }
 FUNC_1(VAR_0);
}
