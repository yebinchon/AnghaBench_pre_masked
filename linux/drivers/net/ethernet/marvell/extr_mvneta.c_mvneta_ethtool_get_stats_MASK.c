
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct mvneta_port {int * ethtool_stats; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvneta_port*) ;
 int VAR_0 ;
 struct mvneta_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
         struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct mvneta_port *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 FUNC_1(VAR_4);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  *VAR_3++ = VAR_4->ethtool_stats[VAR_5];
}
