
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
struct fc_vport {scalar_t__ dd_data; } ;
struct TYPE_4__ {TYPE_1__* im_port; struct bfad_s* bfad; } ;
struct bfad_vport_s {TYPE_2__ drv_port; } ;
struct bfad_s {int bfad_lock; int bfa_fcs; } ;
struct bfa_fcs_vport_s {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {struct Scsi_Host* shost; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcs_vport_s* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct bfa_fcs_vport_s*) ;
 int FUNC_2 (struct bfa_fcs_vport_s*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct fc_vport*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct fc_vport *VAR_3, bool VAR_4)
{
 struct bfad_vport_s *VAR_5;
 struct bfad_s *VAR_6;
 struct bfa_fcs_vport_s *VAR_7;
 struct Scsi_Host *VAR_8;
 wwn_t VAR_9;
 unsigned long VAR_10;

 VAR_5 = (struct bfad_vport_s *)VAR_3->dd_data;
 VAR_6 = VAR_5->drv_port.bfad;
 VAR_8 = VAR_5->drv_port.im_port->shost;
 FUNC_7(FUNC_3(VAR_8), (u8 *)&VAR_9);

 FUNC_5(&VAR_6->bfad_lock, VAR_10);
 VAR_7 = FUNC_0(&VAR_6->bfa_fcs, 0, VAR_9);
 FUNC_6(&VAR_6->bfad_lock, VAR_10);

 if (VAR_7 == ((void*)0))
  return VAR_2;

 if (VAR_4) {
  FUNC_2(VAR_7);
  FUNC_4(VAR_3, VAR_1);
 } else {
  FUNC_1(VAR_7);
  FUNC_4(VAR_3, VAR_0);
 }

 return 0;
}
