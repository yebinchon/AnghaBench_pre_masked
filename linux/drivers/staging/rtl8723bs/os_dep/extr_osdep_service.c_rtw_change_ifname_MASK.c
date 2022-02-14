
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rereg_nd_name_data {struct net_device* old_pnetdev; } ;
struct net_device {int dev_addr; } ;
struct TYPE_2__ {int mac_addr; } ;
struct adapter {TYPE_1__ eeprompriv; struct rereg_nd_name_data rereg_nd_name_priv; struct net_device* pnetdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 () ;
 struct net_device* FUNC_9 (struct adapter*) ;
 int FUNC_10 (struct net_device*,char const*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;

int FUNC_13(struct adapter *VAR_3, const char *VAR_4)
{
 struct net_device *VAR_5;
 struct net_device *VAR_6;
 struct rereg_nd_name_data *VAR_7;
 int VAR_8;

 if (!VAR_3)
  goto error;

 VAR_6 = VAR_3->pnetdev;
 VAR_7 = &VAR_3->rereg_nd_name_priv;


 if (VAR_7->old_pnetdev) {
  FUNC_4(VAR_7->old_pnetdev);
  VAR_7->old_pnetdev = ((void*)0);
 }

 if (!FUNC_8())
  FUNC_11(VAR_6);
 else
  FUNC_12(VAR_6);

 VAR_7->old_pnetdev = VAR_6;

 VAR_5 = FUNC_9(VAR_3);
 if (!VAR_5) {
  VAR_8 = -1;
  goto error;
 }

 FUNC_1(VAR_5, FUNC_3(FUNC_2(VAR_3)));

 FUNC_10(VAR_5, VAR_4);

 FUNC_5(VAR_5->dev_addr, VAR_3->eeprompriv.mac_addr, VAR_0);

 if (!FUNC_8())
  VAR_8 = FUNC_6(VAR_5);
 else
  VAR_8 = FUNC_7(VAR_5);

 if (VAR_8 != 0) {
  FUNC_0(VAR_2, VAR_1, ("register_netdev() failed\n"));
  goto error;
 }

 return 0;

error:

 return -1;

}
