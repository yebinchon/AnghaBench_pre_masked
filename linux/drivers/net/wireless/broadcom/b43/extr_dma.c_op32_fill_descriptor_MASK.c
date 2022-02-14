
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43_dmaring {int nr_slots; TYPE_1__* dev; struct b43_dmadesc32* descbase; } ;
struct b43_dmadesc32 {void* address; void* control; } ;
struct b43_dmadesc_generic {struct b43_dmadesc32 dma32; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct b43_dmaring *VAR_9,
     struct b43_dmadesc_generic *VAR_10,
     dma_addr_t VAR_11, u16 VAR_12,
     int VAR_13, int VAR_14, int VAR_15)
{
 struct b43_dmadesc32 *VAR_16 = VAR_9->descbase;
 int VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;

 VAR_17 = (int)(&(VAR_10->dma32) - VAR_16);
 FUNC_0(!(VAR_17 >= 0 && VAR_17 < VAR_9->nr_slots));

 VAR_19 = FUNC_1(&VAR_9->dev->dma, VAR_11, VAR_8);
 VAR_20 = FUNC_1(&VAR_9->dev->dma, VAR_11, VAR_7);

 VAR_18 = VAR_12 & VAR_2;
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

 VAR_10->dma32.control = FUNC_2(VAR_18);
 VAR_10->dma32.address = FUNC_2(VAR_19);
}
