
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
struct fc_vport {scalar_t__ dd_data; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {int flags; TYPE_1__* im_port; } ;
struct bfad_vport_s {int list_entry; struct completion* comp_del; TYPE_2__ drv_port; int fcs_vport; } ;
struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfad_im_port_s {int flags; struct bfad_s* bfad; } ;
struct bfa_fcs_vport_s {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {struct Scsi_Host* shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct bfa_fcs_vport_s* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct bfad_s*,struct bfad_im_port_s*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct completion*) ;
 int FUNC_5 (struct bfad_vport_s*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct completion*) ;

__attribute__((used)) static int
FUNC_11(struct fc_vport *VAR_3)
{
 struct bfad_vport_s *VAR_4 = (struct bfad_vport_s *)VAR_3->dd_data;
 struct bfad_im_port_s *VAR_5 =
   (struct bfad_im_port_s *) VAR_4->drv_port.im_port;
 struct bfad_s *VAR_6 = VAR_5->bfad;
 struct bfa_fcs_vport_s *VAR_7;
 struct Scsi_Host *VAR_8;
 wwn_t VAR_9;
 int VAR_10;
 unsigned long VAR_11;
 struct completion VAR_12;

 if (VAR_5->flags & VAR_0) {
  FUNC_2(VAR_6, VAR_5);
  FUNC_6(&VAR_4->list_entry);
  FUNC_5(VAR_4);
  return 0;
 }

 VAR_8 = VAR_4->drv_port.im_port->shost;
 FUNC_9(FUNC_3(VAR_8), (u8 *)&VAR_9);

 FUNC_7(&VAR_6->bfad_lock, VAR_11);
 VAR_7 = FUNC_1(&VAR_6->bfa_fcs, 0, VAR_9);
 FUNC_8(&VAR_6->bfad_lock, VAR_11);

 if (VAR_7 == ((void*)0))
  return VAR_2;

 VAR_4->drv_port.flags |= VAR_0;

 VAR_4->comp_del = &VAR_12;
 FUNC_4(VAR_4->comp_del);

 FUNC_7(&VAR_6->bfad_lock, VAR_11);
 VAR_10 = FUNC_0(&VAR_4->fcs_vport);
 FUNC_8(&VAR_6->bfad_lock, VAR_11);

 if (VAR_10 == VAR_1) {
  VAR_4->drv_port.flags &= ~VAR_0;
  VAR_4->comp_del = ((void*)0);
  return -1;
 }

 FUNC_10(VAR_4->comp_del);

 FUNC_2(VAR_6, VAR_5);
 FUNC_6(&VAR_4->list_entry);
 FUNC_5(VAR_4);

 return 0;
}
