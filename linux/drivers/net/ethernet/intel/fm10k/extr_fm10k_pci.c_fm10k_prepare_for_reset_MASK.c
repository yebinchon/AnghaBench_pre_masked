
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fm10k_intfc {scalar_t__ last_reset; int pdev; int state; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fm10k_intfc*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ) ;

__attribute__((used)) static bool FUNC_12(struct fm10k_intfc *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 FUNC_0(FUNC_6());


 FUNC_8(VAR_4);


 if (FUNC_11(VAR_1, VAR_3->state))
  return 0;





 FUNC_5(VAR_3);

 FUNC_9();

 FUNC_3(VAR_3->pdev);

 if (FUNC_7(VAR_4))
  FUNC_2(VAR_4);

 FUNC_4(VAR_3);


 FUNC_1(VAR_3);


 VAR_3->last_reset = VAR_2 + (10 * VAR_0);

 FUNC_10();

 return 1;
}
