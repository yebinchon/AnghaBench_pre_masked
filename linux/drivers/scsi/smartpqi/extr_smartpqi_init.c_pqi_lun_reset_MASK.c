
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iu_length; int iu_type; } ;
struct pqi_task_management_request {int task_management_function; int lun_number; int request_id; TYPE_1__ header; } ;
struct pqi_scsi_dev {int scsi3addr; } ;
struct pqi_io_request {int status; scalar_t__ index; struct pqi_task_management_request* iu; int * context; int io_complete_callback; } ;
struct pqi_ctrl_info {int * queue_groups; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct pqi_task_management_request*,int ,int) ;
 struct pqi_io_request* FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_io_request*) ;
 int VAR_5 ;
 int FUNC_5 (struct pqi_ctrl_info*,int *,int ,struct pqi_io_request*) ;
 int FUNC_6 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,int *) ;
 int FUNC_7 (scalar_t__,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct pqi_ctrl_info *VAR_7,
 struct pqi_scsi_dev *VAR_8)
{
 int VAR_9;
 struct pqi_io_request *VAR_10;
 FUNC_0(VAR_6);
 struct pqi_task_management_request *VAR_11;

 VAR_10 = FUNC_3(VAR_7);
 VAR_10->io_complete_callback = VAR_5;
 VAR_10->context = &VAR_6;

 VAR_11 = VAR_10->iu;
 FUNC_2(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->header.iu_type = VAR_2;
 FUNC_7(sizeof(*VAR_11) - VAR_1,
  &VAR_11->header.iu_length);
 FUNC_7(VAR_10->index, &VAR_11->request_id);
 FUNC_1(VAR_11->lun_number, VAR_8->scsi3addr,
  sizeof(VAR_11->lun_number));
 VAR_11->task_management_function = VAR_4;

 FUNC_5(VAR_7,
  &VAR_7->queue_groups[VAR_0], VAR_3,
  VAR_10);

 VAR_9 = FUNC_6(VAR_7, VAR_8, &VAR_6);
 if (VAR_9 == 0)
  VAR_9 = VAR_10->status;

 FUNC_4(VAR_10);

 return VAR_9;
}
