
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sge {TYPE_3__* adapter; } ;
struct TYPE_6__ {scalar_t__ regs; TYPE_2__* port; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int hw_features; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(struct sge *VAR_6)
{
 u32 VAR_7 = VAR_4;
 u32 VAR_8 = FUNC_0(VAR_6->adapter->regs + VAR_0);

 if (VAR_6->adapter->port[0].dev->hw_features & VAR_3)
  VAR_7 &= ~VAR_2;
 FUNC_1(VAR_7, VAR_6->adapter->regs + VAR_1);
 FUNC_1(VAR_8 | VAR_5, VAR_6->adapter->regs + VAR_0);
}
