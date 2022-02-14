
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct bgmac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgmac*,int ,int ,int) ;
 struct bgmac* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct bgmac *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->flags & VAR_1)
  FUNC_0(VAR_3, ~0, VAR_0, 1);
 else
  FUNC_0(VAR_3, ~VAR_0, 0, 1);
}
