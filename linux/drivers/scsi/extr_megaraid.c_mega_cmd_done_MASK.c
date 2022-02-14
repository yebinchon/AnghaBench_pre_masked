
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int result; size_t channel; scalar_t__* cmnd; int* sense_buffer; TYPE_1__* device; } ;
struct scatterlist {int dummy; } ;
struct TYPE_16__ {int state; scalar_t__ raw_mbox; TYPE_6__* epthru; TYPE_5__* pthru; struct scsi_cmnd* cmd; int idx; int list; } ;
typedef TYPE_4__ scb_t ;
struct TYPE_17__ {int reqsensearea; } ;
typedef TYPE_5__ mega_passthru ;
struct TYPE_18__ {int reqsensearea; } ;
typedef TYPE_6__ mega_ext_passthru ;
struct TYPE_15__ {int logdrv; int cmd; } ;
struct TYPE_19__ {TYPE_3__ m_out; } ;
typedef TYPE_7__ mbox_t ;
struct TYPE_20__ {int int_status; int* logdrv_chan; int completed_list; TYPE_2__* dev; int * wr_errors; int * rd_errors; TYPE_4__* scb_list; int int_waitq; TYPE_4__ int_scb; } ;
typedef TYPE_8__ adapter_t ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {size_t channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_8__*,size_t) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,int,struct scsi_cmnd*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_8__*,TYPE_4__*) ;
 int FUNC_8 (int*,int ,int) ;
 struct scatterlist* FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (struct scatterlist*) ;
 scalar_t__ FUNC_11 (struct scatterlist*) ;

__attribute__((used)) static void
FUNC_12(adapter_t *VAR_29, u8 VAR_30[], int VAR_31, int VAR_32)
{
 mega_ext_passthru *VAR_33 = ((void*)0);
 struct scatterlist *VAR_34;
 struct scsi_cmnd *VAR_35 = ((void*)0);
 mega_passthru *VAR_36 = ((void*)0);
 mbox_t *VAR_37 = ((void*)0);
 u8 VAR_38;
 scb_t *VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42;





 for( VAR_42 = 0; VAR_42 < VAR_31; VAR_42++ ) {

  VAR_41 = VAR_30[VAR_42];
  if (VAR_41 == VAR_2) {
   VAR_39 = &VAR_29->int_scb;

   FUNC_6(&VAR_39->list);
   VAR_39->state = VAR_21;

   VAR_29->int_status = VAR_32;
   FUNC_2(&VAR_29->int_waitq);
  } else {
   VAR_39 = &VAR_29->scb_list[VAR_41];




   if( !(VAR_39->state & VAR_22) || VAR_39->cmd == ((void*)0) ) {
    FUNC_3(&VAR_29->dev->dev, "invalid command "
     "Id %d, scb->state:%x, scsi cmd:%p\n",
     VAR_41, VAR_39->state, VAR_39->cmd);

    continue;
   }




   if( VAR_39->state & VAR_20 ) {

    FUNC_4(&VAR_29->dev->dev,
     "aborted cmd [%x] complete\n",
     VAR_39->idx);

    VAR_39->cmd->result = (VAR_3 << 16);

    FUNC_5(FUNC_1(VAR_39->cmd),
      &VAR_29->completed_list);

    FUNC_7(VAR_29, VAR_39);

    continue;
   }




   if( VAR_39->state & VAR_23 ) {

    FUNC_4(&VAR_29->dev->dev,
     "reset cmd [%x] complete\n",
     VAR_39->idx);

    VAR_39->cmd->result = (VAR_8 << 16);

    FUNC_5(FUNC_1(VAR_39->cmd),
      &VAR_29->completed_list);

    FUNC_7 (VAR_29, VAR_39);

    continue;
   }

   VAR_35 = VAR_39->cmd;
   VAR_36 = VAR_39->pthru;
   VAR_33 = VAR_39->epthru;
   VAR_37 = (mbox_t *)VAR_39->raw_mbox;
  }







  VAR_40 = VAR_29->logdrv_chan[VAR_35->device->channel];
  if( VAR_35->cmnd[0] == VAR_10 && !VAR_40 ) {

   VAR_34 = FUNC_9(VAR_35);
   if( FUNC_10(VAR_34) ) {
    VAR_38 = *(unsigned char *) FUNC_11(&VAR_34[0]);
   } else {
    FUNC_4(&VAR_29->dev->dev, "invalid sg\n");
    VAR_38 = 0;
   }

   if(FUNC_0(VAR_29, VAR_35->device->channel) &&
     ((VAR_38 & 0x1F ) == VAR_25)) {
    VAR_32 = 0xF0;
   }
  }


  VAR_35->result = 0;


  switch (VAR_32) {
  case 0x00:
   VAR_35->result |= (VAR_7 << 16);
   break;

  case 0x02:



   if( VAR_37->m_out.cmd == VAR_12 ||
    VAR_37->m_out.cmd == VAR_13 ) {

    FUNC_8(VAR_35->sense_buffer, VAR_36->reqsensearea,
      14);

    VAR_35->result = (VAR_9 << 24) |
     (VAR_7 << 16) |
     (VAR_1 << 1);
   }
   else {
    if (VAR_37->m_out.cmd == VAR_11) {

     FUNC_8(VAR_35->sense_buffer,
      VAR_33->reqsensearea, 14);

     VAR_35->result = (VAR_9 << 24) |
      (VAR_7 << 16) |
      (VAR_1 << 1);
    } else {
     VAR_35->sense_buffer[0] = 0x70;
     VAR_35->sense_buffer[2] = VAR_0;
     VAR_35->result |= (VAR_1 << 1);
    }
   }
   break;

  case 0x08:

   VAR_35->result |= (VAR_5 << 16) | VAR_32;
   break;

  default:
    VAR_35->result |= (VAR_4 << 16)|VAR_32;
  }

  FUNC_7(VAR_29, VAR_39);


  FUNC_5(FUNC_1(VAR_35), &VAR_29->completed_list);
 }
}
