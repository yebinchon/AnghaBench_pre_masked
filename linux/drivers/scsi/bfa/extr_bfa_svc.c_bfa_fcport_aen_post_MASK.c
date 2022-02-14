
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bfad_s {int dummy; } ;
struct bfa_fcport_s {TYPE_3__* bfa; int pwwn; } ;
struct TYPE_5__ {int pwwn; int ioc_type; } ;
struct TYPE_4__ {TYPE_2__ port; } ;
struct bfa_aen_entry_s {TYPE_1__ aen_data; } ;
typedef enum bfa_port_aen_event { ____Placeholder_bfa_port_aen_event } bfa_port_aen_event ;
struct TYPE_6__ {int bfa_aen_seq; scalar_t__ bfad; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct bfad_s*,struct bfa_aen_entry_s*) ;
 int FUNC_2 (struct bfa_aen_entry_s*,struct bfad_s*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_fcport_s *VAR_1, enum bfa_port_aen_event VAR_2)
{
 struct bfad_s *VAR_3 = (struct bfad_s *)VAR_1->bfa->bfad;
 struct bfa_aen_entry_s *VAR_4;

 FUNC_1(VAR_3, VAR_4);
 if (!VAR_4)
  return;

 VAR_4->aen_data.port.ioc_type = FUNC_0(VAR_1->bfa);
 VAR_4->aen_data.port.pwwn = VAR_1->pwwn;


 FUNC_2(VAR_4, VAR_3, ++VAR_1->bfa->bfa_aen_seq,
      VAR_0, VAR_2);
}
