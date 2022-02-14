
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct MPT3SAS_DEVICE {int block; TYPE_1__* sas_target; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct scsi_device*,int ) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int,...) ;

__attribute__((used)) static void
FUNC_3(struct scsi_device *VAR_3,
   struct MPT3SAS_DEVICE *VAR_4)
{
 int VAR_5 = 0;

 FUNC_2(VAR_1, VAR_3, "device_unblock and setting to running, "
     "handle(0x%04x)\n", VAR_4->sas_target->handle);
 VAR_4->block = 0;
 VAR_5 = FUNC_1(VAR_3, VAR_2);
 if (VAR_5 == -VAR_0) {





  FUNC_2(VAR_1, VAR_3,
      "device_unblock failed with return(%d) for handle(0x%04x) "
      "performing a block followed by an unblock\n",
      VAR_5, VAR_4->sas_target->handle);
  VAR_4->block = 1;
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5)
   FUNC_2(VAR_1, VAR_3, "retried device_block "
       "failed with return(%d) for handle(0x%04x)\n",
       VAR_5, VAR_4->sas_target->handle);

  VAR_4->block = 0;
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (VAR_5)
   FUNC_2(VAR_1, VAR_3, "retried device_unblock"
       " failed with return(%d) for handle(0x%04x)\n",
       VAR_5, VAR_4->sas_target->handle);
 }
}
