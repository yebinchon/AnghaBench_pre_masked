
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int lun; int target; int bus; } ;
struct pqi_ctrl_info {int sas_host; int scsi_host; } ;


 int FUNC_0 (int ,struct pqi_scsi_dev*) ;
 scalar_t__ FUNC_1 (struct pqi_scsi_dev*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pqi_ctrl_info *VAR_0,
 struct pqi_scsi_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_2(VAR_0->scsi_host, VAR_1->bus,
   VAR_1->target, VAR_1->lun);
 else
  VAR_2 = FUNC_0(VAR_0->sas_host, VAR_1);

 return VAR_2;
}
