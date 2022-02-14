
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct macb {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct macb*,int) ;
 int FUNC_1 (struct macb*,int) ;
 int FUNC_2 (struct macb*,int) ;
 struct macb* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
        netdev_features_t VAR_4)
{
 struct macb *VAR_5 = FUNC_3(VAR_3);
 netdev_features_t VAR_6 = VAR_4 ^ VAR_3->features;


 if (VAR_6 & VAR_0)
  FUNC_2(VAR_5, VAR_4);


 if (VAR_6 & VAR_2)
  FUNC_0(VAR_5, VAR_4);


 if (VAR_6 & VAR_1)
  FUNC_1(VAR_5, VAR_4);

 return 0;
}
