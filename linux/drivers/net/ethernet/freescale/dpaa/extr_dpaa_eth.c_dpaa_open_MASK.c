
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mac_device {int (* start ) (struct mac_device*) ;int * port; } ;
struct dpaa_priv {struct mac_device* mac_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dpaa_priv*) ;
 int FUNC_2 (struct dpaa_priv*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 struct dpaa_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct dpaa_priv*,int ,struct net_device*,char*,int) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct mac_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1)
{
 struct mac_device *VAR_2;
 struct dpaa_priv *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_6(VAR_1);
 VAR_2 = VAR_3->mac_dev;
 FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  goto phy_init_failed;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->port); VAR_5++) {
  VAR_4 = FUNC_5(VAR_2->port[VAR_5]);
  if (VAR_4)
   goto mac_start_failed;
 }

 VAR_4 = VAR_3->mac_dev->start(VAR_2);
 if (VAR_4 < 0) {
  FUNC_7(VAR_3, VAR_0, VAR_1, "mac_dev->start() = %d\n", VAR_4);
  goto mac_start_failed;
 }

 FUNC_8(VAR_1);

 return 0;

mac_start_failed:
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->port); VAR_5++)
  FUNC_4(VAR_2->port[VAR_5]);

phy_init_failed:
 FUNC_1(VAR_3);

 return VAR_4;
}
