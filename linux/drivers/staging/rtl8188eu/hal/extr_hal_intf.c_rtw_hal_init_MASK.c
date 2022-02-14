
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_2__ {int notch_filter; } ;
struct adapter {int hw_init_completed; TYPE_1__ registrypriv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct adapter*,int) ;

uint FUNC_4(struct adapter *VAR_3)
{
 uint VAR_4 = VAR_0;

 VAR_3->hw_init_completed = 0;

 VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 == VAR_0) {
  VAR_3->hw_init_completed = 1;

  if (VAR_3->registrypriv.notch_filter == 1)
   FUNC_3(VAR_3, 1);
 } else {
  VAR_3->hw_init_completed = 0;
  FUNC_0("rtw_hal_init: hal__init fail\n");
 }

 FUNC_1(VAR_2, VAR_1,
   ("-rtl871x_hal_init:status=0x%x\n", VAR_4));

 return VAR_4;
}
