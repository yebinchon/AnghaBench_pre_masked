
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sas_rphy {int dummy; } ;
struct hpsa_scsi_dev_t {int eli; } ;
struct ctlr_info {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct hpsa_scsi_dev_t* FUNC_0 (struct ctlr_info*,struct sas_rphy*) ;
 struct Scsi_Host* FUNC_1 (struct sas_rphy*) ;
 struct ctlr_info* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_3(struct sas_rphy *VAR_1, u64 *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_1(VAR_1);
 struct ctlr_info *VAR_4;
 struct hpsa_scsi_dev_t *VAR_5;

 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_3);

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 *VAR_2 = VAR_5->eli;

 return 0;
}
