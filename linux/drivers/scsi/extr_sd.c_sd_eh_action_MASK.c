
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int ignore_medium_access_errors; scalar_t__ medium_access_timed_out; scalar_t__ max_medium_access_timeouts; } ;
struct scsi_device {int state_mutex; } ;
struct scsi_cmnd {int result; struct scsi_device* device; TYPE_1__* request; } ;
struct TYPE_2__ {int rq_disk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (struct scsi_device*,int ) ;
 struct scsi_disk* FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_4, int VAR_5)
{
 struct scsi_disk *VAR_6 = FUNC_6(VAR_4->request->rq_disk);
 struct scsi_device *VAR_7 = VAR_4->device;

 if (!FUNC_4(VAR_7) ||
     !FUNC_7(VAR_4) ||
     FUNC_0(VAR_4->result) != VAR_0 ||
     VAR_5 != VAR_3)
  return VAR_5;
 if (!VAR_6->ignore_medium_access_errors) {
  VAR_6->medium_access_timed_out++;
  VAR_6->ignore_medium_access_errors = 1;
 }






 if (VAR_6->medium_access_timed_out >= VAR_6->max_medium_access_timeouts) {
  FUNC_3(VAR_1, VAR_4,
       "Medium access timeout failure. Offlining disk!\n");
  FUNC_1(&VAR_7->state_mutex);
  FUNC_5(VAR_7, VAR_2);
  FUNC_2(&VAR_7->state_mutex);

  return VAR_3;
 }

 return VAR_5;
}
