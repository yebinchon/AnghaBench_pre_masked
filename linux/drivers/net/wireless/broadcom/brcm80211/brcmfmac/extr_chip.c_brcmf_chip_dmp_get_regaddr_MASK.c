
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct brcmf_chip_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct brcmf_chip_priv*,int*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct brcmf_chip_priv *VAR_20, u32 *VAR_21,
          u32 *VAR_22, u32 *VAR_23)
{
 u8 VAR_24;
 u32 VAR_25, VAR_26;
 u8 VAR_27 = 0;
 u8 VAR_28, VAR_29, VAR_30;

 *VAR_22 = 0;
 *VAR_23 = 0;

 VAR_25 = FUNC_0(VAR_20, VAR_21, &VAR_24);
 if (VAR_24 == VAR_4) {
  VAR_27 = (VAR_25 & VAR_5) >> VAR_6;
  VAR_30 = VAR_14;
 } else if (VAR_24 == VAR_0) {

  *VAR_21 -= 4;
  VAR_30 = VAR_17;
 } else {
  *VAR_21 -= 4;
  return -VAR_19;
 }

 do {

  do {
   VAR_25 = FUNC_0(VAR_20, VAR_21, &VAR_24);

   if (VAR_24 == VAR_3) {
    *VAR_21 -= 4;
    return -VAR_18;
   }
  } while (VAR_24 != VAR_0 &&
    VAR_24 != VAR_2);


  if (VAR_24 == VAR_2) {
   *VAR_21 -= 4;
   return 0;
  }


  if (VAR_25 & VAR_1)
   FUNC_0(VAR_20, VAR_21, ((void*)0));

  VAR_29 = (VAR_25 & VAR_11) >> VAR_12;


  if (VAR_29 == VAR_10) {
   VAR_26 = FUNC_0(VAR_20, VAR_21, ((void*)0));

   if (VAR_26 & VAR_1)
    FUNC_0(VAR_20, VAR_21, ((void*)0));
  }


  if (VAR_29 != VAR_8 &&
      VAR_29 != VAR_9)
   continue;

  VAR_28 = (VAR_25 & VAR_13) >> VAR_15;


  if (*VAR_22 == 0 && VAR_28 == VAR_16)
   *VAR_22 = VAR_25 & VAR_7;
  if (*VAR_23 == 0 && VAR_28 == VAR_30)
   *VAR_23 = VAR_25 & VAR_7;
 } while (*VAR_22 == 0 || *VAR_23 == 0);

 return 0;
}
