
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {TYPE_1__* dev; } ;
struct bonding {int dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct bonding *VAR_1, struct slave *VAR_2)
{
 FUNC_0(VAR_2->dev, VAR_1->dev);
 VAR_2->dev->flags &= ~VAR_0;
}
