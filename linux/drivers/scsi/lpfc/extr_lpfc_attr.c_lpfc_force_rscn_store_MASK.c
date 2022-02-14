
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpfc_vport*,int ) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct lpfc_vport *VAR_6 = (struct lpfc_vport *)VAR_5->hostdata;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_6, 0);
 if (VAR_7)
  return -VAR_0;
 return FUNC_2(VAR_3);
}
