
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct board_info {int mii; } ;


 int FUNC_0 (int *) ;
 struct board_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct board_info *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_1->mii);
}
