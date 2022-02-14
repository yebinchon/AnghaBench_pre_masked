
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int dummy; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct s2io_nic*) ;
 int FUNC_3 (struct s2io_nic*) ;
 int FUNC_4 (struct s2io_nic*) ;
 int FUNC_5 (struct s2io_nic*) ;
 int FUNC_6 (struct s2io_nic*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, netdev_features_t VAR_2)
{
 struct s2io_nic *VAR_3 = FUNC_0(VAR_1);
 netdev_features_t VAR_4 = (VAR_2 ^ VAR_1->features) & VAR_0;

 if (VAR_4 && FUNC_1(VAR_1)) {
  int VAR_5;

  FUNC_6(VAR_3);
  FUNC_2(VAR_3);
  VAR_1->features = VAR_2;
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5)
   FUNC_4(VAR_3);
  else
   FUNC_5(VAR_3);

  return VAR_5 ? VAR_5 : 1;
 }

 return 0;
}
