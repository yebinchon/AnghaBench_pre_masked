
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union devlink_param_value {scalar_t__ vu8; } ;
struct mlxsw_sp {char* fw_filename; TYPE_1__* bus_info; int core; struct mlxsw_fw_rev* req_rev; } ;
struct mlxsw_fw_rev {scalar_t__ major; scalar_t__ minor; scalar_t__ subminor; scalar_t__ can_reset_minor; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int dev; struct mlxsw_fw_rev fw_rev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int FUNC_4 (int ,int ,union devlink_param_value*) ;
 int FUNC_5 (struct mlxsw_sp*,struct firmware const*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,char const*,int ) ;

__attribute__((used)) static int FUNC_9(struct mlxsw_sp *VAR_4)
{
 const struct mlxsw_fw_rev *VAR_5 = &VAR_4->bus_info->fw_rev;
 const struct mlxsw_fw_rev *VAR_6 = VAR_4->req_rev;
 const char *VAR_7 = VAR_4->fw_filename;
 union devlink_param_value VAR_8;
 const struct firmware *VAR_9;
 int VAR_10;


 if (!VAR_6 || !VAR_7)
  return 0;


 VAR_10 = FUNC_4(FUNC_6(VAR_4->core),
       VAR_1,
       &VAR_8);
 if (VAR_10)
  return VAR_10;
 if (VAR_8.vu8 == VAR_0)
  return 0;


 if (VAR_5->major != VAR_6->major) {
  FUNC_1(1, "Mismatch in major FW version [%d:%d] is never expected; Please contact support\n",
       VAR_5->major, VAR_6->major);
  return -VAR_3;
 }
 if (FUNC_0(VAR_5->minor) ==
     FUNC_0(VAR_6->minor) &&
     (VAR_5->minor > VAR_6->minor ||
      (VAR_5->minor == VAR_6->minor &&
       VAR_5->subminor >= VAR_6->subminor)))
  return 0;

 FUNC_3(VAR_4->bus_info->dev, "The firmware version %d.%d.%d is incompatible with the driver\n",
   VAR_5->major, VAR_5->minor, VAR_5->subminor);
 FUNC_3(VAR_4->bus_info->dev, "Flashing firmware using file %s\n",
   VAR_7);

 VAR_10 = FUNC_8(&VAR_9, VAR_7,
          VAR_4->bus_info->dev);
 if (VAR_10) {
  FUNC_2(VAR_4->bus_info->dev, "Could not request firmware file %s\n",
   VAR_7);
  return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_4, VAR_9, ((void*)0));
 FUNC_7(VAR_9);
 if (VAR_10)
  FUNC_2(VAR_4->bus_info->dev, "Could not upgrade firmware\n");




 if (VAR_5->minor >= VAR_6->can_reset_minor)
  return VAR_10 ? VAR_10 : -VAR_2;
 else
  return 0;
}
