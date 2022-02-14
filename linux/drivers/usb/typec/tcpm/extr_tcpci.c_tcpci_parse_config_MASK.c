
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fwnode; } ;
struct tcpci {int controls_vbus; int dev; TYPE_1__ tcpc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct tcpci *VAR_1)
{
 VAR_1->controls_vbus = 1;

 VAR_1->tcpc.fwnode = FUNC_1(VAR_1->dev,
        "connector");
 if (!VAR_1->tcpc.fwnode) {
  FUNC_0(VAR_1->dev, "Can't find connector node.\n");
  return -VAR_0;
 }

 return 0;
}
