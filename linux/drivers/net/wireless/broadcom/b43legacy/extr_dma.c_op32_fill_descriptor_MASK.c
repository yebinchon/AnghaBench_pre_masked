
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43legacy_dmaring {int nr_slots; int frameoffset; TYPE_2__* dev; struct b43legacy_dmadesc32* descbase; } ;
struct b43legacy_dmadesc32 {void* address; void* control; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int translation; } ;
struct TYPE_4__ {TYPE_1__ dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_dmaring *VAR_9,
     struct b43legacy_dmadesc32 *VAR_10,
     dma_addr_t VAR_11, u16 VAR_12,
     int VAR_13, int VAR_14, int VAR_15)
{
 struct b43legacy_dmadesc32 *VAR_16 = VAR_9->descbase;
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;

 VAR_17 = (int)(VAR_10 - VAR_16);
 FUNC_0(!(VAR_17 >= 0 && VAR_17 < VAR_9->nr_slots));

 VAR_19 = (u32)(VAR_11 & ~VAR_7);
 VAR_20 = (u32)(VAR_11 & VAR_7)
     >> VAR_8;
 VAR_19 |= VAR_9->dev->dma.translation;
 VAR_18 = (VAR_12 - VAR_9->frameoffset)
       & VAR_2;
 if (VAR_17 == VAR_9->nr_slots - 1)
  VAR_18 |= VAR_3;
 if (VAR_13)
  VAR_18 |= VAR_5;
 if (VAR_14)
  VAR_18 |= VAR_4;
 if (VAR_15)
  VAR_18 |= VAR_6;
 VAR_18 |= (VAR_20 << VAR_1)
        & VAR_0;

 VAR_10->control = FUNC_1(VAR_18);
 VAR_10->address = FUNC_1(VAR_19);
}
