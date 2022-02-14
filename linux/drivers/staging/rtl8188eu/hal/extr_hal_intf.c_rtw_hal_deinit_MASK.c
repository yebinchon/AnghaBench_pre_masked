
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct adapter {int hw_init_completed; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct adapter*) ;

uint FUNC_2(struct adapter *VAR_1)
{
 uint VAR_2 = VAR_0;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == VAR_0)
  VAR_1->hw_init_completed = 0;
 else
  FUNC_0("\n rtw_hal_deinit: hal_init fail\n");

 return VAR_2;
}
