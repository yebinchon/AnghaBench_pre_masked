
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* hal_notch_filter ) (struct adapter*,int) ;} ;
struct adapter {TYPE_1__ HalFunc; } ;


 int FUNC_0 (struct adapter*,int) ;

void FUNC_1(struct adapter *VAR_0, bool VAR_1)
{
 if (VAR_0->HalFunc.hal_notch_filter)
  VAR_0->HalFunc.hal_notch_filter(VAR_0, VAR_1);
}
