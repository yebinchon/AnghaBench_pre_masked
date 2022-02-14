
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_scsi_dev {int dummy; } ;
struct pqi_ctrl_info {int lun_reset_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;
 int FUNC_6 (struct pqi_scsi_dev*) ;
 int FUNC_7 (struct pqi_scsi_dev*) ;
 int FUNC_8 (struct pqi_ctrl_info*,struct pqi_scsi_dev*) ;
 int FUNC_9 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_10(struct pqi_ctrl_info *VAR_1,
 struct pqi_scsi_dev *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->lun_reset_mutex);

 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_8(VAR_1, VAR_2);
 VAR_3 = FUNC_9(VAR_1);
 FUNC_7(VAR_2);
 FUNC_4(VAR_1);

 if (VAR_3)
  VAR_3 = VAR_0;
 else
  VAR_3 = FUNC_0(VAR_1, VAR_2);

 FUNC_6(VAR_2);

 FUNC_2(&VAR_1->lun_reset_mutex);

 return VAR_3;
}
