
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_fcs_lport_ms_s {TYPE_2__* port; } ;
struct TYPE_3__ {int ms_timeouts; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_lport_ms_s*,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct bfa_fcs_lport_ms_s *VAR_2 = (struct bfa_fcs_lport_ms_s *) VAR_1;

 VAR_2->port->stats.ms_timeouts++;
 FUNC_0(VAR_2, VAR_0);
}
