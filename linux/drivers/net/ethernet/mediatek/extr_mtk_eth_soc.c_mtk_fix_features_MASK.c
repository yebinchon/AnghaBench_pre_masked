
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mtk_mac {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_mac*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct mtk_mac* FUNC_2 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_3(struct net_device *VAR_1,
       netdev_features_t VAR_2)
{
 if (!(VAR_2 & VAR_0)) {
  struct mtk_mac *VAR_3 = FUNC_2(VAR_1);
  int VAR_4 = FUNC_0(VAR_3);

  if (VAR_4) {
   FUNC_1(VAR_1, "RX flow is programmed, LRO should keep on\n");

   VAR_2 |= VAR_0;
  }
 }

 return VAR_2;
}
