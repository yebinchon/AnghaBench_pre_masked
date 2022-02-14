
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int intf; int control; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8152* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct r8152*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
    netdev_features_t VAR_2)
{
 netdev_features_t VAR_3 = VAR_2 ^ VAR_1->features;
 struct r8152 *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4->intf);
 if (VAR_5 < 0)
  goto out;

 FUNC_0(&VAR_4->control);

 if (VAR_3 & VAR_0) {
  if (VAR_2 & VAR_0)
   FUNC_3(VAR_4, 1);
  else
   FUNC_3(VAR_4, 0);
 }

 FUNC_1(&VAR_4->control);

 FUNC_5(VAR_4->intf);

out:
 return VAR_5;
}
