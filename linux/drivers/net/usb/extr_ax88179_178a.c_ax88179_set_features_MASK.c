
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int dummy; } ;
struct net_device {int features; } ;
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
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int*) ;
 struct usbnet* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_15, netdev_features_t VAR_16)
{
 u8 VAR_17;
 struct usbnet *VAR_18 = FUNC_2(VAR_15);
 netdev_features_t VAR_19 = VAR_15->features ^ VAR_16;

 if (VAR_19 & VAR_13) {
  FUNC_0(VAR_18, VAR_0, VAR_7, 1, 1, &VAR_17);
  VAR_17 ^= VAR_8 | VAR_10;
  FUNC_1(VAR_18, VAR_0, VAR_7, 1, 1, &VAR_17);
 }

 if (VAR_19 & VAR_12) {
  FUNC_0(VAR_18, VAR_0, VAR_7, 1, 1, &VAR_17);
  VAR_17 ^= VAR_9 | VAR_11;
  FUNC_1(VAR_18, VAR_0, VAR_7, 1, 1, &VAR_17);
 }

 if (VAR_19 & VAR_14) {
  FUNC_0(VAR_18, VAR_0, VAR_1, 1, 1, &VAR_17);
  VAR_17 ^= VAR_2 | VAR_3 | VAR_5 |
         VAR_4 | VAR_6;
  FUNC_1(VAR_18, VAR_0, VAR_1, 1, 1, &VAR_17);
 }

 return 0;
}
