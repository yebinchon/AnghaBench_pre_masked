
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_2__ {scalar_t__ (* hal_bus_init ) (struct _adapter*) ;} ;
struct _adapter {int hw_init_completed; TYPE_1__ halpriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct _adapter*) ;
 scalar_t__ FUNC_1 (struct _adapter*) ;

uint FUNC_2(struct _adapter *VAR_2)
{
 VAR_2->hw_init_completed = 0;
 if (!VAR_2->halpriv.hal_bus_init)
  return VAR_0;
 if (VAR_2->halpriv.hal_bus_init(VAR_2) != VAR_1)
  return VAR_0;
 if (FUNC_0(VAR_2) == VAR_1) {
  VAR_2->hw_init_completed = 1;
 } else {
  VAR_2->hw_init_completed = 0;
  return VAR_0;
 }
 return VAR_1;
}
