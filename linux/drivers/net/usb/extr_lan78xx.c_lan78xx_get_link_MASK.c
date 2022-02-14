
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {TYPE_1__* phydev; } ;
struct TYPE_2__ {int link; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_0)
{
 FUNC_0(VAR_0->phydev);

 return VAR_0->phydev->link;
}
