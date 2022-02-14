
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * a; } ;
struct TYPE_4__ {TYPE_1__ fddi_phys_addr; } ;
struct s_smc {TYPE_2__ hw; } ;
struct fddi_addr {int * a; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct s_smc *VAR_0, struct fddi_addr *VAR_1)
{
 int VAR_2 ;

 for (VAR_2 = 0 ; VAR_2 < 6 ; VAR_2++)
  VAR_1->a[VAR_2] = FUNC_0(VAR_0->hw.fddi_phys_addr.a[VAR_2]);
}
