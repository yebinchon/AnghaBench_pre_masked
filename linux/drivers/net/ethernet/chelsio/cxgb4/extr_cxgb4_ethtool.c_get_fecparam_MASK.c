
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {int fec; int pcaps; } ;
struct port_info {struct link_config link_cfg; } ;
struct net_device {int dummy; } ;
struct ethtool_fecparam {int active_fec; int fec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct port_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_fecparam *VAR_3)
{
 const struct port_info *VAR_4 = FUNC_2(VAR_2);
 const struct link_config *VAR_5 = &VAR_4->link_cfg;





 VAR_3->fec = FUNC_1(VAR_5->pcaps);
 if (VAR_3->fec != VAR_1)
  VAR_3->fec |= VAR_0;




 VAR_3->active_fec = FUNC_0(VAR_5->fec);

 return 0;
}
