
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct scsi_cmnd {struct scsi_device* device; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_1)
{
 struct scsi_device *VAR_2 = VAR_1->device;

 return FUNC_0(VAR_2, VAR_0);
}
