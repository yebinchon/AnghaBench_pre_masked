
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {scalar_t__ media_present; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct scsi_cd* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1)
{
 struct scsi_cd *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return 0;

 if (VAR_2->media_present)
  return -VAR_0;
 else
  return 0;
}
