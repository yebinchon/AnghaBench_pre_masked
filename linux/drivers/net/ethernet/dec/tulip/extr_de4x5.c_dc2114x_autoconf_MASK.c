
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct net_device {int base_addr; } ;
struct TYPE_4__ {int autosense; } ;
struct de4x5_private {int media; int timeout; int tx_enable; int autosense; int infoblock_media; int fdx; size_t active; int local_state; int tmp; int tcount; int useSROM; int linkOK; TYPE_1__* phy; TYPE_2__ params; } ;
typedef int s32 ;
struct TYPE_3__ {int addr; } ;





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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

 int VAR_26 ;
 int VAR_27 ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int const,int (*) (struct net_device*,int),int (*) (struct net_device*)) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int,int ,int ,int ) ;
 struct de4x5_private* FUNC_11 (struct net_device*) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (struct net_device*,int) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*,int) ;
 int FUNC_17 (struct net_device*,int,int,int ,int ,int ,int) ;
 int FUNC_18 (struct net_device*,int ,int,int,int) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static int
FUNC_20(struct net_device *VAR_28)
{
    struct de4x5_private *VAR_29 = FUNC_11(VAR_28);
    u_long VAR_30 = VAR_28->base_addr;
    s32 VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41;
    int VAR_42 = VAR_1;

    switch (VAR_29->media) {
    case 131:
        if (VAR_29->timeout < 0) {
     VAR_5;
     VAR_29->tx_enable = 0;
     VAR_29->linkOK = 0;
            VAR_29->timeout = -1;
     FUNC_2(VAR_28);
     if (VAR_29->params.autosense & ~VAR_0) {
  FUNC_15(VAR_28);
  if (VAR_29->media != VAR_29->params.autosense) {
      VAR_29->tcount++;
      VAR_29->media = 131;
      return VAR_42;
  }
  VAR_29->media = 131;
     }
 }
 if ((VAR_42 = FUNC_1(VAR_28)) < 0) {
     VAR_42 &= ~VAR_26;
 } else {
     if (VAR_29->autosense == 129) {
  VAR_29->media = 129;
     } else if (VAR_29->autosense == 128) {
  VAR_29->media = 128;
     } else if (VAR_29->autosense == VAR_27) {
  VAR_29->media = VAR_27;
     } else if (VAR_29->autosense == 133) {
  VAR_29->media = 133;
     } else if (VAR_29->autosense == 135) {
  VAR_29->media = 135;
     } else {
  VAR_29->media = 130;
  if ((VAR_29->infoblock_media == 136) &&
                      ((VAR_40=FUNC_7(VAR_28)) & VAR_19)) {
      VAR_33 = (((VAR_40 >> 6) & VAR_11) | VAR_9);
      VAR_33 &= (VAR_29->fdx ? ~0 : ~VAR_10);
      FUNC_10(VAR_33, VAR_6, VAR_29->phy[VAR_29->active].addr, VAR_2);
      VAR_29->media = 136;
  }
     }
     VAR_29->local_state = 0;
     VAR_42 = FUNC_20(VAR_28);
        }
 break;

    case 136:
 switch (VAR_29->local_state) {
 case 0:
     if (VAR_29->timeout < 0) {
  FUNC_10(VAR_16 | VAR_17, VAR_15, VAR_29->phy[VAR_29->active].addr, VAR_2);
     }
     VAR_31 = FUNC_18(VAR_28, VAR_15, VAR_17, 0, 500);
     if (VAR_31 < 0) {
  VAR_42 = VAR_31 & ~VAR_26;
     } else {
  if (VAR_31) {
      VAR_29->local_state = 0;
      VAR_29->media = 130;
  } else {
      VAR_29->local_state++;
  }
  VAR_42 = FUNC_20(VAR_28);
     }
     break;

 case 1:
     VAR_40 = FUNC_18(VAR_28, VAR_18, VAR_20, 1, 2000);
     if (VAR_40 < 0) {
  VAR_42 = VAR_40 & ~VAR_26;
     } else {
  VAR_29->media = 130;
  VAR_29->local_state = 0;
  if (VAR_40) {
      VAR_29->tmp = VAR_20;
      VAR_32 = FUNC_9(VAR_12, VAR_29->phy[VAR_29->active].addr, VAR_2);
      VAR_33 = FUNC_9(VAR_6, VAR_29->phy[VAR_29->active].addr, VAR_2);
      if (!(VAR_32 & VAR_13) &&
    (VAR_34 = VAR_32 & VAR_14 & VAR_33)) {
   if (VAR_34 & VAR_7) {
       VAR_29->fdx = (VAR_33 & VAR_32 & VAR_10 & VAR_7) != 0;
       VAR_29->media = 129;
   } else if (VAR_34 & VAR_8) {
       VAR_29->fdx = (VAR_33 & VAR_32 & VAR_10 & VAR_8) != 0;
       VAR_29->media = 128;
   }
      }
  }
  VAR_42 = FUNC_20(VAR_28);
     }
     break;
 }
 break;

    case 135:
 if (!VAR_29->tx_enable) {
     if (VAR_29->timeout < 0) {
  VAR_38 = FUNC_4(VAR_3);
  FUNC_12(VAR_38 & ~VAR_21, VAR_3);
     }
     VAR_35 = 0;
     VAR_36 = 0;
     VAR_41 = FUNC_17(VAR_28,VAR_35, VAR_36, 0, 0, 0, 1000);
     if (VAR_41 < 0) {
  VAR_42 = VAR_41 & ~VAR_26;
     } else {
  if (!(FUNC_4(VAR_4) & VAR_25) && (VAR_29->autosense == VAR_0)) {
      VAR_29->media = 133;
      VAR_42 = FUNC_20(VAR_28);
  } else {
      VAR_29->local_state = 1;
      FUNC_0(VAR_28);
  }
     }
 } else if (!VAR_29->linkOK && (VAR_29->autosense == VAR_0)) {
     VAR_29->media = 134;
     VAR_42 = 3000;
 }
 break;

    case 134:
 VAR_42 = FUNC_3(VAR_28, 1000, 135, FUNC_13, FUNC_20);
 break;

    case 133:
 switch (VAR_29->local_state) {
 case 0:
     if (VAR_29->timeout < 0) {
  VAR_38 = FUNC_4(VAR_3);
  FUNC_12(VAR_38 & ~VAR_21, VAR_3);
     }
     VAR_35 = 0;
     VAR_36 = 0;
     VAR_41 = FUNC_17(VAR_28,VAR_35, VAR_36, 0, 0, 0, 1000);
     if (VAR_41 < 0) {
  VAR_42 = VAR_41 & ~VAR_26;
     } else {
  VAR_29->local_state++;
  VAR_42 = FUNC_20(VAR_28);
     }
     break;

 case 1:
     if (!VAR_29->tx_enable) {
  if ((VAR_41 = FUNC_13(VAR_28, 3000)) < 0) {
      VAR_42 = VAR_41 & ~VAR_26;
  } else {
      if (VAR_41) {
   VAR_29->local_state = 0;
   VAR_29->tcount++;
   VAR_29->media = 131;
      } else {
   FUNC_0(VAR_28);
      }
  }
     } else if (!VAR_29->linkOK && (VAR_29->autosense == VAR_0)) {
  VAR_29->media = 132;
  VAR_42 = 3000;
     }
     break;
 }
 break;

    case 132:
 VAR_42 = FUNC_3(VAR_28, 1000, 133, FUNC_13, FUNC_20);
 break;

    case 130:
   if (FUNC_15(VAR_28) < 0) {
       VAR_29->tcount++;
       VAR_29->media = 131;
       return VAR_42;
   }
   if (VAR_29->media == 129) {
       if ((VAR_39 = FUNC_16(VAR_28, 6500)) < 0) {
    VAR_29->media = 130;
    return VAR_39 & ~VAR_26;
       }
   } else {
       if (FUNC_19(VAR_28) < 0) {
    VAR_29->media = 130;
    return VAR_22;
       }
   }
   if (VAR_29->media == 136) {
       if (FUNC_8(VAR_28)) {
    VAR_29->media = 129;
       } else {
    VAR_29->media = 128;
       }
       VAR_42 = FUNC_20(VAR_28);
   } else if (((VAR_29->media == 129) && FUNC_5(VAR_28)) ||
       (((VAR_29->media == 128) || (VAR_29->media == VAR_27) ||
         (VAR_29->media == 133) || (VAR_29->media == 135)) &&
        FUNC_6(VAR_28))) {
       VAR_42 = FUNC_20(VAR_28);
   } else {
       VAR_29->tcount++;
       VAR_29->media = 131;
   }
   break;

    case 128:
        VAR_42 = 3000;
 if (!VAR_29->tx_enable) {
     VAR_24;
     FUNC_0(VAR_28);
 } else {
     if (!VAR_29->linkOK && (VAR_29->autosense == VAR_0)) {
  if (!FUNC_6(VAR_28) || (!VAR_29->useSROM && FUNC_8(VAR_28))) {
      VAR_29->media = 131;
      VAR_29->tcount++;
      VAR_42 = VAR_1;
  }
     }
 }
 break;

    case 129:
        VAR_42 = 3000;
 if (!VAR_29->tx_enable) {
     VAR_23;
     FUNC_0(VAR_28);
 } else {
     if (!VAR_29->linkOK && (VAR_29->autosense == VAR_0)) {
  if (!FUNC_5(VAR_28) || (!VAR_29->useSROM && !FUNC_8(VAR_28))) {
      VAR_29->media = 131;
      VAR_29->tcount++;
      VAR_42 = VAR_1;
  }
     }
 }
 break;

    default:
 VAR_29->tcount++;
FUNC_14("Huh?: media:%02x\n", VAR_29->media);
 VAR_29->media = 131;
 break;
    }

    return VAR_42;
}
