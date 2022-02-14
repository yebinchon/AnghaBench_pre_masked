
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct virtnet_info {scalar_t__ max_queue_pairs; TYPE_1__* rq; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;
struct TYPE_2__ {scalar_t__ xdp_prog; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtnet_info*,scalar_t__) ;
 int FUNC_1 () ;
 struct virtnet_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (struct net_device*,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (struct virtnet_info*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1,
    struct ethtool_channels *VAR_2)
{
 struct virtnet_info *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4 = VAR_2->combined_count;
 int VAR_5;




 if (VAR_2->rx_count || VAR_2->tx_count || VAR_2->other_count)
  return -VAR_0;

 if (VAR_4 > VAR_3->max_queue_pairs || VAR_4 == 0)
  return -VAR_0;





 if (VAR_3->rq[0].xdp_prog)
  return -VAR_0;

 FUNC_1();
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_4(VAR_1, VAR_4);
  FUNC_3(VAR_1, VAR_4);

  FUNC_6(VAR_3);
 }
 FUNC_5();

 return VAR_5;
}
