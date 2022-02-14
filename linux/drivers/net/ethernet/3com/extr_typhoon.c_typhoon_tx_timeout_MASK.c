
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typhoon {int ioaddr; TYPE_1__* indexes; int txLoRing; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int txLoCleared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct typhoon* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct typhoon*,int *,int *) ;
 int FUNC_6 (struct typhoon*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct typhoon*) ;

__attribute__((used)) static void
FUNC_9(struct net_device *VAR_2)
{
 struct typhoon *VAR_3 = FUNC_1(VAR_2);

 if(FUNC_7(VAR_3->ioaddr, VAR_1) < 0) {
  FUNC_2(VAR_2, "could not reset in tx timeout\n");
  goto truly_dead;
 }


 FUNC_5(VAR_3, &VAR_3->txLoRing, &VAR_3->indexes->txLoCleared);
 FUNC_6(VAR_3);

 if(FUNC_8(VAR_3) < 0) {
  FUNC_0(VAR_2, "could not start runtime in tx timeout\n");
  goto truly_dead;
        }

 FUNC_4(VAR_2);
 return;

truly_dead:

 FUNC_7(VAR_3->ioaddr, VAR_0);
 FUNC_3(VAR_2);
}
