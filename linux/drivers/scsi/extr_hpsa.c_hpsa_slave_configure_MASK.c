
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int no_uld_attach; TYPE_1__* host; int request_queue; int eh_timeout; struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int queue_depth; scalar_t__ external; scalar_t__ was_removed; int expose_device; } ;
struct TYPE_2__ {int can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct scsi_device*,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_2)
{
 struct hpsa_scsi_dev_t *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->hostdata;
 VAR_2->no_uld_attach = !VAR_3 || !VAR_3->expose_device;

 if (VAR_3) {
  VAR_3->was_removed = 0;
  if (VAR_3->external) {
   VAR_4 = VAR_0;
   VAR_2->eh_timeout = VAR_1;
   FUNC_0(VAR_2->request_queue,
      VAR_1);
  } else {
   VAR_4 = VAR_3->queue_depth != 0 ?
     VAR_3->queue_depth : VAR_2->host->can_queue;
  }
 } else
  VAR_4 = VAR_2->host->can_queue;

 FUNC_1(VAR_2, VAR_4);

 return 0;
}
