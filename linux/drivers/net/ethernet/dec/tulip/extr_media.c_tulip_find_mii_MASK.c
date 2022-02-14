
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tulip_private {int* phys; int mii_advertise; unsigned int* advertising; size_t default_port; int mii_cnt; TYPE_1__* mtable; scalar_t__ full_duplex; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_mii; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct tulip_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int,unsigned int,int,int) ;
 int FUNC_3 (char*,int,...) ;
 void* FUNC_4 (struct net_device*,int,int) ;
 int FUNC_5 (struct net_device*,int,int,unsigned int) ;
 int* VAR_15 ;
 int FUNC_6 (int) ;

void FUNC_7(struct net_device *VAR_16, int VAR_17)
{
 struct tulip_private *VAR_18 = FUNC_1(VAR_16);
 int VAR_19, VAR_20 = 0;
 int VAR_21;
 int VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25;




 for (VAR_19 = 1; VAR_19 <= 32 && VAR_20 < FUNC_0(VAR_18->phys); VAR_19++) {
  int VAR_26 = VAR_19 & 0x1f;
  int VAR_27 = FUNC_4 (VAR_16, VAR_26, VAR_13);
  if ((VAR_27 & 0x8301) == 0x8001 ||
      ((VAR_27 & VAR_10) == 0 &&
       (VAR_27 & 0x7800) != 0)) {

  } else {
   continue;
  }

  VAR_21 = FUNC_4 (VAR_16, VAR_26, VAR_12);
  VAR_22 = FUNC_4 (VAR_16, VAR_26, VAR_11);
  VAR_25 = 0;





  if ((VAR_22 & VAR_0) == 0) {
   unsigned int VAR_28 = FUNC_4 (VAR_16, VAR_26, VAR_13);
   VAR_22 = ((VAR_28 >> 6) & 0x3e0) | 1;
  }

  if (VAR_18->mii_advertise) {
   VAR_18->advertising[VAR_20] =
   VAR_23 = VAR_18->mii_advertise;
  } else if (VAR_18->advertising[VAR_20]) {
   VAR_23 = VAR_18->advertising[VAR_20];
  } else {
   VAR_18->advertising[VAR_20] =
   VAR_18->mii_advertise =
   VAR_23 = VAR_22;
  }

  VAR_18->phys[VAR_20++] = VAR_26;

  FUNC_3("tulip%d:  MII transceiver #%d config %04x status %04x advertising %04x\n",
   VAR_17, VAR_26, VAR_21, VAR_27, VAR_22);


  if (VAR_22 != VAR_23) {
   FUNC_2("tulip%d:  Advertising %04x on PHY %d, previously advertising %04x\n",
     VAR_17, VAR_23, VAR_26, VAR_22);
   FUNC_5 (VAR_16, VAR_26, 4, VAR_23);
  }


  if (VAR_18->default_port == 0) {
   VAR_24 = VAR_21 | VAR_1;
   if (VAR_24 != VAR_21) {
    VAR_24 |= VAR_2;
    VAR_25 = 1;
   }
  }

  else {
   VAR_24 = VAR_21 & ~VAR_1;
   if (VAR_24 != VAR_21)
    VAR_25 = 1;
  }


  VAR_24 &= ~(VAR_3 | VAR_4 | VAR_5 |
         VAR_7 | VAR_9 | VAR_6 |
         VAR_8);

  if (VAR_18->full_duplex)
   VAR_24 |= VAR_4;
  if (VAR_15[VAR_18->default_port] & VAR_14)
   VAR_24 |= VAR_9;

  if (VAR_24 != VAR_21) {






   if (VAR_25) {
    FUNC_5 (VAR_16, VAR_26, VAR_12, VAR_24);
    FUNC_6 (10);
   }
   FUNC_5 (VAR_16, VAR_26, VAR_12, VAR_24);
  }
 }
 VAR_18->mii_cnt = VAR_20;
 if (VAR_18->mtable && VAR_18->mtable->has_mii && VAR_20 == 0) {
  FUNC_3("tulip%d: ***WARNING***: No MII transceiver found!\n",
   VAR_17);
  VAR_18->phys[0] = 1;
 }
}
