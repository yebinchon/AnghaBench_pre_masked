
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* EfusePowerSwitch ) (struct adapter*,int ,int ) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int ,int ) ;

void
FUNC_1(
struct adapter *VAR_0,
u8 VAR_1,
u8 VAR_2)
{
 VAR_0->HalFunc.EfusePowerSwitch(VAR_0, VAR_1, VAR_2);
}
