
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isci_host {TYPE_3__* scu_registers; } ;
struct TYPE_4__ {int output_data_select; } ;
struct TYPE_5__ {TYPE_1__ sgpio; } ;
struct TYPE_6__ {TYPE_2__ peg0; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct isci_host *VAR_0)
{
 return FUNC_0(VAR_0->scu_registers->peg0.sgpio.output_data_select);
}
