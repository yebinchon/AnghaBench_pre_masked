
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8192_priv {scalar_t__ rf_type; int ShortRetryLimit; int LongRetryLimit; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mode; } ;


 int VAR_0 ;
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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;






 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_14)
{
 u32 VAR_15 = 0, VAR_16 = 0;
 u8 VAR_17 = 0, VAR_18 = 0;
 struct r8192_priv *VAR_19 = FUNC_0(VAR_14);
 u32 VAR_20 = 0;


 switch (VAR_19->ieee80211->mode) {
 case 131:
  VAR_17 = VAR_1;
  VAR_15 = VAR_3;
  VAR_16 = VAR_3;
  break;
 case 133:
  VAR_17 = VAR_2 | VAR_1;
  VAR_15 = VAR_6;
  VAR_16 = VAR_6;
  break;
 case 130:
  VAR_17 = VAR_1;
  VAR_15 = VAR_3 | VAR_6;
  VAR_16 = VAR_3 | VAR_6;
  break;
 case 132:
  VAR_17 = VAR_1;
  VAR_15 = VAR_3 | VAR_6 |
     VAR_4 | VAR_5;
  VAR_16 = VAR_3 | VAR_6;
  break;
 case 129:



  VAR_17 = VAR_1;
  VAR_15 = VAR_3 | VAR_6 |
     VAR_4 | VAR_5;
  VAR_16 = VAR_3 | VAR_6;
  break;
 case 128:
  VAR_17 = VAR_2;
  VAR_15 = VAR_6 | VAR_4 |
     VAR_5;
  VAR_16 = VAR_6;
  break;
 }

 FUNC_2(VAR_14, VAR_0, VAR_17);
 VAR_20 = VAR_15;
 if (VAR_19->rf_type == VAR_11)
  VAR_20 &= ~(VAR_5);
 FUNC_3(VAR_14, VAR_7, VAR_20);
 FUNC_2(VAR_14, VAR_13, 1);
 FUNC_1(VAR_14, 0x313, &VAR_18);
 VAR_16 = ((VAR_18) << 24) | (VAR_16 & 0x00ffffff);
 FUNC_3(VAR_14, VAR_12, VAR_16);


 FUNC_4(VAR_14, VAR_8,
         VAR_19->ShortRetryLimit << VAR_10 |
         VAR_19->LongRetryLimit << VAR_9);







}
