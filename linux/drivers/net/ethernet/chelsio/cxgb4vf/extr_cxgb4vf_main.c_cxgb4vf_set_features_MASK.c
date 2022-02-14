
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int viid; int adapter; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int,int,int,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
 netdev_features_t VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2);
 netdev_features_t VAR_5 = VAR_2->features ^ VAR_3;

 if (VAR_5 & VAR_0)
  FUNC_1(VAR_4->adapter, VAR_4->viid, -1, -1, -1, -1,
    VAR_3 & VAR_1, 0);

 return 0;
}
