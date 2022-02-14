
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; scalar_t__ lun; int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_1)
{
 if (VAR_1->channel > FUNC_1(VAR_1->host))
  return -VAR_0;

 if (VAR_1->lun > 0)
  return -VAR_0;

 if (VAR_1->channel == FUNC_1(VAR_1->host))
  return FUNC_0(VAR_1);

 return FUNC_2(VAR_1);
}
