
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct hal_com_data {int **** TxPwrByRateOffset; } ;
struct adapter {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,size_t,size_t,size_t,size_t*,int *,size_t*) ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_4(
 struct adapter *VAR_6,
 u32 VAR_7,
 u32 VAR_8,
 u32 VAR_9,
 u32 VAR_10,
 u32 VAR_11,
 u32 VAR_12
)
{
 struct hal_com_data *VAR_13 = FUNC_1(VAR_6);
 u8 VAR_14 = 0, VAR_15[4] = {0}, VAR_16 = 0;
 s8 VAR_17[4] = {0};

 FUNC_3(VAR_6, VAR_10, VAR_11, VAR_12, VAR_15, VAR_17, &VAR_16);

 if (VAR_7 != VAR_0 && VAR_7 != VAR_1) {
  FUNC_0("Invalid Band %d\n", VAR_7);
  return;
 }

 if (VAR_8 > VAR_4) {
  FUNC_0("Invalid RfPath %d\n", VAR_8);
  return;
 }

 if (VAR_9 > VAR_4) {
  FUNC_0("Invalid TxNum %d\n", VAR_9);
  return;
 }

 for (VAR_14 = 0; VAR_14 < VAR_16; ++VAR_14) {
  if (VAR_15[VAR_14] == FUNC_2(VAR_2) ||
    VAR_15[VAR_14] == FUNC_2(VAR_3))
   VAR_9 = VAR_5;

  VAR_13->TxPwrByRateOffset[VAR_7][VAR_8][VAR_9][VAR_15[VAR_14]] = VAR_17[VAR_14];
 }
}
