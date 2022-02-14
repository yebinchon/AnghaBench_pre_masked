
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdebug_dev_info {int dummy; } ;
struct scsi_device {int no_uld_attach; struct sdebug_dev_info* hostdata; TYPE_1__* host; int lun; int id; int channel; } ;
struct TYPE_2__ {scalar_t__ max_cmd_len; int host_no; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scsi_device*) ;
 struct sdebug_dev_info* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_3)
{
 struct sdebug_dev_info *VAR_4 =
   (struct sdebug_dev_info *)VAR_3->hostdata;

 if (VAR_2)
  FUNC_2("slave_configure <%u %u %u %llu>\n",
         VAR_3->host->host_no, VAR_3->channel, VAR_3->id, VAR_3->lun);
 if (VAR_3->host->max_cmd_len != VAR_0)
  VAR_3->host->max_cmd_len = VAR_0;
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0))
   return 1;
 }
 VAR_3->hostdata = VAR_4;
 if (VAR_1)
  VAR_3->no_uld_attach = 1;
 FUNC_0(VAR_3);
 return 0;
}
