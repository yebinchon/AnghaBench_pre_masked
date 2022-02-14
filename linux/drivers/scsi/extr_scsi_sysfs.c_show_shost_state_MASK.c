
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int shost_state; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 const char *VAR_5 = FUNC_1(VAR_4->shost_state);

 if (!VAR_5)
  return -VAR_0;

 return FUNC_2(VAR_3, 20, "%s\n", VAR_5);
}
