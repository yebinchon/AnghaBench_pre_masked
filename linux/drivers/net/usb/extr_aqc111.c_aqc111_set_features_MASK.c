
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usbnet {struct aqc111_data* driver_priv; } ;
struct net_device {int features; } ;
struct aqc111_data {int rx_checksum; } ;
typedef int netdev_features_t ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int,int,int*) ;
 struct usbnet* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_21,
          netdev_features_t VAR_22)
{
 struct usbnet *VAR_23 = FUNC_3(VAR_21);
 struct aqc111_data *VAR_24 = VAR_23->driver_priv;
 netdev_features_t VAR_25 = VAR_21->features ^ VAR_22;
 u16 VAR_26 = 0;
 u8 VAR_27 = 0;

 if (VAR_25 & VAR_3) {
  FUNC_0(VAR_23, VAR_0, VAR_11, 1, 1, &VAR_27);
  VAR_27 ^= VAR_12 | VAR_14;
  FUNC_2(VAR_23, VAR_0, VAR_11,
     1, 1, &VAR_27);
 }

 if (VAR_25 & VAR_2) {
  FUNC_0(VAR_23, VAR_0, VAR_11, 1, 1, &VAR_27);
  VAR_27 ^= VAR_13 | VAR_15;
  FUNC_2(VAR_23, VAR_0, VAR_11,
     1, 1, &VAR_27);
 }

 if (VAR_25 & VAR_4) {
  FUNC_0(VAR_23, VAR_0, VAR_5, 1, 1, &VAR_27);
  if (VAR_22 & VAR_4) {
   VAR_24->rx_checksum = 1;
   VAR_27 &= ~(VAR_6 | VAR_7 | VAR_9 |
      VAR_8 | VAR_10);
  } else {
   VAR_24->rx_checksum = 0;
   VAR_27 |= VAR_6 | VAR_7 | VAR_9 |
    VAR_8 | VAR_10;
  }

  FUNC_2(VAR_23, VAR_0, VAR_5,
     1, 1, &VAR_27);
 }
 if (VAR_25 & VAR_1) {
  if (VAR_22 & VAR_1) {
   u16 VAR_28 = 0;

   for (VAR_28 = 0; VAR_28 < 256; VAR_28++) {

    VAR_27 = VAR_28;
    FUNC_2(VAR_23, VAR_0,
       VAR_18,
       1, 1, &VAR_27);

    FUNC_1(VAR_23, VAR_0,
         VAR_20,
         2, &VAR_26);
    VAR_27 = VAR_17;
    FUNC_2(VAR_23, VAR_0,
       VAR_19,
       1, 1, &VAR_27);
   }
   FUNC_0(VAR_23, VAR_0, VAR_19,
     1, 1, &VAR_27);
   VAR_27 |= VAR_16;
   FUNC_2(VAR_23, VAR_0,
      VAR_19, 1, 1, &VAR_27);
  } else {
   FUNC_0(VAR_23, VAR_0, VAR_19,
     1, 1, &VAR_27);
   VAR_27 &= ~VAR_16;
   FUNC_2(VAR_23, VAR_0,
      VAR_19, 1, 1, &VAR_27);
  }
 }

 return 0;
}
