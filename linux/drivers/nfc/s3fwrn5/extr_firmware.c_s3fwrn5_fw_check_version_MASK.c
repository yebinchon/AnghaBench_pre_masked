
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct s3fwrn5_fw_version {scalar_t__ major; scalar_t__ build1; scalar_t__ build2; } ;
struct TYPE_2__ {int version; } ;
struct s3fwrn5_fw_info {TYPE_1__ fw; } ;



bool FUNC_0(struct s3fwrn5_fw_info *VAR_0, u32 VAR_1)
{
 struct s3fwrn5_fw_version *VAR_2 = (void *) &VAR_0->fw.version;
 struct s3fwrn5_fw_version *VAR_3 = (void *) &VAR_1;

 if (VAR_2->major > VAR_3->major)
  return 1;
 if (VAR_2->build1 > VAR_3->build1)
  return 1;
 if (VAR_2->build2 > VAR_3->build2)
  return 1;

 return 0;
}
