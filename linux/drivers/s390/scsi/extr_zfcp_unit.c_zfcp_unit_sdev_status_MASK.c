
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int dummy; } ;
struct zfcp_scsi_dev {int status; } ;
struct scsi_device {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_device*) ;
 struct zfcp_scsi_dev* FUNC_2 (struct scsi_device*) ;
 struct scsi_device* FUNC_3 (struct zfcp_unit*) ;

unsigned int FUNC_4(struct zfcp_unit *VAR_0)
{
 unsigned int VAR_1 = 0;
 struct scsi_device *VAR_2;
 struct zfcp_scsi_dev *VAR_3;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2) {
  VAR_3 = FUNC_2(VAR_2);
  VAR_1 = FUNC_0(&VAR_3->status);
  FUNC_1(VAR_2);
 }

 return VAR_1;
}
