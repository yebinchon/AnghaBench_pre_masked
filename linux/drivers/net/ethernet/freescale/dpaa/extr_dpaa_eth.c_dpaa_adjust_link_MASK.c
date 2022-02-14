
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mac_device {int (* adjust_link ) (struct mac_device*) ;} ;
struct dpaa_priv {struct mac_device* mac_dev; } ;


 struct dpaa_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mac_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct mac_device *VAR_1;
 struct dpaa_priv *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = VAR_2->mac_dev;
 VAR_1->adjust_link(VAR_1);
}
