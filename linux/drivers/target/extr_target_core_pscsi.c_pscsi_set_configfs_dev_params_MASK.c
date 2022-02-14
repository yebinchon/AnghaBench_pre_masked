
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int substring_t ;
struct se_device {TYPE_1__* se_hba; } ;
struct pscsi_hba_virt {int phv_host_id; int phv_mode; } ;
struct pscsi_dev_virt {int pdv_host_id; int pdv_channel_id; int pdv_target_id; int pdv_lun_id; int pdv_flags; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct pscsi_hba_virt* hba_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct pscsi_dev_virt* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int ) ;
 char* FUNC_7 (char**,char*) ;
 int VAR_9 ;

__attribute__((used)) static ssize_t FUNC_8(struct se_device *VAR_10,
  const char *VAR_11, ssize_t VAR_12)
{
 struct pscsi_dev_virt *VAR_13 = FUNC_0(VAR_10);
 struct pscsi_hba_virt *VAR_14 = VAR_10->se_hba->hba_ptr;
 char *VAR_15, *VAR_16, *VAR_17;
 substring_t VAR_18[VAR_3];
 int VAR_19 = 0, VAR_20, VAR_21;

 VAR_17 = FUNC_2(VAR_11, VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_15 = VAR_17;

 while ((VAR_16 = FUNC_7(&VAR_17, ",\n")) != ((void*)0)) {
  if (!*VAR_16)
   continue;

  VAR_21 = FUNC_4(VAR_16, VAR_9, VAR_18);
  switch (VAR_21) {
  case 130:
   if (VAR_14->phv_mode == VAR_8) {
    FUNC_6("PSCSI[%d]: Unable to accept"
     " scsi_host_id while phv_mode =="
     " PHV_LLD_SCSI_HOST_NO\n",
     VAR_14->phv_host_id);
    VAR_19 = -VAR_0;
    goto out;
   }
   VAR_19 = FUNC_3(VAR_18, &VAR_20);
   if (VAR_19)
    goto out;
   VAR_13->pdv_host_id = VAR_20;
   FUNC_5("PSCSI[%d]: Referencing SCSI Host ID:"
    " %d\n", VAR_14->phv_host_id, VAR_13->pdv_host_id);
   VAR_13->pdv_flags |= VAR_7;
   break;
  case 131:
   VAR_19 = FUNC_3(VAR_18, &VAR_20);
   if (VAR_19)
    goto out;
   VAR_13->pdv_channel_id = VAR_20;
   FUNC_5("PSCSI[%d]: Referencing SCSI Channel"
    " ID: %d\n", VAR_14->phv_host_id,
    VAR_13->pdv_channel_id);
   VAR_13->pdv_flags |= VAR_4;
   break;
  case 128:
   VAR_19 = FUNC_3(VAR_18, &VAR_20);
   if (VAR_19)
    goto out;
   VAR_13->pdv_target_id = VAR_20;
   FUNC_5("PSCSI[%d]: Referencing SCSI Target"
    " ID: %d\n", VAR_14->phv_host_id,
    VAR_13->pdv_target_id);
   VAR_13->pdv_flags |= VAR_6;
   break;
  case 129:
   VAR_19 = FUNC_3(VAR_18, &VAR_20);
   if (VAR_19)
    goto out;
   VAR_13->pdv_lun_id = VAR_20;
   FUNC_5("PSCSI[%d]: Referencing SCSI LUN ID:"
    " %d\n", VAR_14->phv_host_id, VAR_13->pdv_lun_id);
   VAR_13->pdv_flags |= VAR_5;
   break;
  default:
   break;
  }
 }

out:
 FUNC_1(VAR_15);
 return (!VAR_19) ? VAR_12 : VAR_19;
}
