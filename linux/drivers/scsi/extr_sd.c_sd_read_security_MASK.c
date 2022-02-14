
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {int security; struct scsi_device* device; } ;
struct scsi_device {int security_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*,unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_disk *VAR_3, unsigned char *VAR_4)
{
 struct scsi_device *VAR_5 = VAR_3->device;

 if (!VAR_5->security_supported)
  return;

 if (FUNC_0(VAR_5, VAR_4, VAR_0,
   VAR_1) == 1 &&
     FUNC_0(VAR_5, VAR_4, VAR_0,
   VAR_2) == 1)
  VAR_3->security = 1;
}
