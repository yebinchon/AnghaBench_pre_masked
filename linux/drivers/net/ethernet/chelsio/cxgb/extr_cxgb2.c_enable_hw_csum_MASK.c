
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adapter {int tp; TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int hw_features; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_1)
{
 if (VAR_1->port[0].dev->hw_features & VAR_0)
  FUNC_0(VAR_1->tp, 1);
 FUNC_1(VAR_1->tp, 1);
}
