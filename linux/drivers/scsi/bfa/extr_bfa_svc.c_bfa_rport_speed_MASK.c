
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct bfa_rport_s {TYPE_1__ rport_info; } ;
typedef enum bfa_port_speed { ____Placeholder_bfa_port_speed } bfa_port_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_rport_s*,int ) ;

void
FUNC_2(struct bfa_rport_s *VAR_2, enum bfa_port_speed VAR_3)
{
 FUNC_0(VAR_3 == 0);
 FUNC_0(VAR_3 == VAR_0);

 if (VAR_2) {
  VAR_2->rport_info.speed = VAR_3;
  FUNC_1(VAR_2, VAR_1);
 }
}
