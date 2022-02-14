
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * fhead; scalar_t__ fmax; } ;
struct TYPE_3__ {scalar_t__ fmax; int * fhead; } ;
struct qlcnic_adapter {TYPE_2__ rx_fhash; TYPE_1__ fhash; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 if (VAR_0->fhash.fmax)
  FUNC_0(VAR_0->fhash.fhead);

 VAR_0->fhash.fhead = ((void*)0);
 VAR_0->fhash.fmax = 0;

 if (VAR_0->rx_fhash.fmax)
  FUNC_0(VAR_0->rx_fhash.fhead);

 VAR_0->rx_fhash.fmax = 0;
 VAR_0->rx_fhash.fhead = ((void*)0);
}
