
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {scalar_t__ CurrentBandType; int NumTotalRFPath; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct adapter*,int ,int ,int ) ;

void FUNC_2(struct adapter *VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct hal_com_data *VAR_8 = FUNC_0(VAR_5);
 bool VAR_9 = (VAR_8->CurrentBandType == VAR_0);


 {
  if (VAR_9)
   FUNC_1(VAR_5, VAR_7, VAR_6, VAR_1);

  FUNC_1(VAR_5, VAR_7, VAR_6, VAR_4);
  FUNC_1(VAR_5, VAR_7, VAR_6, VAR_2);

  if (VAR_8->NumTotalRFPath >= 2)
   FUNC_1(VAR_5, VAR_7, VAR_6, VAR_3);

 }
}
