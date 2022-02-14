
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {int lldd_ha; struct asd_sas_port** sas_port; struct asd_sas_port** sas_phy; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_chip_info {int n_phy; } ;
struct asd_sas_port {int dummy; } ;
typedef struct asd_sas_port asd_sas_phy ;
struct Scsi_Host {int max_lun; int max_cmd_len; int cmd_per_lun; int can_queue; int unique_id; scalar_t__ max_channel; int max_id; int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct asd_sas_port** FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct asd_sas_port**) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct sas_ha_struct*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_5,
       const struct pm8001_chip_info *VAR_6)
{
 int VAR_7, VAR_8;
 struct asd_sas_phy **VAR_9;
 struct asd_sas_port **VAR_10;
 struct sas_ha_struct *VAR_11 = FUNC_0(VAR_5);

 VAR_7 = VAR_6->n_phy;
 VAR_8 = VAR_7;
 FUNC_4(VAR_11, 0x00, sizeof(*VAR_11));
 VAR_9 = FUNC_1(VAR_7, sizeof(void *), VAR_0);
 if (!VAR_9)
  goto exit;
 VAR_10 = FUNC_1(VAR_8, sizeof(void *), VAR_0);
 if (!VAR_10)
  goto exit_free2;

 VAR_11->sas_phy = VAR_9;
 VAR_11->sas_port = VAR_10;
 VAR_11->lldd_ha = FUNC_3(sizeof(struct pm8001_hba_info), VAR_0);
 if (!VAR_11->lldd_ha)
  goto exit_free1;

 VAR_5->transportt = VAR_4;
 VAR_5->max_id = VAR_2;
 VAR_5->max_lun = 8;
 VAR_5->max_channel = 0;
 VAR_5->unique_id = VAR_3;
 VAR_5->max_cmd_len = 16;
 VAR_5->can_queue = VAR_1;
 VAR_5->cmd_per_lun = 32;
 return 0;
exit_free1:
 FUNC_2(VAR_10);
exit_free2:
 FUNC_2(VAR_9);
exit:
 return -1;
}
