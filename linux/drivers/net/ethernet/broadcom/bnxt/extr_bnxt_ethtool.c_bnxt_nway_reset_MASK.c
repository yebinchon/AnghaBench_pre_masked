
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt_link_info {int autoneg; } ;
struct bnxt {struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnxt*,int,int) ;
 struct bnxt* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 int VAR_4 = 0;

 struct bnxt *VAR_5 = FUNC_2(VAR_3);
 struct bnxt_link_info *VAR_6 = &VAR_5->link_info;

 if (!FUNC_0(VAR_5))
  return -VAR_2;

 if (!(VAR_6->autoneg & VAR_0))
  return -VAR_1;

 if (FUNC_3(VAR_3))
  VAR_4 = FUNC_1(VAR_5, 1, 0);

 return VAR_4;
}
