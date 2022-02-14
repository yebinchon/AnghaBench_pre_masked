
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int version; int coalesce; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;


 int VAR_0 ;



 struct r8152* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
    struct ethtool_coalesce *VAR_2)
{
 struct r8152 *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_3->version) {
 case 130:
 case 129:
 case 128:
  return -VAR_0;
 default:
  break;
 }

 VAR_2->rx_coalesce_usecs = VAR_3->coalesce;

 return 0;
}
