
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; TYPE_2__* device; } ;
struct TYPE_9__ {int * state; struct scsi_cmnd** srb; int flags; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
struct TYPE_7__ {scalar_t__ hostdata; } ;
typedef TYPE_3__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int*) ;
 int FUNC_3 (TYPE_3__*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_4, void (*VAR_5)(struct scsi_cmnd *))
{
 int VAR_6, VAR_7;
 TW_Device_Extension *VAR_8 = (TW_Device_Extension *)VAR_4->device->host->hostdata;


 if (FUNC_0(VAR_2, &VAR_8->flags)) {
  VAR_7 = VAR_1;
  goto out;
 }


 VAR_4->scsi_done = VAR_5;


 FUNC_2(VAR_8, &VAR_6);


 VAR_8->srb[VAR_6] = VAR_4;

 VAR_7 = FUNC_3(VAR_8, VAR_6, ((void*)0), 0, ((void*)0));
 if (VAR_7) {
  VAR_8->state[VAR_6] = VAR_3;
  FUNC_1(VAR_8, VAR_6);
  VAR_4->result = (VAR_0 << 16);
  VAR_5(VAR_4);
  VAR_7 = 0;
 }
out:
 return VAR_7;
}
