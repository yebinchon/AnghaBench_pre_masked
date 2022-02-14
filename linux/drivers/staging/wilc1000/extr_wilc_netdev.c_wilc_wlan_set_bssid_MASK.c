
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int mode; int bssid; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_0, u8 *VAR_1, u8 VAR_2)
{
 struct wilc_vif *VAR_3 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_3->bssid, VAR_1);
 else
  FUNC_0(VAR_3->bssid);

 VAR_3->mode = VAR_2;
}
