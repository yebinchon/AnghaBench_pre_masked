
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ rf_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_12, u8 VAR_13)
{
 int VAR_14;
 u32 *VAR_15 = ((void*)0);
 u32 *VAR_16 = ((void*)0);
 u16 VAR_17, VAR_18 = 0;
 struct r8192_priv *VAR_19 = FUNC_2(VAR_12);

 VAR_17 = VAR_0;
 VAR_16 = VAR_8;
 if (VAR_19->rf_type == VAR_7) {
  VAR_18 = VAR_4;
  VAR_15 = VAR_9;
 } else if (VAR_19->rf_type == VAR_6) {
  VAR_18 = VAR_5;
  VAR_15 = VAR_10;
 }

 if (VAR_13 == VAR_2) {
  for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14 += 2) {
   FUNC_1(VAR_12, VAR_15[VAR_14],
       VAR_11,
       VAR_15[VAR_14+1]);
   FUNC_0(VAR_3,
     "i: %x, The Rtl819xUsbPHY_REGArray[0] is %x Rtl819xUsbPHY_REGArray[1] is %x\n",
     VAR_14, VAR_15[VAR_14],
     VAR_15[VAR_14+1]);
  }
 } else if (VAR_13 == VAR_1) {
  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14 += 2) {
   FUNC_1(VAR_12, VAR_16[VAR_14],
       VAR_11,
       VAR_16[VAR_14+1]);
   FUNC_0(VAR_3,
     "i:%x, The rtl819XAGCTAB_Array[0] is %x rtl819XAGCTAB_Array[1] is %x\n",
     VAR_14, VAR_16[VAR_14],
     VAR_16[VAR_14+1]);
  }
 }
}
