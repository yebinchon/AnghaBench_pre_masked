
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int watchdog_timeo; int addr_assign_type; } ;
struct ltq_etop_priv {TYPE_1__* pldata; } ;
struct TYPE_2__ {int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,struct sockaddr*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sockaddr*,int *,int) ;
 struct ltq_etop_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_2)
{
 struct ltq_etop_priv *VAR_3 = FUNC_10(VAR_2);
 struct sockaddr VAR_4;
 int VAR_5;
 bool VAR_6 = 0;

 VAR_2->watchdog_timeo = 10 * VAR_0;
 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5)
  goto err_hw;
 FUNC_3(VAR_2, 1500);

 FUNC_9(&VAR_4, &VAR_3->pldata->mac, sizeof(struct sockaddr));
 if (!FUNC_2(VAR_4.sa_data)) {
  FUNC_11("etop: invalid MAC, using random\n");
  FUNC_0(VAR_4.sa_data);
  VAR_6 = 1;
 }

 VAR_5 = FUNC_7(VAR_2, &VAR_4);
 if (VAR_5)
  goto err_netdev;


 if (VAR_6)
  VAR_2->addr_assign_type = VAR_1;

 FUNC_8(VAR_2);
 VAR_5 = FUNC_6(VAR_2);
 if (VAR_5)
  goto err_netdev;
 return 0;

err_netdev:
 FUNC_12(VAR_2);
 FUNC_1(VAR_2);
err_hw:
 FUNC_4(VAR_2);
 return VAR_5;
}
