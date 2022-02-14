
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {int viid; TYPE_1__* adapter; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int pf; } ;


 int VAR_0 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int,int,int,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, netdev_features_t VAR_2)
{
 const struct port_info *VAR_3 = FUNC_0(VAR_1);
 netdev_features_t VAR_4 = VAR_1->features ^ VAR_2;
 int VAR_5;

 if (!(VAR_4 & VAR_0))
  return 0;

 VAR_5 = FUNC_1(VAR_3->adapter, VAR_3->adapter->pf, VAR_3->viid, -1,
       -1, -1, -1,
       !!(VAR_2 & VAR_0), 1);
 if (FUNC_2(VAR_5))
  VAR_1->features = VAR_2 ^ VAR_0;
 return VAR_5;
}
