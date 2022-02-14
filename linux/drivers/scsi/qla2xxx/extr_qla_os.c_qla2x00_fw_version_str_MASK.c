
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int fw_major_version; int fw_minor_version; int fw_subminor_version; int fw_attributes; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int,int,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(struct scsi_qla_host *VAR_1, char *VAR_2, size_t VAR_3)
{
 char VAR_4[10];
 struct qla_hw_data *VAR_5 = VAR_1->hw;

 FUNC_0(VAR_2, VAR_3, "%d.%02d.%02d ", VAR_5->fw_major_version,
     VAR_5->fw_minor_version, VAR_5->fw_subminor_version);

 if (VAR_5->fw_attributes & VAR_0) {
  FUNC_2(VAR_2, "FLX");
  return (VAR_2);
 }

 switch (VAR_5->fw_attributes & 0xFF) {
 case 0x7:
  FUNC_2(VAR_2, "EF");
  break;
 case 0x17:
  FUNC_2(VAR_2, "TP");
  break;
 case 0x37:
  FUNC_2(VAR_2, "IP");
  break;
 case 0x77:
  FUNC_2(VAR_2, "VI");
  break;
 default:
  FUNC_1(VAR_4, "(%x)", VAR_5->fw_attributes);
  FUNC_2(VAR_2, VAR_4);
  break;
 }
 if (VAR_5->fw_attributes & 0x100)
  FUNC_2(VAR_2, "X");

 return (VAR_2);
}
