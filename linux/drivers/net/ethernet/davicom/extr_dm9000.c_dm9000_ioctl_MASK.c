
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct board_info {int mii; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 int FUNC_2 (struct net_device*) ;
 struct board_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct board_info *VAR_4 = FUNC_3(VAR_1);

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 return FUNC_0(&VAR_4->mii, FUNC_1(VAR_2), VAR_3, ((void*)0));
}
