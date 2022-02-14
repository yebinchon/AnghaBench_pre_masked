
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct brcmf_pub {TYPE_1__** iflist; } ;
struct brcmf_bus {int state; struct brcmf_pub* drvr; } ;
typedef enum brcmf_bus_state { ____Placeholder_brcmf_bus_state } brcmf_bus_state ;
struct TYPE_2__ {struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

void FUNC_3(struct brcmf_bus *VAR_4, enum brcmf_bus_state VAR_5)
{
 struct brcmf_pub *VAR_6 = VAR_4->drvr;
 struct net_device *VAR_7;
 int VAR_8;

 FUNC_0(VAR_3, "%d -> %d\n", VAR_4->state, VAR_5);

 if (!VAR_6) {
  FUNC_0(VAR_2, "ignoring transition, bus not attached yet\n");
  return;
 }

 VAR_4->state = VAR_5;

 if (VAR_5 == VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   if ((VAR_6->iflist[VAR_8]) &&
       (VAR_6->iflist[VAR_8]->ndev)) {
    VAR_7 = VAR_6->iflist[VAR_8]->ndev;
    if (FUNC_1(VAR_7))
     FUNC_2(VAR_7);
   }
  }
 }
}
