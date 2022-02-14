
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int fw_major_version; int fw_minor_version; int fw_subminor_version; int fw_attributes; } ;


 int FUNC_0 (char*,size_t,char*,int,int,int,int) ;

__attribute__((used)) static char *
FUNC_1(struct scsi_qla_host *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;

 FUNC_0(VAR_1, VAR_2, "%d.%02d.%02d (%x)", VAR_3->fw_major_version,
     VAR_3->fw_minor_version, VAR_3->fw_subminor_version, VAR_3->fw_attributes);
 return VAR_1;
}
