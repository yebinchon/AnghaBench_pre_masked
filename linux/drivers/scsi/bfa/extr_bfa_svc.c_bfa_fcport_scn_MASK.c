
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trunked; } ;
struct bfa_fcport_s {int ln; TYPE_1__ cfg; } ;
typedef enum bfa_port_linkstate { ____Placeholder_bfa_port_linkstate } bfa_port_linkstate ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcport_s *VAR_2, enum bfa_port_linkstate VAR_3,
 bfa_boolean_t VAR_4)
{
 if (VAR_2->cfg.trunked && !VAR_4)
  return;

 switch (VAR_3) {
 case 128:
  FUNC_1(&VAR_2->ln, VAR_1);
  break;
 case 129:
  FUNC_1(&VAR_2->ln, VAR_0);
  break;
 default:
  FUNC_0(1);
 }
}
