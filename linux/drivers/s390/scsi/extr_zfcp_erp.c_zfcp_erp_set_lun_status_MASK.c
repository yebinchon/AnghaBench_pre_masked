
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zfcp_scsi_dev {int status; } ;
struct scsi_device {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 struct zfcp_scsi_dev* FUNC_1 (struct scsi_device*) ;

void FUNC_2(struct scsi_device *VAR_0, u32 VAR_1)
{
 struct zfcp_scsi_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, &VAR_2->status);
}
