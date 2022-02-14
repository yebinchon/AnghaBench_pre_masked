
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ exch_mgr_reset; } ;
struct fc_lport {TYPE_1__ tt; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct fc_lport *VAR_1)
{
 if (!VAR_1->tt.exch_mgr_reset)
  VAR_1->tt.exch_mgr_reset = VAR_0;

 return 0;
}
