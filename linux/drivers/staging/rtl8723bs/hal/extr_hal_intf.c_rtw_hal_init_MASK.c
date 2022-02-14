
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct dvobj_priv {TYPE_3__* padapters; } ;
struct TYPE_4__ {int notch_filter; } ;
struct TYPE_5__ {scalar_t__ (* hal_init ) (struct adapter*) ;} ;
struct adapter {TYPE_1__ registrypriv; TYPE_2__ HalFunc; } ;
struct TYPE_6__ {int hw_init_completed; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dvobj_priv* FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int) ;
 int FUNC_7 (struct adapter*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;

uint FUNC_10(struct adapter *VAR_3)
{
 uint VAR_4;
 struct dvobj_priv *VAR_5 = FUNC_2(VAR_3);

 VAR_4 = VAR_3->HalFunc.hal_init(VAR_3);

 if (VAR_4 == VAR_0) {
  FUNC_5(VAR_3);

  VAR_5->padapters->hw_init_completed = 1;

  if (VAR_3->registrypriv.notch_filter == 1)
   FUNC_6(VAR_3, 1);

  FUNC_7(VAR_3);

  FUNC_8(VAR_5->padapters);

  FUNC_3(VAR_3);

  FUNC_4(VAR_3);
 } else {
  VAR_5->padapters->hw_init_completed = 0;
  FUNC_0("rtw_hal_init: hal__init fail\n");
 }

 FUNC_1(VAR_2, VAR_1, ("-rtl871x_hal_init:status = 0x%x\n", VAR_4));

 return VAR_4;

}
