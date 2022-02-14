
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int roles; } ;
struct fc_rport_priv {TYPE_1__ ids; } ;
struct fc_lport {int service_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_0(struct fc_lport *VAR_5, struct fc_rport_priv *VAR_6)
{
 if (VAR_6->ids.roles == VAR_4)
  return 1;
 if ((VAR_6->ids.roles & VAR_3) &&
     (VAR_5->service_params & VAR_0))
  return 1;
 if ((VAR_6->ids.roles & VAR_2) &&
     (VAR_5->service_params & VAR_1))
  return 1;
 return 0;
}
