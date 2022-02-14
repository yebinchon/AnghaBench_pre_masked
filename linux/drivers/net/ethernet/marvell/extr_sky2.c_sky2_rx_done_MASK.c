
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int syncp; int bytes; int packets; } ;
struct sky2_port {int last_rx; TYPE_1__ rx_stats; } ;
struct sky2_hw {struct net_device** dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 int * VAR_1 ;
 int FUNC_1 (struct sky2_port*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct sky2_hw *VAR_2, unsigned VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 struct net_device *VAR_6 = VAR_2->dev[VAR_3];
 struct sky2_port *VAR_7 = FUNC_0(VAR_6);

 if (VAR_4 == 0)
  return;

 FUNC_2(&VAR_7->rx_stats.syncp);
 VAR_7->rx_stats.packets += VAR_4;
 VAR_7->rx_stats.bytes += VAR_5;
 FUNC_3(&VAR_7->rx_stats.syncp);

 VAR_7->last_rx = VAR_0;
 FUNC_1(FUNC_0(VAR_6), VAR_1[VAR_3]);
}
