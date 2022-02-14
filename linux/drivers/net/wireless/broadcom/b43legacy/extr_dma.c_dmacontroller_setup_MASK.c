
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_dmaring {int frameoffset; scalar_t__ tx; int dmabase; TYPE_2__* dev; } ;
struct TYPE_3__ {int translation; } ;
struct TYPE_4__ {TYPE_1__ dma; } ;


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
 int FUNC_0 (struct b43legacy_dmaring*) ;
 int FUNC_1 (struct b43legacy_dmaring*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct b43legacy_dmaring *VAR_14)
{
 int VAR_15 = 0;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18 = VAR_14->dev->dma.translation;
 u32 VAR_19 = (u32)(VAR_14->dmabase);

 if (VAR_14->tx) {
  VAR_17 = (VAR_19 & VAR_12)
     >> VAR_13;
  VAR_16 = VAR_10;
  VAR_16 |= (VAR_17 << VAR_8)
   & VAR_7;
  FUNC_1(VAR_14, VAR_9, VAR_16);
  FUNC_1(VAR_14, VAR_11,
        (VAR_19 & ~VAR_12)
        | VAR_18);
 } else {
  VAR_15 = FUNC_0(VAR_14);
  if (VAR_15)
   goto out;

  VAR_17 = (VAR_19 & VAR_12)
     >> VAR_13;
  VAR_16 = (VAR_14->frameoffset <<
    VAR_4);
  VAR_16 |= VAR_3;
  VAR_16 |= (VAR_17 << VAR_1)
    & VAR_0;
  FUNC_1(VAR_14, VAR_2, VAR_16);
  FUNC_1(VAR_14, VAR_6,
        (VAR_19 & ~VAR_12)
        | VAR_18);
  FUNC_1(VAR_14, VAR_5, 200);
 }

out:
 return VAR_15;
}
