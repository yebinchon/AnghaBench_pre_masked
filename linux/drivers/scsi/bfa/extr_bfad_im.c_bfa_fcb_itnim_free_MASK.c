
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u32 ;
struct bfad_s {int dummy; } ;
struct bfad_port_s {TYPE_2__* im_port; } ;
struct bfad_itnim_s {scalar_t__ state; int queue_work; int itnim_work; int fcs_itnim; TYPE_2__* im_port; struct bfad_im_s* im; } ;
struct bfad_im_s {int drv_workq; } ;
struct TYPE_4__ {TYPE_1__* shost; } ;
struct TYPE_3__ {int host_no; } ;


 int FUNC_0 (int ,struct bfad_s*,int ,char*,int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct bfad_port_s* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char*,int ) ;

void
FUNC_8(struct bfad_s *VAR_5, struct bfad_itnim_s *VAR_6)
{
 struct bfad_port_s *VAR_7;
 wwn_t VAR_8;
 u32 VAR_9;
 char VAR_10[32], VAR_11[16];
 struct bfad_im_s *VAR_12 = VAR_6->im;


 FUNC_1(VAR_6->state == VAR_2);

 VAR_6->queue_work = 1;

 if (VAR_6->state == VAR_1)
  VAR_6->queue_work = 0;

 VAR_6->state = VAR_0;
 VAR_7 = FUNC_2(&VAR_6->fcs_itnim);
 VAR_6->im_port = VAR_7->im_port;
 VAR_8 = FUNC_4(&VAR_6->fcs_itnim);
 VAR_9 = FUNC_3(&VAR_6->fcs_itnim);
 FUNC_7(VAR_10, VAR_8);
 FUNC_5(VAR_11, VAR_9);
 FUNC_0(VAR_3, VAR_5, VAR_4,
  "ITNIM FREE scsi%d: FCID: %s WWPN: %s\n",
  VAR_7->im_port->shost->host_no,
  VAR_11, VAR_10);


 if (VAR_6->queue_work)
  FUNC_6(VAR_12->drv_workq, &VAR_6->itnim_work);
}
