
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdebug_dev_info {int used; } ;
struct scsi_device {int * hostdata; int lun; int id; int channel; TYPE_1__* host; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct scsi_device *VAR_1)
{
 struct sdebug_dev_info *VAR_2 =
  (struct sdebug_dev_info *)VAR_1->hostdata;

 if (VAR_0)
  FUNC_0("slave_destroy <%u %u %u %llu>\n",
         VAR_1->host->host_no, VAR_1->channel, VAR_1->id, VAR_1->lun);
 if (VAR_2) {

  VAR_2->used = 0;
  VAR_1->hostdata = ((void*)0);
 }
}
