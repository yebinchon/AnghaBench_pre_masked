
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct ftgmac100 {struct net_device* netdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netdev_queue*,int ) ;
 int FUNC_1 (struct netdev_queue*) ;
 scalar_t__ FUNC_2 (struct ftgmac100*) ;
 scalar_t__ FUNC_3 (struct ftgmac100*) ;
 scalar_t__ FUNC_4 (struct ftgmac100*) ;
 struct netdev_queue* FUNC_5 (struct net_device*,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ftgmac100 *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;


 while (FUNC_3(VAR_1) &&
        FUNC_4(VAR_1))
  ;


 FUNC_8();
 if (FUNC_10(FUNC_6(VAR_2) &&
       FUNC_2(VAR_1) >= VAR_0)) {
  struct netdev_queue *VAR_3;

  VAR_3 = FUNC_5(VAR_2, 0);
  FUNC_0(VAR_3, FUNC_9());
  if (FUNC_6(VAR_2) &&
      FUNC_2(VAR_1) >= VAR_0)
   FUNC_7(VAR_2);
  FUNC_1(VAR_3);
 }
}
