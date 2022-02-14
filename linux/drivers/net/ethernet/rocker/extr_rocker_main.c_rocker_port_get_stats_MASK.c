
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rocker_port {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rocker_port* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct rocker_port*,scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
      struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct rocker_port *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_4, VAR_3) != 0) {
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); ++VAR_5)
   VAR_3[VAR_5] = 0;
 }
}
