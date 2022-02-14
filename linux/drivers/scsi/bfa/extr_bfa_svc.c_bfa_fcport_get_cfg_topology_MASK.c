
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_2__ {int topology; } ;
struct bfa_fcport_s {TYPE_1__ cfg; } ;
typedef enum bfa_port_topology { ____Placeholder_bfa_port_topology } bfa_port_topology ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;

enum bfa_port_topology
FUNC_1(struct bfa_s *VAR_0)
{
 struct bfa_fcport_s *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->cfg.topology;
}
