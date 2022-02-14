
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct bonding {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bonding*,int) ;
 int FUNC_1 (struct bonding*,int) ;
 struct bonding* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2, int VAR_3)
{
 struct bonding *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3 & VAR_1)
  FUNC_1(VAR_4,
         VAR_2->flags & VAR_1 ? 1 : -1);

 if (VAR_3 & VAR_0)
  FUNC_0(VAR_4,
      VAR_2->flags & VAR_0 ? 1 : -1);
}
