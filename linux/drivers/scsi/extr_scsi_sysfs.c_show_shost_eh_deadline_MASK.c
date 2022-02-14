
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int eh_deadline; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,scalar_t__,char*) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->eh_deadline == -1)
  return FUNC_1(VAR_3, FUNC_3("off") + 2, "off\n");
 return FUNC_2(VAR_3, "%u\n", VAR_4->eh_deadline / VAR_0);
}
