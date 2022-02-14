
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cd {struct scsi_device* device; } ;
struct cdrom_device_info {struct scsi_cd* handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_1(struct cdrom_device_info *VAR_1, int VAR_2)
{
 struct scsi_cd *VAR_3 = VAR_1->handle;
 struct scsi_device *VAR_4 = VAR_3->device;
 int VAR_5;





 VAR_5 = -VAR_0;
 if (!FUNC_0(VAR_4))
  goto error_out;

 return 0;

error_out:
 return VAR_5;
}
