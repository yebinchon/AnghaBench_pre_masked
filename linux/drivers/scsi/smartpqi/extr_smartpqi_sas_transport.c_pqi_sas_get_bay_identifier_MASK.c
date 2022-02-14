
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_rphy {int dummy; } ;
struct pqi_scsi_dev {int bay; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pqi_scsi_dev* FUNC_0 (struct pqi_ctrl_info*,struct sas_rphy*) ;
 struct Scsi_Host* FUNC_1 (struct sas_rphy*) ;
 struct pqi_ctrl_info* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct sas_rphy *VAR_2)
{

 int VAR_3;
 unsigned long VAR_4;
 struct pqi_ctrl_info *VAR_5;
 struct pqi_scsi_dev *VAR_6;
 struct Scsi_Host *VAR_7;

 if (!VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_7);
 FUNC_3(&VAR_5->scsi_device_list_lock, VAR_4);
 VAR_6 = FUNC_0(VAR_5, VAR_2);

 if (!VAR_6) {
  VAR_3 = -VAR_1;
  goto out;
 }

 if (VAR_6->bay == 0xff)
  VAR_3 = -VAR_0;
 else
  VAR_3 = VAR_6->bay;

out:
 FUNC_4(&VAR_5->scsi_device_list_lock, VAR_4);

 return VAR_3;
}
