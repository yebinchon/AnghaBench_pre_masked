
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hip04_priv {scalar_t__* rx_phys; int dev; scalar_t__ phy; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hip04_priv*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (int *) ;
 struct hip04_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3)
{
 struct hip04_priv *VAR_4 = FUNC_5(VAR_3);
 int VAR_5;

 FUNC_4(&VAR_4->napi);
 FUNC_6(VAR_3);
 FUNC_1(VAR_3);
 FUNC_3(VAR_3, 1);
 FUNC_2(VAR_4);

 if (VAR_4->phy)
  FUNC_7(VAR_4->phy);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->rx_phys[VAR_5]) {
   FUNC_0(VAR_4->dev, VAR_4->rx_phys[VAR_5],
      VAR_1, VAR_0);
   VAR_4->rx_phys[VAR_5] = 0;
  }
 }

 return 0;
}
