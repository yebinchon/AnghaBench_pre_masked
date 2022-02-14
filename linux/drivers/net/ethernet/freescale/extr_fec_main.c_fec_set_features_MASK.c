
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct fec_enet_private {int napi; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct fec_enet_private* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_1,
 netdev_features_t VAR_2)
{
 struct fec_enet_private *VAR_3 = FUNC_5(VAR_1);
 netdev_features_t VAR_4 = VAR_2 ^ VAR_1->features;

 if (FUNC_6(VAR_1) && VAR_4 & VAR_0) {
  FUNC_3(&VAR_3->napi);
  FUNC_7(VAR_1);
  FUNC_2(VAR_1);
  FUNC_0(VAR_1, VAR_2);
  FUNC_1(VAR_1);
  FUNC_9(VAR_1);
  FUNC_8(VAR_1);
  FUNC_4(&VAR_3->napi);
 } else {
  FUNC_0(VAR_1, VAR_2);
 }

 return 0;
}
