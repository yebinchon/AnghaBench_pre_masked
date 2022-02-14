
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct req_que {int num_outstanding_cmds; TYPE_3__** outstanding_cmds; } ;
struct qla_hw_data {int hardware_lock; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__* vha; } ;
typedef TYPE_3__ srb_t ;
struct TYPE_10__ {scalar_t__ vp_idx; struct req_que* req; struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
typedef enum nexus_wait_type { ____Placeholder_nexus_wait_type } nexus_wait_type ;
struct TYPE_8__ {unsigned int id; int lun; } ;
struct TYPE_7__ {scalar_t__ vp_idx; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(scsi_qla_host_t *VAR_2, unsigned int VAR_3,
 uint64_t VAR_4, enum nexus_wait_type VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 struct qla_hw_data *VAR_10 = VAR_2->hw;
 struct req_que *VAR_11;
 srb_t *VAR_12;
 struct scsi_cmnd *VAR_13;

 VAR_8 = VAR_0;

 FUNC_2(&VAR_10->hardware_lock, VAR_9);
 VAR_11 = VAR_2->req;
 for (VAR_6 = 1; VAR_8 == VAR_0 &&
  VAR_6 < VAR_11->num_outstanding_cmds; VAR_6++) {
  VAR_12 = VAR_11->outstanding_cmds[VAR_6];
  if (!VAR_12)
   continue;
  if (VAR_12->type != VAR_1)
   continue;
  if (VAR_2->vp_idx != VAR_12->vha->vp_idx)
   continue;
  VAR_7 = 0;
  VAR_13 = FUNC_0(VAR_12);
  switch (VAR_5) {
  case 130:
   VAR_7 = 1;
   break;
  case 128:
   VAR_7 = VAR_13->device->id == VAR_3;
   break;
  case 129:
   VAR_7 = (VAR_13->device->id == VAR_3 &&
    VAR_13->device->lun == VAR_4);
   break;
  }
  if (!VAR_7)
   continue;

  FUNC_3(&VAR_10->hardware_lock, VAR_9);
  VAR_8 = FUNC_1(VAR_13);
  FUNC_2(&VAR_10->hardware_lock, VAR_9);
 }
 FUNC_3(&VAR_10->hardware_lock, VAR_9);

 return VAR_8;
}
