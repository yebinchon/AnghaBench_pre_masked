
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfad_itnim_s {int scsi_tgt_id; TYPE_2__* im_port; } ;
struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_itnim_s {struct bfad_itnim_s* itnim_drv; } ;
struct bfa_bsg_rport_scsi_addr_s {void* status; scalar_t__ lun; scalar_t__ bus; int target; int host; int rpwwn; int pwwn; int vf_id; } ;
struct TYPE_4__ {TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 struct bfa_fcs_itnim_s* FUNC_0 (struct bfa_fcs_lport_s*,int ) ;
 struct bfa_fcs_lport_s* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct bfad_s*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_5(struct bfad_s *VAR_3, void *VAR_4)
{
 struct bfa_bsg_rport_scsi_addr_s *VAR_5 =
   (struct bfa_bsg_rport_scsi_addr_s *)VAR_4;
 struct bfa_fcs_lport_s *VAR_6;
 struct bfa_fcs_itnim_s *VAR_7;
 struct bfad_itnim_s *VAR_8;
 unsigned long VAR_9;

 FUNC_3(&VAR_3->bfad_lock, VAR_9);
 VAR_6 = FUNC_1(&VAR_3->bfa_fcs,
    VAR_5->vf_id, VAR_5->pwwn);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_3, 0);
  FUNC_4(&VAR_3->bfad_lock, VAR_9);
  VAR_5->status = VAR_1;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_6, VAR_5->rpwwn);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_3, 0);
  FUNC_4(&VAR_3->bfad_lock, VAR_9);
  VAR_5->status = VAR_2;
  goto out;
 }

 VAR_8 = VAR_7->itnim_drv;

 if (VAR_8 && VAR_8->im_port)
  VAR_5->host = VAR_8->im_port->shost->host_no;
 else {
  FUNC_2(VAR_3, 0);
  FUNC_4(&VAR_3->bfad_lock, VAR_9);
  VAR_5->status = VAR_2;
  goto out;
 }

 VAR_5->target = VAR_8->scsi_tgt_id;
 FUNC_4(&VAR_3->bfad_lock, VAR_9);

 VAR_5->bus = 0;
 VAR_5->lun = 0;
 VAR_5->status = VAR_0;
out:
 return 0;
}
