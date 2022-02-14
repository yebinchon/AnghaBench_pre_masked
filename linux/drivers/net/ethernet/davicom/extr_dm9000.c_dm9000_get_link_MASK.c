
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct board_info {int flags; int mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct board_info*,int ) ;
 int FUNC_1 (int *) ;
 struct board_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_3)
{
 struct board_info *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;

 if (VAR_4->flags & VAR_1)
  VAR_5 = FUNC_1(&VAR_4->mii);
 else
  VAR_5 = FUNC_0(VAR_4, VAR_0) & VAR_2 ? 1 : 0;

 return VAR_5;
}
