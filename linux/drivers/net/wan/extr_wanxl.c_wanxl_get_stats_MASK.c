
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port {int dummy; } ;
struct net_device_stats {scalar_t__ rx_frame_errors; scalar_t__ rx_over_errors; scalar_t__ rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_2__ {scalar_t__ rx_frame_errors; scalar_t__ rx_overruns; } ;


 struct port* FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct port*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_0)
{
 struct port *VAR_1 = FUNC_0(VAR_0);

 VAR_0->stats.rx_over_errors = FUNC_1(VAR_1)->rx_overruns;
 VAR_0->stats.rx_frame_errors = FUNC_1(VAR_1)->rx_frame_errors;
 VAR_0->stats.rx_errors = VAR_0->stats.rx_over_errors +
  VAR_0->stats.rx_frame_errors;
 return &VAR_0->stats;
}
