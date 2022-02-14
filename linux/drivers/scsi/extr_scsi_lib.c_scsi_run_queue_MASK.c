
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {TYPE_2__* host; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct TYPE_4__ {int starved_list; } ;
struct TYPE_3__ {scalar_t__ single_lun; } ;


 int FUNC_0 (struct request_queue*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__* FUNC_4 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_5(struct request_queue *VAR_0)
{
 struct scsi_device *VAR_1 = VAR_0->queuedata;

 if (FUNC_4(VAR_1)->single_lun)
  FUNC_2(VAR_1);
 if (!FUNC_1(&VAR_1->host->starved_list))
  FUNC_3(VAR_1->host);

 FUNC_0(VAR_0, 0);
}
