
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int bDisableSWChannelPlan; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (int) ;

u8 FUNC_2(
 struct adapter *VAR_1,
 u8 VAR_2,
 u8 VAR_3,
 u8 VAR_4,
 bool VAR_5
)
{
 struct hal_com_data *VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_1);
 VAR_6->bDisableSWChannelPlan = 0;
 VAR_7 = VAR_4;

 if (0xFF == VAR_2)
  VAR_5 = 1;

 if (!VAR_5) {
  u8 VAR_8;

  VAR_8 = VAR_2 & (~VAR_0);
  if (FUNC_1(VAR_8)) {

   if (VAR_2 & VAR_0)
    VAR_6->bDisableSWChannelPlan = 1;


   VAR_7 = VAR_8;
  }
 }

 if (
  (0 == VAR_6->bDisableSWChannelPlan) &&
  FUNC_1(VAR_3)
 )
  VAR_7 = VAR_3;

 return VAR_7;
}
