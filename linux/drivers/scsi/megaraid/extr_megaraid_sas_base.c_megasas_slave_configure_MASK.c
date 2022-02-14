
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct scsi_device {scalar_t__ type; int channel; size_t id; TYPE_1__* host; } ;
struct megasas_instance {int reset_mutex; scalar_t__ nvme_page_size; scalar_t__ tgt_prop; scalar_t__ pd_info; TYPE_2__* pd_list; scalar_t__ pd_list_not_supported; } ;
struct TYPE_4__ {scalar_t__ driveState; } ;
struct TYPE_3__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct megasas_instance*,struct scsi_device*) ;
 int FUNC_2 (struct megasas_instance*,struct scsi_device*) ;
 struct megasas_instance* FUNC_3 (int ) ;
 int FUNC_4 (struct scsi_device*,int) ;
 int FUNC_5 (struct scsi_device*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct scsi_device *VAR_6)
{
 u16 VAR_7 = 0;
 struct megasas_instance *VAR_8;
 int VAR_9 = VAR_0;
 bool VAR_10 = 0;

 VAR_8 = FUNC_3(VAR_6->host->host_no);
 if (VAR_8->pd_list_not_supported) {
  if (!FUNC_0(VAR_6) && VAR_6->type == VAR_5) {
   VAR_7 = (VAR_6->channel * VAR_3) +
    VAR_6->id;
   if (VAR_8->pd_list[VAR_7].driveState !=
    VAR_4)
    return -VAR_2;
  }
 }

 FUNC_6(&VAR_8->reset_mutex);

 if ((VAR_8->pd_info) && !FUNC_0(VAR_6))
  FUNC_1(VAR_8, VAR_6);




 if ((VAR_8->tgt_prop) && (VAR_8->nvme_page_size))
  VAR_9 = FUNC_2(VAR_8, VAR_6);

 VAR_10 = (VAR_9 == VAR_1) ? 1 : 0;
 FUNC_5(VAR_6, VAR_10);


 FUNC_4(VAR_6, VAR_10);

 FUNC_7(&VAR_8->reset_mutex);

 return 0;
}
