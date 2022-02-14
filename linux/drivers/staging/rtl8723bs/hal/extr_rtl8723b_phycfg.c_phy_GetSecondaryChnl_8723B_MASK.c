
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {scalar_t__ CurrentChannelBW; scalar_t__ nCur80MhzPrimeSC; scalar_t__ nCur40MhzPrimeSC; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static u8 FUNC_2(struct adapter *VAR_13)
{
 u8 VAR_14 = 0, VAR_15 = 0;
 struct hal_com_data *VAR_16 = FUNC_0(VAR_13);

 FUNC_1(
  VAR_12,
  VAR_11,
  (
   "SCMapping: VHT Case: pHalData->CurrentChannelBW %d, pHalData->nCur80MhzPrimeSC %d, pHalData->nCur40MhzPrimeSC %d\n",
   VAR_16->CurrentChannelBW,
   VAR_16->nCur80MhzPrimeSC,
   VAR_16->nCur40MhzPrimeSC
  )
 );
 if (VAR_16->CurrentChannelBW == VAR_1) {
  if (VAR_16->nCur80MhzPrimeSC == VAR_2)
   VAR_14 = VAR_8;
  else if (VAR_16->nCur80MhzPrimeSC == VAR_3)
   VAR_14 = VAR_9;
  else
   FUNC_1(VAR_12, VAR_10, ("SCMapping: Not Correct Primary40MHz Setting\n"));

  if (
   (VAR_16->nCur40MhzPrimeSC == VAR_2) &&
   (VAR_16->nCur80MhzPrimeSC == VAR_2)
  )
   VAR_15 = VAR_5;
  else if (
   (VAR_16->nCur40MhzPrimeSC == VAR_3) &&
   (VAR_16->nCur80MhzPrimeSC == VAR_2)
  )
   VAR_15 = VAR_4;
  else if (
   (VAR_16->nCur40MhzPrimeSC == VAR_2) &&
   (VAR_16->nCur80MhzPrimeSC == VAR_3)
  )
   VAR_15 = VAR_7;
  else if (
   (VAR_16->nCur40MhzPrimeSC == VAR_3) &&
   (VAR_16->nCur80MhzPrimeSC == VAR_3)
  )
   VAR_15 = VAR_6;
  else
   FUNC_1(VAR_12, VAR_10, ("SCMapping: Not Correct Primary40MHz Setting\n"));
 } else if (VAR_16->CurrentChannelBW == VAR_0) {
  FUNC_1(
   VAR_12,
   VAR_11,
   (
    "SCMapping: VHT Case: pHalData->CurrentChannelBW %d, pHalData->nCur40MhzPrimeSC %d\n",
    VAR_16->CurrentChannelBW,
    VAR_16->nCur40MhzPrimeSC
   )
  );

  if (VAR_16->nCur40MhzPrimeSC == VAR_3)
   VAR_15 = VAR_7;
  else if (VAR_16->nCur40MhzPrimeSC == VAR_2)
   VAR_15 = VAR_4;
  else
   FUNC_1(VAR_12, VAR_10, ("SCMapping: Not Correct Primary40MHz Setting\n"));
 }

 FUNC_1(VAR_12, VAR_11, ("SCMapping: SC Value %x\n", ((VAR_14 << 4) | VAR_15)));
 return (VAR_14 << 4) | VAR_15;
}
