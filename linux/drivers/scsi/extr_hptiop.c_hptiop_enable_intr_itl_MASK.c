
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* iop; } ;
struct TYPE_6__ {TYPE_2__ itl; } ;
struct hptiop_hba {TYPE_3__ u; } ;
struct TYPE_4__ {int outbound_intmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct hptiop_hba *VAR_2)
{
 FUNC_0(~(VAR_1 | VAR_0),
  &VAR_2->u.itl.iop->outbound_intmask);
}
