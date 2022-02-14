
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef void* uint32_t ;
typedef void* uint16_t ;
struct TYPE_19__ {int data; void* lun; void* flags; int comp; } ;
struct TYPE_20__ {TYPE_4__ tmf; } ;
struct srb_iocb {TYPE_5__ u; int timeout; } ;
struct scsi_qla_host {TYPE_14__* hw; int dpc_flags; } ;
struct TYPE_16__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_21__ {char* name; int (* free ) (TYPE_6__*) ;int handle; int done; int type; TYPE_1__ u; } ;
typedef TYPE_6__ srb_t ;
struct TYPE_17__ {int al_pa; int area; int domain; } ;
struct TYPE_18__ {TYPE_2__ b; } ;
struct TYPE_22__ {int flags; int loop_id; TYPE_3__ d_id; struct scsi_qla_host* vha; } ;
typedef TYPE_7__ fc_port_t ;
struct TYPE_15__ {int base_qpair; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_14__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int ,int ,int ,int ,int ) ;
 int VAR_9 ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_10 ;
 int FUNC_4 (struct scsi_qla_host*) ;
 TYPE_6__* FUNC_5 (struct scsi_qla_host*,TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (struct scsi_qla_host*,int ,int ,void*,int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

int
FUNC_12(fc_port_t *VAR_13, uint32_t VAR_14, uint32_t VAR_15,
 uint32_t VAR_16)
{
 struct scsi_qla_host *VAR_17 = VAR_13->vha;
 struct srb_iocb *VAR_18;
 srb_t *VAR_19;
 int VAR_20 = VAR_4;

 VAR_19 = FUNC_5(VAR_17, VAR_13, VAR_1);
 if (!VAR_19)
  goto done;

 VAR_18 = &VAR_19->u.iocb_cmd;
 VAR_19->type = VAR_6;
 VAR_19->name = "tmf";

 VAR_18->timeout = VAR_11;
 FUNC_1(&VAR_18->u.tmf.comp);
 FUNC_6(VAR_19, FUNC_4(VAR_17));

 VAR_18->u.tmf.flags = VAR_14;
 VAR_18->u.tmf.lun = VAR_15;
 VAR_18->u.tmf.data = VAR_16;
 VAR_19->done = VAR_12;

 FUNC_2(VAR_9, VAR_17, 0x802f,
     "Async-tmf hdl=%x loop-id=%x portid=%02x%02x%02x.\n",
     VAR_19->handle, VAR_13->loop_id, VAR_13->d_id.b.domain,
     VAR_13->d_id.b.area, VAR_13->d_id.b.al_pa);

 VAR_20 = FUNC_8(VAR_19);
 if (VAR_20 != VAR_5)
  goto done_free_sp;
 FUNC_11(&VAR_18->u.tmf.comp);

 VAR_20 = VAR_18->u.tmf.data;

 if (VAR_20 != VAR_5) {
  FUNC_3(VAR_10, VAR_17, 0x8030,
      "TM IOCB failed (%x).\n", VAR_20);
 }

 if (!FUNC_10(VAR_8, &VAR_17->dpc_flags) && !FUNC_0(VAR_17->hw)) {
  VAR_14 = VAR_18->u.tmf.flags;
  VAR_15 = (uint16_t)VAR_18->u.tmf.lun;


  FUNC_7(VAR_17, VAR_17->hw->base_qpair,
      VAR_13->loop_id, VAR_15,
      VAR_14 == VAR_7 ? VAR_3 : VAR_2);
 }

done_free_sp:
 VAR_19->free(VAR_19);
 VAR_13->flags &= ~VAR_0;
done:
 return VAR_20;
}
