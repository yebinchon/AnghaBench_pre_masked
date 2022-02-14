
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int wol; int hw; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 const struct sky2_port *VAR_2 = FUNC_0(VAR_0);

 VAR_1->supported = FUNC_1(VAR_2->hw);
 VAR_1->wolopts = VAR_2->wol;
}
