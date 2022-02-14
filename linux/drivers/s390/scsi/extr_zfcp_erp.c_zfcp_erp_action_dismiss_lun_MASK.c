
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_scsi_dev {int erp_action; int status; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_1)
{
 struct zfcp_scsi_dev *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(&VAR_2->status) & VAR_0)
  FUNC_2(&VAR_2->erp_action);
}
