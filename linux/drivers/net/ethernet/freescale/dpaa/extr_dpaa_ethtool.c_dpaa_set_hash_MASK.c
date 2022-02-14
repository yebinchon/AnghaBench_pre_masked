
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mac_device {struct fman_port** port; } ;
struct fman_port {int dummy; } ;
struct dpaa_priv {int keygen_in_use; struct mac_device* mac_dev; } ;


 int FUNC_0 (struct fman_port*,int) ;
 struct dpaa_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, bool VAR_1)
{
 struct mac_device *VAR_2;
 struct fman_port *VAR_3;
 struct dpaa_priv *VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 VAR_2 = VAR_4->mac_dev;
 VAR_3 = VAR_2->port[0];

 FUNC_0(VAR_3, VAR_1);
 VAR_4->keygen_in_use = VAR_1;
}
