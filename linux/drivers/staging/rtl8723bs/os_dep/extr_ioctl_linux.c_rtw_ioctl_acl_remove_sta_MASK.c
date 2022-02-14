
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlme_priv {int dummy; } ;
struct ieee_param {int* sta_addr; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct adapter*,int*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ieee_param *VAR_3, int VAR_4)
{
 struct adapter *VAR_5 = (struct adapter *)FUNC_2(VAR_2);
 struct mlme_priv *VAR_6 = &(VAR_5->mlmepriv);

 if (FUNC_0(VAR_6, VAR_1) != 1)
  return -VAR_0;

 if (VAR_3->sta_addr[0] == 0xff && VAR_3->sta_addr[1] == 0xff &&
     VAR_3->sta_addr[2] == 0xff && VAR_3->sta_addr[3] == 0xff &&
     VAR_3->sta_addr[4] == 0xff && VAR_3->sta_addr[5] == 0xff) {
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_3->sta_addr);
 return 0;

}
