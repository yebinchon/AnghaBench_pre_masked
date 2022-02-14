
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 return FUNC_2(VAR_2, 20, "%d\n", FUNC_1(VAR_3));
}
