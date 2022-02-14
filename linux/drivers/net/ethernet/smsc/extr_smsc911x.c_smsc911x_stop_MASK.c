
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsc911x_data {int napi; } ;
struct TYPE_2__ {unsigned int rx_dropped; } ;
struct net_device {int * phydev; int irq; TYPE_1__ stats; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct smsc911x_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct smsc911x_data*,int ) ;
 int FUNC_9 (struct smsc911x_data*,int ,unsigned int) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct smsc911x_data *VAR_5 = FUNC_3(VAR_4);
 unsigned int VAR_6;


 VAR_6 = FUNC_8(VAR_5, VAR_0);
 VAR_6 &= ~VAR_1;
 FUNC_9(VAR_5, VAR_0, VAR_6);


 FUNC_5(VAR_4);
 FUNC_2(&VAR_5->napi);


 VAR_4->stats.rx_dropped += FUNC_8(VAR_5, VAR_2);
 FUNC_10(VAR_4);

 FUNC_1(VAR_4->irq, VAR_4);


 if (VAR_4->phydev) {
  FUNC_7(VAR_4->phydev);
  FUNC_6(VAR_4->phydev);
  VAR_4->phydev = ((void*)0);
 }
 FUNC_4(VAR_4);

 FUNC_0(VAR_5, VAR_3, "Interface stopped");
 return 0;
}
