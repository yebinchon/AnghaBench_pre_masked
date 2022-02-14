
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcs_lport_s {TYPE_1__* fcs; TYPE_3__* fabric; } ;
struct TYPE_9__ {int fwwn; int pwwn; } ;
struct TYPE_10__ {TYPE_4__ port; } ;
struct bfa_aen_entry_s {TYPE_5__ aen_data; } ;
typedef enum bfa_port_aen_event { ____Placeholder_bfa_port_aen_event } bfa_port_aen_event ;
struct TYPE_8__ {TYPE_2__* fcs; } ;
struct TYPE_7__ {scalar_t__ bfad; } ;
struct TYPE_6__ {int fcs_aen_seq; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_3 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_fcs_lport_s *VAR_1,
   enum bfa_port_aen_event VAR_2)
{
 struct bfad_s *VAR_3 = (struct bfad_s *)VAR_1->fabric->fcs->bfad;
 struct bfa_aen_entry_s *VAR_4;

 FUNC_2(VAR_3, VAR_4);
 if (!VAR_4)
  return;

 VAR_4->aen_data.port.pwwn = FUNC_1(VAR_1);
 VAR_4->aen_data.port.fwwn = FUNC_0(VAR_1);


 FUNC_3(VAR_4, VAR_3, ++VAR_1->fcs->fcs_aen_seq,
      VAR_0, VAR_2);
}
