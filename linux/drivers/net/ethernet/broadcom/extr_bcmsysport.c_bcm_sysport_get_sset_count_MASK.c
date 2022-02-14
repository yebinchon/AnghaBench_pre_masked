
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int num_tx_queues; } ;
struct bcm_sysport_stats {int type; } ;
struct bcm_sysport_priv {int is_lite; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 struct bcm_sysport_stats* VAR_3 ;
 int FUNC_0 (int ) ;
 struct bcm_sysport_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct bcm_sysport_priv *VAR_6 = FUNC_1(VAR_4);
 const struct bcm_sysport_stats *VAR_7;
 unsigned int VAR_8, VAR_9;

 switch (VAR_5) {
 case 128:
  for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_0; VAR_8++) {
   VAR_7 = &VAR_3[VAR_8];
   if (VAR_6->is_lite &&
       !FUNC_0(VAR_7->type))
    continue;
   VAR_9++;
  }

  return VAR_9 + VAR_4->num_tx_queues * VAR_2;
 default:
  return -VAR_1;
 }
}
