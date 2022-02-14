
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int sopass; int wolopts; int supported; } ;
struct be_adapter {int wol_cap; scalar_t__ wol_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct be_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, struct ethtool_wolinfo *VAR_3)
{
 struct be_adapter *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->wol_cap & VAR_0) {
  VAR_3->supported |= VAR_1;
  if (VAR_4->wol_en)
   VAR_3->wolopts |= VAR_1;
 } else {
  VAR_3->wolopts = 0;
 }
 FUNC_0(&VAR_3->sopass, 0, sizeof(VAR_3->sopass));
}
