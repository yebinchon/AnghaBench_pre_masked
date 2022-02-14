
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
struct fc_vport {char* symbolic_name; scalar_t__ dd_data; } ;
struct TYPE_4__ {TYPE_1__* im_port; } ;
struct bfad_vport_s {TYPE_2__ drv_port; } ;
struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct bfa_fcs_vport_s {int lport; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {struct Scsi_Host* shost; } ;


 int FUNC_0 (int *,char*) ;
 struct bfa_fcs_vport_s* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;

void
FUNC_7(struct fc_vport *VAR_0)
{
 struct bfad_vport_s *VAR_1 = (struct bfad_vport_s *)VAR_0->dd_data;
 struct bfad_im_port_s *VAR_2 =
   (struct bfad_im_port_s *)VAR_1->drv_port.im_port;
 struct bfad_s *VAR_3 = VAR_2->bfad;
 struct Scsi_Host *VAR_4 = VAR_1->drv_port.im_port->shost;
 char *VAR_5 = VAR_0->symbolic_name;
 struct bfa_fcs_vport_s *VAR_6;
 wwn_t VAR_7;
 unsigned long VAR_8;

 FUNC_6(FUNC_2(VAR_4), (u8 *)&VAR_7);

 FUNC_3(&VAR_3->bfad_lock, VAR_8);
 VAR_6 = FUNC_1(&VAR_3->bfa_fcs, 0, VAR_7);
 FUNC_4(&VAR_3->bfad_lock, VAR_8);

 if (VAR_6 == ((void*)0))
  return;

 FUNC_3(&VAR_3->bfad_lock, VAR_8);
 if (FUNC_5(VAR_5) > 0)
  FUNC_0(&VAR_6->lport, VAR_5);
 FUNC_4(&VAR_3->bfad_lock, VAR_8);
}
