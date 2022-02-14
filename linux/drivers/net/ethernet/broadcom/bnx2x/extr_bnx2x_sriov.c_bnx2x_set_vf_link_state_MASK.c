
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x_virtf {int link_cfg; } ;
struct bnx2x {int dummy; } ;


 struct bnx2x_virtf* FUNC_0 (struct bnx2x*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,int) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_2(VAR_1);
 struct bnx2x_virtf *VAR_5 = FUNC_0(VAR_4, VAR_2);

 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->link_cfg == VAR_3)
  return 0;

 VAR_5->link_cfg = VAR_3;

 return FUNC_1(VAR_4, VAR_2);
}
