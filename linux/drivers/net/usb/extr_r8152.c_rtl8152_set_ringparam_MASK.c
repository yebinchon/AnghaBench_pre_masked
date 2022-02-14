
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int rx_pending; int napi; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int rx_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8152* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
     struct ethtool_ringparam *VAR_3)
{
 struct r8152 *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3->rx_pending < (VAR_1 * 2))
  return -VAR_0;

 if (VAR_4->rx_pending != VAR_3->rx_pending) {
  FUNC_0(&VAR_4->napi);
  VAR_4->rx_pending = VAR_3->rx_pending;
  FUNC_1(&VAR_4->napi);
 }

 return 0;
}
