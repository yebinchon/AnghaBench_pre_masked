
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ fc_unmap_cnt; scalar_t__ fc_map_cnt; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct lpfc_vport *VAR_5 = (struct lpfc_vport *) VAR_4->hostdata;

 return FUNC_1(VAR_3, VAR_0, "%d\n",
   VAR_5->fc_map_cnt + VAR_5->fc_unmap_cnt);
}
