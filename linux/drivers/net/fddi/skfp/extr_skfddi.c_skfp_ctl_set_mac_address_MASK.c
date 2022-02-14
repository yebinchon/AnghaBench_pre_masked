
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct TYPE_2__ {int DriverLock; } ;
struct s_smc {TYPE_1__ os; } ;
struct net_device {int dev_addr; } ;
typedef TYPE_1__ skfddi_priv ;


 int VAR_0 ;
 int FUNC_0 (struct s_smc*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct s_smc* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 struct s_smc *VAR_3 = FUNC_2(VAR_1);
 struct sockaddr *VAR_4 = (struct sockaddr *) VAR_2;
 skfddi_priv *VAR_5 = &VAR_3->os;
 unsigned long VAR_6;


 FUNC_1(VAR_1->dev_addr, VAR_4->sa_data, VAR_0);
 FUNC_3(&VAR_5->DriverLock, VAR_6);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_5->DriverLock, VAR_6);

 return 0;
}
