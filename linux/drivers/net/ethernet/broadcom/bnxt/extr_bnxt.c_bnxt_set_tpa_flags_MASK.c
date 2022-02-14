
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt {int flags; TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct bnxt *VAR_6)
{
 VAR_6->flags &= ~VAR_3;
 if (VAR_6->flags & VAR_2)
  return;
 if (VAR_6->dev->features & VAR_5)
  VAR_6->flags |= VAR_1;
 else if (VAR_6->dev->features & VAR_4)
  VAR_6->flags |= VAR_0;
}
