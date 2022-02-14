
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


struct bfad_s {int dummy; } ;
struct TYPE_10__ {int qos; } ;
struct bfa_rport_aen_data_s {TYPE_3__ priv; } ;
struct bfa_fcs_rport_s {TYPE_7__* fcs; int pwwn; struct bfa_fcs_lport_s* port; } ;
struct bfa_fcs_lport_s {TYPE_4__* fabric; TYPE_1__* fcs; } ;
struct TYPE_9__ {int qos; } ;
struct TYPE_12__ {int rpwwn; void* lpwwn; void* ppwwn; int vf_id; TYPE_2__ priv; } ;
struct TYPE_13__ {TYPE_5__ rport; } ;
struct bfa_aen_entry_s {TYPE_6__ aen_data; } ;
typedef enum bfa_rport_aen_event { ____Placeholder_bfa_rport_aen_event } bfa_rport_aen_event ;
struct TYPE_14__ {int fcs_aen_seq; } ;
struct TYPE_11__ {int vf_id; } ;
struct TYPE_8__ {scalar_t__ bfad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bfa_fcs_lport_s* FUNC_0 (TYPE_7__*) ;
 void* FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_3 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_rport_s *VAR_3,
   enum bfa_rport_aen_event VAR_4,
   struct bfa_rport_aen_data_s *VAR_5)
{
 struct bfa_fcs_lport_s *VAR_6 = VAR_3->port;
 struct bfad_s *VAR_7 = (struct bfad_s *)VAR_6->fcs->bfad;
 struct bfa_aen_entry_s *VAR_8;

 FUNC_2(VAR_7, VAR_8);
 if (!VAR_8)
  return;

 if (VAR_4 == VAR_2)
  VAR_8->aen_data.rport.priv.qos = VAR_5->priv.qos;
 else if (VAR_4 == VAR_1)
  VAR_8->aen_data.rport.priv.qos = VAR_5->priv.qos;

 VAR_8->aen_data.rport.vf_id = VAR_3->port->fabric->vf_id;
 VAR_8->aen_data.rport.ppwwn = FUNC_1(
     FUNC_0(VAR_3->fcs));
 VAR_8->aen_data.rport.lpwwn = FUNC_1(VAR_3->port);
 VAR_8->aen_data.rport.rpwwn = VAR_3->pwwn;


 FUNC_3(VAR_8, VAR_7, ++VAR_3->fcs->fcs_aen_seq,
      VAR_0, VAR_4);
}
