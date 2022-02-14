
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlme_priv {int dummy; } ;
struct hal_com_data {int RegRRSR; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 scalar_t__ VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mlme_priv*,int) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 scalar_t__ FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;
 int FUNC_6 (struct adapter*,int ,int ) ;
 int FUNC_7 (struct adapter*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct adapter *VAR_11, u8 VAR_12, u8 *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 u8 VAR_18;
 struct hal_com_data *VAR_19;
 struct mlme_priv *VAR_20;


 VAR_19 = FUNC_0(VAR_11);
 VAR_20 = &VAR_11->mlmepriv;

 VAR_16 = VAR_2;

 VAR_15 = VAR_1;


 VAR_17 = 0;

 if ((FUNC_1(VAR_20, VAR_8) == 1))
  VAR_15 = VAR_1;

 VAR_14 = FUNC_3(VAR_11, VAR_3);

 if (*((u8 *)VAR_13)) {

  VAR_14 &= ~(VAR_15);
  FUNC_6(VAR_11, VAR_3, VAR_14);

  FUNC_5(VAR_11, VAR_5, VAR_17);

  if (FUNC_1(VAR_20, VAR_9 | VAR_7 | VAR_6)) {

   VAR_18 = FUNC_4(VAR_11, VAR_16);
   VAR_18 |= VAR_0;
   FUNC_7(VAR_11, VAR_16, VAR_18);
  }


  VAR_19->RegRRSR = FUNC_2(VAR_11, VAR_4);
 } else {

  if (FUNC_1(VAR_20, (VAR_10|VAR_8)))

   FUNC_5(VAR_11, VAR_5, 0xFFFF);

  if (FUNC_1(VAR_20, VAR_9 | VAR_7 | VAR_6)) {

   VAR_18 = FUNC_4(VAR_11, VAR_16);
   VAR_18 &= ~VAR_0;
   FUNC_7(VAR_11, VAR_16, VAR_18);
  }

  VAR_14 |= VAR_15;
  FUNC_6(VAR_11, VAR_3, VAR_14);


  FUNC_5(VAR_11, VAR_4, VAR_19->RegRRSR);
 }
}
