
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int QueueSkb; int SendSkbQueue; } ;
struct s_smc {TYPE_1__ os; } ;
struct net_device {int irq; } ;
typedef TYPE_1__ skfddi_priv ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct s_smc*) ;
 int FUNC_4 (struct s_smc*) ;
 struct s_smc* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct s_smc*,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct s_smc *VAR_2 = FUNC_5(VAR_1);
 skfddi_priv *VAR_3 = &VAR_2->os;

 FUNC_0();
 FUNC_8(VAR_2, 1);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 FUNC_6(VAR_1);

 FUNC_2(VAR_1->irq, VAR_1);

 FUNC_7(&VAR_3->SendSkbQueue);
 VAR_3->QueueSkb = VAR_0;

 return 0;
}
