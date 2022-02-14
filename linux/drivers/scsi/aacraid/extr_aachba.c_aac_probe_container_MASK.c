
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Status; } ;
struct TYPE_3__ {int * next; } ;
struct scsi_device {void (* scsi_done ) (struct scsi_device*) ;int id; TYPE_2__ SCp; struct scsi_device* device; int host; scalar_t__ sdev_state; TYPE_1__ list; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_device*) ;int id; TYPE_2__ SCp; struct scsi_cmnd* device; int host; scalar_t__ sdev_state; TYPE_1__ list; } ;
struct aac_dev {int scsi_host_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_device*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct scsi_device*) ;
 struct scsi_device* FUNC_2 (int,int ) ;
 int FUNC_3 () ;

int FUNC_4(struct aac_dev *VAR_3, int VAR_4)
{
 struct scsi_cmnd *VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 struct scsi_device *VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 int VAR_7;

 if (!VAR_5 || !VAR_6) {
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 VAR_5->list.next = ((void*)0);
 VAR_5->scsi_done = (void (*)(struct scsi_cmnd*))VAR_2;

 VAR_5->device = VAR_6;
 VAR_6->sdev_state = 0;
 VAR_6->id = VAR_4;
 VAR_6->host = VAR_3->scsi_host_ptr;

 if (FUNC_0(VAR_5, VAR_2) == 0)
  while (VAR_5->device == VAR_6)
   FUNC_3();
 FUNC_1(VAR_6);
 VAR_7 = VAR_5->SCp.Status;
 FUNC_1(VAR_5);
 return VAR_7;
}
