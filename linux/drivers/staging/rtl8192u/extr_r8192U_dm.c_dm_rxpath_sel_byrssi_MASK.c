
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {size_t* rx_rssi_percentage; } ;
struct r8192_priv {scalar_t__ rf_type; scalar_t__* brfpath_rxenable; TYPE_2__ stats; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int cck_rx_path; int disabled_rf; scalar_t__ cck_method; size_t* rf_rssi; long* cck_pwdb_sta; size_t* rf_enable_rssi_th; } ;
struct TYPE_4__ {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct net_device*,int,int*) ;
 int FUNC_2 (struct net_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_11)
{
 struct r8192_priv *VAR_12 = FUNC_0(VAR_11);
 u8 VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 u8 VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
 u8 VAR_21 = 0x2;
 u8 VAR_22 = 0x3;
 long VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;
 u8 VAR_26 = 0, VAR_27 = 0, VAR_28 = 0;
 u8 VAR_29;
 long VAR_30;
 static u8 VAR_31, VAR_32;
 u8 VAR_33;

 if (VAR_12->rf_type != VAR_4)
  return;

 if (!VAR_32) {
  FUNC_1(VAR_11, 0xa07, &VAR_2.cck_rx_path);
  VAR_2.cck_rx_path &= 0xf;
  VAR_32 = 1;
 }

 FUNC_1(VAR_11, 0xc04, &VAR_2.disabled_rf);
 VAR_2.disabled_rf = ~VAR_2.disabled_rf & 0xf;

 if (VAR_12->ieee80211->mode == VAR_7) {
  VAR_2.cck_method = VAR_1;

 }


 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  VAR_2.rf_rssi[VAR_13] = VAR_12->stats.rx_rssi_percentage[VAR_13];

  if (VAR_12->brfpath_rxenable[VAR_13]) {
   VAR_17++;
   VAR_29 = VAR_2.rf_rssi[VAR_13];

   if (VAR_17 == 1) {

    VAR_14 = VAR_15 = VAR_16 = VAR_13;
    VAR_18 = VAR_19 = VAR_20 = VAR_29;
   } else if (VAR_17 == 2) {
    if (VAR_29 >= VAR_18) {
     VAR_18 = VAR_29;
     VAR_14 = VAR_13;
    } else {
     VAR_20 = VAR_19 = VAR_29;
     VAR_16 = VAR_15 = VAR_13;
    }
   } else {
    if (VAR_29 > VAR_18) {
     VAR_20 = VAR_18;
     VAR_16 = VAR_14;
     VAR_18 = VAR_29;
     VAR_14 = VAR_13;
    } else if (VAR_29 == VAR_18) {
     VAR_20 = VAR_29;
     VAR_16 = VAR_13;
    } else if ((VAR_29 < VAR_18) && (VAR_29 > VAR_20)) {
     VAR_20 = VAR_29;
     VAR_16 = VAR_13;
    } else if (VAR_29 == VAR_20) {
     if (VAR_20 == VAR_19) {

      VAR_20 = VAR_29;
      VAR_16 = VAR_13;
     } else {

     }
    } else if ((VAR_29 < VAR_20) && (VAR_29 > VAR_19)) {

    } else if (VAR_29 == VAR_19) {
     if (VAR_20 == VAR_19) {

      VAR_19 = VAR_29;
      VAR_15 = VAR_13;
     } else {

     }
    } else if (VAR_29 < VAR_19) {
     VAR_19 = VAR_29;
     VAR_15 = VAR_13;
    }
   }
  }
 }

 VAR_17 = 0;

 if (VAR_2.cck_method == VAR_1) {
  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if (VAR_12->brfpath_rxenable[VAR_13]) {
    VAR_17++;
    VAR_30 = VAR_2.cck_pwdb_sta[VAR_13];

    if (VAR_17 == 1) {

     VAR_26 = VAR_27 = VAR_28 = VAR_13;
     VAR_23 = VAR_24 = VAR_25 = VAR_30;
    } else if (VAR_17 == 2) {
     if (VAR_30 >= VAR_23) {
      VAR_23 = VAR_30;
      VAR_26 = VAR_13;
     } else {
      VAR_25 = VAR_24 = VAR_30;
      VAR_28 = VAR_27 = VAR_13;
     }
    } else {
     if (VAR_30 > VAR_23) {
      VAR_25 = VAR_23;
      VAR_28 = VAR_26;
      VAR_23 = VAR_30;
      VAR_26 = VAR_13;
     } else if (VAR_30 == VAR_23) {

      VAR_25 = VAR_30;
      VAR_28 = VAR_13;
     } else if ((VAR_30 < VAR_23) && (VAR_30 > VAR_25)) {
      VAR_25 = VAR_30;
      VAR_28 = VAR_13;
     } else if (VAR_30 == VAR_25 && VAR_25 == VAR_24) {

      VAR_25 = VAR_30;
      VAR_28 = VAR_13;

     } else if ((VAR_30 < VAR_25) && (VAR_30 > VAR_24)) {

     } else if (VAR_30 == VAR_24 && VAR_25 == VAR_24) {

      VAR_24 = VAR_30;
      VAR_27 = VAR_13;

     } else if (VAR_30 < VAR_24) {
      VAR_24 = VAR_30;
      VAR_27 = VAR_13;
     }
    }

   }
  }
 }




 VAR_33 = 0;
 if (VAR_2.cck_method == VAR_1) {
  VAR_21 = VAR_26;
  VAR_22 = VAR_28;
  if (VAR_23 != -64)
   VAR_33 = 1;
 }

 if (VAR_19 < VAR_6 && VAR_31 < 2) {
  if ((VAR_18 - VAR_19) >= VAR_5) {

   VAR_2.rf_enable_rssi_th[VAR_15] = VAR_18+5;

   FUNC_2(VAR_11, VAR_9, 0x1<<VAR_15, 0x0);
   FUNC_2(VAR_11, VAR_10, 0x1<<VAR_15, 0x0);
   VAR_31++;
  }
  if (VAR_2.cck_method == VAR_0) {
   VAR_21 = VAR_14;
   VAR_22 = VAR_16;
   if (VAR_18)
    VAR_33 = 1;
  }
 }

 if (VAR_33) {
  VAR_2.cck_rx_path = (VAR_21<<2)|(VAR_22);
  FUNC_2(VAR_11, VAR_8, 0x0f000000, VAR_2.cck_rx_path);
 }

 if (VAR_2.disabled_rf) {
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   if ((VAR_2.disabled_rf >> VAR_13) & 0x1) {
    if (VAR_18 >= VAR_2.rf_enable_rssi_th[VAR_13]) {


     FUNC_2(VAR_11, VAR_9, 0x1<<VAR_13, 0x1);
     FUNC_2(VAR_11, VAR_10, 0x1<<VAR_13, 0x1);
     VAR_2.rf_enable_rssi_th[VAR_13] = 100;
     VAR_31--;
    }
   }
  }
 }
}
