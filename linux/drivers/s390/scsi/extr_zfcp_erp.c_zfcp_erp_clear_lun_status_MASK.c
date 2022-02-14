
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_scsi_dev {int erp_counter; int status; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int ) ;
 struct zfcp_scsi_dev* FUNC_2 (struct scsi_device*) ;

void FUNC_3(struct scsi_device *VAR_1, u32 VAR_2)
{
 struct zfcp_scsi_dev *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_2, &VAR_3->status);

 if (VAR_2 & VAR_0)
  FUNC_1(&VAR_3->erp_counter, 0);
}
