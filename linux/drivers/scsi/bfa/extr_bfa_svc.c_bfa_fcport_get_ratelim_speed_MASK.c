
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_2__ {int trl_def_speed; } ;
struct bfa_fcport_s {TYPE_1__ cfg; } ;
typedef enum bfa_port_speed { ____Placeholder_bfa_port_speed } bfa_port_speed ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*,int) ;

enum bfa_port_speed
FUNC_2(struct bfa_s *VAR_0)
{
 struct bfa_fcport_s *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1->cfg.trl_def_speed);
 return VAR_1->cfg.trl_def_speed;

}
