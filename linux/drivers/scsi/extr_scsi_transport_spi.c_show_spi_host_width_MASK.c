
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int max_id; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "%s\n", VAR_3->max_id == 16 ? "wide" : "narrow");
}
