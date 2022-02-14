
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int wol_events; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int supported; int wolopts; int sopass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 struct typhoon* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_4, struct ethtool_wolinfo *VAR_5)
{
 struct typhoon *VAR_6 = FUNC_1(VAR_4);

 VAR_5->supported = VAR_3 | VAR_2;
 VAR_5->wolopts = 0;
 if(VAR_6->wol_events & VAR_0)
  VAR_5->wolopts |= VAR_3;
 if(VAR_6->wol_events & VAR_1)
  VAR_5->wolopts |= VAR_2;
 FUNC_0(&VAR_5->sopass, 0, sizeof(VAR_5->sopass));
}
