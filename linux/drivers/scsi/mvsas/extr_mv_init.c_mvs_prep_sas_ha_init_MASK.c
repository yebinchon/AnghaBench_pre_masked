
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct Scsi_Host* shost; } ;
struct sas_ha_struct {scalar_t__ lldd_ha; TYPE_1__ core; struct asd_sas_port** sas_port; struct asd_sas_port** sas_phy; } ;
struct mvs_prv_info {unsigned short n_host; } ;
struct mvs_chip_info {unsigned short n_host; unsigned short n_phy; } ;
struct asd_sas_port {int dummy; } ;
typedef struct asd_sas_port asd_sas_phy ;
struct Scsi_Host {int max_channel; int max_cmd_len; int max_lun; int max_id; int transportt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 struct asd_sas_port** FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct asd_sas_port**) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (struct sas_ha_struct*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct Scsi_Host *VAR_3,
    const struct mvs_chip_info *VAR_4)
{
 int VAR_5, VAR_6; unsigned short VAR_7;
 struct asd_sas_phy **VAR_8;
 struct asd_sas_port **VAR_9;
 struct sas_ha_struct *VAR_10 = FUNC_0(VAR_3);

 VAR_7 = VAR_4->n_host;
 VAR_5 = VAR_7 * VAR_4->n_phy;
 VAR_6 = VAR_5;

 FUNC_4(VAR_10, 0x00, sizeof(struct sas_ha_struct));
 VAR_8 = FUNC_1(VAR_5, sizeof(void *), VAR_0);
 VAR_9 = FUNC_1(VAR_6, sizeof(void *), VAR_0);
 if (!VAR_8 || !VAR_9)
  goto exit_free;

 VAR_10->sas_phy = VAR_8;
 VAR_10->sas_port = VAR_9;
 VAR_10->core.shost = VAR_3;

 VAR_10->lldd_ha = FUNC_3(sizeof(struct mvs_prv_info), VAR_0);
 if (!VAR_10->lldd_ha)
  goto exit_free;

 ((struct mvs_prv_info *)VAR_10->lldd_ha)->n_host = VAR_7;

 VAR_3->transportt = VAR_2;
 VAR_3->max_id = VAR_1;
 VAR_3->max_lun = ~0;
 VAR_3->max_channel = 1;
 VAR_3->max_cmd_len = 16;

 return 0;
exit_free:
 FUNC_2(VAR_8);
 FUNC_2(VAR_9);
 return -1;

}
