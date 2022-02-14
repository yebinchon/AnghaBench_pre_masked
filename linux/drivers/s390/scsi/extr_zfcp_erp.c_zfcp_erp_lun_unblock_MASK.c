
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_scsi_dev {int status; int erp_action; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct scsi_device *VAR_1)
{
 struct zfcp_scsi_dev *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_0,
           &VAR_2->status))
  FUNC_2("erlubl1", &FUNC_1(VAR_1)->erp_action);
 FUNC_0(VAR_0, &VAR_2->status);
}
