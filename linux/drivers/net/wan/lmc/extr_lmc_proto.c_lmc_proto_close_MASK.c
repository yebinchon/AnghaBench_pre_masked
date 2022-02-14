
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ if_type; int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(lmc_softc_t *VAR_1)
{
 FUNC_1(VAR_1->lmc_device, "lmc_proto_close in");

 if (VAR_1->if_type == VAR_0)
  FUNC_0(VAR_1->lmc_device);

 FUNC_1(VAR_1->lmc_device, "lmc_proto_close out");
}
