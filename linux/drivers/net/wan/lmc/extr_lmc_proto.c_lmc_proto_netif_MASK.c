
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int if_type; int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sk_buff*) ;

void FUNC_2(lmc_softc_t *VAR_0, struct sk_buff *VAR_1)
{
    FUNC_0(VAR_0->lmc_device, "lmc_proto_netif in");
    switch(VAR_0->if_type){
    case 129:
    case 130:
    default:
        FUNC_1(VAR_1);
        break;
    case 128:
        break;
    }
    FUNC_0(VAR_0->lmc_device, "lmc_proto_netif out");
}
