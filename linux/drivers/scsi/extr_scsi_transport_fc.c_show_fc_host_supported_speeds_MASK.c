
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int FUNC_2 (char*,int,char*) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4 (struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_4) == VAR_0)
  return FUNC_2(VAR_3, 20, "unknown\n");

 return FUNC_1(FUNC_0(VAR_4), VAR_3);
}
