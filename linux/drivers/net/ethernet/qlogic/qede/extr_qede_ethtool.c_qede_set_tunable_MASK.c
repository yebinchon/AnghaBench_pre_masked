
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qede_dev {int rx_copybreak; } ;
struct net_device {int dummy; } ;
struct ethtool_tunable {int id; } ;


 int FUNC_0 (struct qede_dev*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qede_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
       const struct ethtool_tunable *VAR_6,
       const void *VAR_7)
{
 struct qede_dev *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;

 switch (VAR_6->id) {
 case 128:
  VAR_9 = *(u32 *)VAR_7;
  if (VAR_9 < VAR_2 || VAR_9 > VAR_3) {
   FUNC_0(VAR_8, VAR_4,
       "Invalid rx copy break value, range is [%u, %u]",
       VAR_2, VAR_3);
   return -VAR_0;
  }

  VAR_8->rx_copybreak = *(u32 *)VAR_7;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
