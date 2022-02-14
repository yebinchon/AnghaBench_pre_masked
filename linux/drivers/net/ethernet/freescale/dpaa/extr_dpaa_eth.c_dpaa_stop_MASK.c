
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * phydev; } ;
struct mac_device {int (* stop ) (struct mac_device*) ;int * port; } ;
struct dpaa_priv {struct mac_device* mac_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct dpaa_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dpaa_priv*,int ,struct net_device*,char*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mac_device*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 struct mac_device *VAR_2;
 struct dpaa_priv *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_1);
 VAR_2 = VAR_3->mac_dev;

 FUNC_4(VAR_1);



 FUNC_7(5000, 10000);

 VAR_5 = VAR_2->stop(VAR_2);
 if (VAR_5 < 0)
  FUNC_3(VAR_3, VAR_0, VAR_1, "mac_dev->stop() = %d\n",
     VAR_5);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->port); VAR_4++) {
  VAR_6 = FUNC_1(VAR_2->port[VAR_4]);
  if (VAR_6)
   VAR_5 = VAR_6;
 }

 if (VAR_1->phydev)
  FUNC_5(VAR_1->phydev);
 VAR_1->phydev = ((void*)0);

 return VAR_5;
}
