
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_12__ {int uval; int sval; int wval; } ;
struct TYPE_8__ {scalar_t__ check_nego; } ;
struct sym_tcb {TYPE_5__ head; int nego_cp; TYPE_1__ tgoal; } ;
struct sym_lcb {int curr_flags; int tags_since; int tags_si; scalar_t__* tags_sum; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct TYPE_13__ {void* size; int addr; } ;
struct TYPE_11__ {size_t sel_id; int sel_scntl4; int sel_sxfer; int sel_scntl3; } ;
struct TYPE_9__ {void* restart; void* start; } ;
struct TYPE_10__ {TYPE_2__ go; } ;
struct TYPE_14__ {TYPE_6__ smsg; TYPE_4__ select; TYPE_3__ head; } ;
struct sym_ccb {size_t target; int tag; int* scsi_smsg; int order; int ext_sg; scalar_t__ ext_ofs; scalar_t__ extra_bytes; scalar_t__ host_flags; scalar_t__ xerr_status; int ssss_status; scalar_t__ nego_status; int host_status; scalar_t__ host_xflags; TYPE_7__ phys; struct scsi_cmnd* cmd; } ;
struct scsi_device {int lun; } ;
struct scsi_cmnd {scalar_t__* cmnd; struct scsi_device* device; } ;


 int FUNC_0 (struct sym_ccb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct sym_lcb* FUNC_4 (struct sym_tcb*,int ) ;
 int FUNC_5 (struct sym_hcb*,struct sym_ccb*,int*) ;
 int FUNC_6 (struct scsi_cmnd*,char*) ;
 int FUNC_7 (struct sym_hcb*,struct scsi_cmnd*,struct sym_ccb*) ;
 int VAR_14 ;

int FUNC_8(struct sym_hcb *VAR_15, struct scsi_cmnd *VAR_16, struct sym_ccb *VAR_17)
{
 struct scsi_device *VAR_18 = VAR_16->device;
 struct sym_tcb *VAR_19;
 struct sym_lcb *VAR_20;
 u_char *VAR_21;
 u_int VAR_22;
 int VAR_23;




 VAR_17->cmd = VAR_16;




 VAR_19 = &VAR_15->target[VAR_17->target];




 VAR_20 = FUNC_4(VAR_19, VAR_18->lun);

 VAR_23 = (VAR_17->tag != VAR_6) ||
  (VAR_20 && (VAR_20->curr_flags & VAR_9));

 VAR_21 = VAR_17->scsi_smsg;
 VAR_22 = 0;
 VAR_21[VAR_22++] = FUNC_1(VAR_23, VAR_18->lun);




 if (VAR_17->tag != VAR_6) {
  u_char VAR_24 = VAR_17->order;

  switch(VAR_24) {
  case 128:
   break;
  case 129:
   break;
  default:
   VAR_24 = VAR_5;
  }
  VAR_21[VAR_22++] = VAR_24;
  VAR_21[VAR_22++] = (VAR_17->tag << 1) + 1;

 }
 VAR_17->nego_status = 0;
 if ((VAR_19->tgoal.check_nego ||
      VAR_16->cmnd[0] == VAR_4 || VAR_16->cmnd[0] == VAR_7) &&
     !VAR_19->nego_cp && VAR_20) {
  VAR_22 += FUNC_5(VAR_15, VAR_17, VAR_21 + VAR_22);
 }




 VAR_17->phys.head.go.start = FUNC_3(FUNC_2(VAR_15, VAR_13));
 VAR_17->phys.head.go.restart = FUNC_3(FUNC_2(VAR_15, VAR_11));




 VAR_17->phys.select.sel_id = VAR_17->target;
 VAR_17->phys.select.sel_scntl3 = VAR_19->head.wval;
 VAR_17->phys.select.sel_sxfer = VAR_19->head.sval;
 VAR_17->phys.select.sel_scntl4 = VAR_19->head.uval;




 VAR_17->phys.smsg.addr = FUNC_0(VAR_17, VAR_12);
 VAR_17->phys.smsg.size = FUNC_3(VAR_22);




 VAR_17->host_xflags = 0;
 VAR_17->host_status = VAR_17->nego_status ? VAR_3 : VAR_2;
 VAR_17->ssss_status = VAR_10;
 VAR_17->xerr_status = 0;
 VAR_17->host_flags = 0;
 VAR_17->extra_bytes = 0;





 VAR_17->ext_sg = -1;
 VAR_17->ext_ofs = 0;





 return FUNC_7(VAR_15, VAR_16, VAR_17);
}
