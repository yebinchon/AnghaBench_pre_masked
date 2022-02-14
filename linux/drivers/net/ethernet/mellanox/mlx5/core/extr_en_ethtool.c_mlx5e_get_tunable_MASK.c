
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_tunable {int id; } ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,void*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
        const struct ethtool_tunable *VAR_2,
        void *VAR_3)
{
 int VAR_4;

 switch (VAR_2->id) {
 case 128:
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
