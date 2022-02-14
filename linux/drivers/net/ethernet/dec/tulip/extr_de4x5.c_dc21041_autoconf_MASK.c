
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {int media; int tx_enable; int timeout; int autosense; int local_state; int c_media; int linkOK; } ;
typedef int s32 ;






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



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int const,int (*) (struct net_device*,int),int (*) (struct net_device*)) ;
 int FUNC_4 (int ) ;
 struct de4x5_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,int,int,int) ;
 int FUNC_9 (struct net_device*,int,int,int) ;
 int FUNC_10 (struct net_device*,int,int,int,int,int,int) ;
 int FUNC_11 (struct net_device*,int) ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_13)
{
    struct de4x5_private *VAR_14 = FUNC_5(VAR_13);
    u_long VAR_15 = VAR_13->base_addr;
    s32 VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
    int VAR_21 = VAR_1;

    switch (VAR_14->media) {
    case 132:
 VAR_4;
 VAR_14->tx_enable = 0;
 VAR_14->timeout = -1;
 FUNC_2(VAR_13);
 if ((VAR_14->autosense == VAR_0) || (VAR_14->autosense == 129)) {
     VAR_14->media = 130;
 } else if (VAR_14->autosense == 130) {
     VAR_14->media = 130;
 } else if (VAR_14->autosense == 134) {
     VAR_14->media = 134;
 } else if (VAR_14->autosense == 136) {
     VAR_14->media = 136;
 } else {
     VAR_14->media = 131;
 }
 VAR_14->local_state = 0;
 VAR_21 = FUNC_12(VAR_13);
 break;

    case 129:
 if (VAR_14->timeout < 0) {
     VAR_20 = FUNC_4(VAR_2);
     FUNC_6(VAR_20 | VAR_7, VAR_2);
 }
 VAR_17 = VAR_10 | VAR_11;
 VAR_18 = VAR_5 | VAR_6;
 VAR_16 = FUNC_10(VAR_13, VAR_17, VAR_18, 0xef01, 0xffff, 0x0008, 2400);
 if (VAR_16 < 0) {
     VAR_21 = VAR_16 & ~VAR_12;
 } else {
     if (VAR_16 & VAR_11) {
  VAR_14->media = 138;
     } else {
  VAR_14->media = 136;
     }
     VAR_21 = FUNC_12(VAR_13);
 }
 break;

    case 138:
 if (!VAR_14->tx_enable) {
     VAR_17 = VAR_11;
     VAR_18 = VAR_6;
     VAR_16 = FUNC_9(VAR_13, VAR_17, VAR_18, 3000);
     if (VAR_16 < 0) {
  VAR_21 = VAR_16 & ~VAR_12;
     } else {
  if (!(VAR_16 & VAR_11) && (VAR_14->autosense == VAR_0)) {
      VAR_14->media = 130;
      VAR_21 = FUNC_12(VAR_13);
  } else {
      VAR_14->local_state = 1;
      FUNC_1(VAR_13);
  }
     }
 } else if (!VAR_14->linkOK && (VAR_14->autosense == VAR_0)) {
     VAR_14->media = 137;
     VAR_21 = 3000;
 }
 break;

    case 137:
 VAR_21 = FUNC_3(VAR_13, 1000, 138, FUNC_11, FUNC_12);
 break;

    case 130:
 if (!VAR_14->tx_enable) {
     if (VAR_14->timeout < 0) {
  VAR_20 = FUNC_4(VAR_2);
  FUNC_6(VAR_20 & ~VAR_7, VAR_2);
     }
     VAR_17 = VAR_10 | VAR_11;
     VAR_18 = VAR_5 | VAR_6;
     VAR_16 = FUNC_10(VAR_13,VAR_17, VAR_18, 0xef01, 0xff3f, 0x0008, 2400);
     if (VAR_16 < 0) {
  VAR_21 = VAR_16 & ~VAR_12;
     } else {
  if (!(VAR_16 & VAR_11) && (VAR_14->autosense == VAR_0)) {
      if (FUNC_4(VAR_3) & VAR_8) {
   VAR_14->media = 136;
      } else {
   VAR_14->media = 134;
      }
      VAR_21 = FUNC_12(VAR_13);
  } else {
      VAR_14->local_state = 1;
      FUNC_1(VAR_13);
  }
     }
 } else if (!VAR_14->linkOK && (VAR_14->autosense == VAR_0)) {
     VAR_14->media = 128;
     VAR_21 = 3000;
 }
 break;

    case 128:
 VAR_21 = FUNC_3(VAR_13, 1000, 130, FUNC_11, FUNC_12);
 break;

    case 136:
 if (!VAR_14->tx_enable) {
     if (VAR_14->timeout < 0) {
  VAR_20 = FUNC_4(VAR_2);
  FUNC_6(VAR_20 & ~VAR_7, VAR_2);
     }
     VAR_17 = 0;
     VAR_18 = 0;
     VAR_16 = FUNC_10(VAR_13,VAR_17, VAR_18, 0xef09, 0xf73d, 0x000e, 1000);
     if (VAR_16 < 0) {
  VAR_21 = VAR_16 & ~VAR_12;
     } else {
  if (!(FUNC_4(VAR_3) & VAR_9) && (VAR_14->autosense == VAR_0)) {
      VAR_14->media = 134;
      VAR_21 = FUNC_12(VAR_13);
  } else {
      VAR_14->local_state = 1;
      FUNC_1(VAR_13);
  }
     }
 } else if (!VAR_14->linkOK && (VAR_14->autosense == VAR_0)) {
     VAR_14->media = 135;
     VAR_21 = 3000;
 }
 break;

    case 135:
 VAR_21 = FUNC_3(VAR_13, 1000, 136, FUNC_7, FUNC_12);
 break;

    case 134:
 switch (VAR_14->local_state) {
 case 0:
     if (VAR_14->timeout < 0) {
  VAR_20 = FUNC_4(VAR_2);
  FUNC_6(VAR_20 & ~VAR_7, VAR_2);
     }
     VAR_17 = 0;
     VAR_18 = 0;
     VAR_16 = FUNC_10(VAR_13,VAR_17, VAR_18, 0xef09, 0xf73d, 0x0006, 1000);
     if (VAR_16 < 0) {
  VAR_21 = VAR_16 & ~VAR_12;
     } else {
  VAR_14->local_state++;
  VAR_21 = FUNC_12(VAR_13);
     }
     break;

 case 1:
     if (!VAR_14->tx_enable) {
  if ((VAR_16 = FUNC_7(VAR_13, 3000)) < 0) {
      VAR_21 = VAR_16 & ~VAR_12;
  } else {
      if (VAR_16) {
   VAR_14->local_state = 0;
   VAR_14->media = 131;
      } else {
   FUNC_1(VAR_13);
      }
  }
     } else if (!VAR_14->linkOK && (VAR_14->autosense == VAR_0)) {
  VAR_14->media = 133;
  VAR_21 = 3000;
     }
     break;
 }
 break;

    case 133:
 VAR_21 = FUNC_3(VAR_13, 1000, 134, FUNC_7, FUNC_12);
 break;

    case 131:
 VAR_20 = FUNC_4(VAR_2);
 FUNC_6(VAR_20 | VAR_7, VAR_2);
 FUNC_8(VAR_13, 0xef01, 0xffff, 0x0008);
 if (VAR_14->media != VAR_14->c_media) {
     FUNC_0(VAR_13);
     VAR_14->c_media = VAR_14->media;
 }
 VAR_14->media = 132;
 VAR_14->tx_enable = 0;
 break;
    }

    return VAR_21;
}
