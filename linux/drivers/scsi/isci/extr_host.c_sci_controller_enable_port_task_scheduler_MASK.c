
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct isci_host {TYPE_3__* scu_registers; } ;
struct TYPE_4__ {int control; } ;
struct TYPE_5__ {TYPE_1__ ptsg; } ;
struct TYPE_6__ {TYPE_2__ peg0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct isci_host *VAR_2)
{
 u32 VAR_3;

 VAR_3 =
  FUNC_1(&VAR_2->scu_registers->peg0.ptsg.control);
 VAR_3 |=
  (FUNC_0(VAR_0) |
   FUNC_0(VAR_1));
 FUNC_2(VAR_3,
        &VAR_2->scu_registers->peg0.ptsg.control);
}
