
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfad_port_s {int dummy; } ;
struct bfa_fcs_itnim_s {TYPE_2__* rport; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct bfad_port_s* bfad_port; } ;



__attribute__((used)) static inline struct bfad_port_s *
FUNC_0(struct bfa_fcs_itnim_s *VAR_0)
{
 return VAR_0->rport->port->bfad_port;
}
