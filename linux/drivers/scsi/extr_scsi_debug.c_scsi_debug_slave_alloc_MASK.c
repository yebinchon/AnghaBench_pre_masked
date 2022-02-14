
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int lun; int id; int channel; TYPE_1__* host; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_1)
{
 if (VAR_0)
  FUNC_0("slave_alloc <%u %u %u %llu>\n",
         VAR_1->host->host_no, VAR_1->channel, VAR_1->id, VAR_1->lun);
 return 0;
}
