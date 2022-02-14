
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct dvobj_priv {struct adapter* padapters; } ;
struct TYPE_2__ {scalar_t__ (* hal_deinit ) (struct adapter*) ;} ;
struct adapter {int hw_init_completed; TYPE_1__ HalFunc; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct dvobj_priv* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;

uint FUNC_3(struct adapter *VAR_1)
{
 uint VAR_2 = VAR_0;
 struct dvobj_priv *VAR_3 = FUNC_1(VAR_1);

 VAR_2 = VAR_1->HalFunc.hal_deinit(VAR_1);

 if (VAR_2 == VAR_0) {
  VAR_1 = VAR_3->padapters;
  VAR_1->hw_init_completed = 0;
 } else {
  FUNC_0("\n rtw_hal_deinit: hal_init fail\n");
 }
 return VAR_2;
}
