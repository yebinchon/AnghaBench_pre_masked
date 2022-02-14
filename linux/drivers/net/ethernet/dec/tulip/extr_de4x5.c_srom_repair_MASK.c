
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ dev_addr; } ;
struct de4x5_srom {int dummy; } ;
struct TYPE_2__ {int info; int ieee_addr; } ;
struct de4x5_private {int useSROM; TYPE_1__ srom; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2, int VAR_3)
{
    struct de4x5_private *VAR_4 = FUNC_2(VAR_2);

    switch(VAR_3) {
      case 128:
 FUNC_1((char *)&VAR_4->srom, 0, sizeof(struct de4x5_srom));
 FUNC_0(VAR_4->srom.ieee_addr, (char *)VAR_2->dev_addr, VAR_0);
 FUNC_0(VAR_4->srom.info, (char *)&VAR_1[128 -1], 100);
 VAR_4->useSROM = 1;
 break;
    }
}
