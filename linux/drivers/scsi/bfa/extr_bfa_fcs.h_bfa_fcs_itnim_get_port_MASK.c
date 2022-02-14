
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_lport_s {int dummy; } ;
struct bfa_fcs_itnim_s {TYPE_1__* rport; } ;
struct TYPE_2__ {struct bfa_fcs_lport_s* port; } ;



__attribute__((used)) static inline struct bfa_fcs_lport_s *
FUNC_0(struct bfa_fcs_itnim_s *VAR_0)
{
 return VAR_0->rport->port;
}
