
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac_dma_ring {scalar_t__ mmio_base; } ;
struct bgmac {int feature_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_0 (struct bgmac*,scalar_t__) ;
 int FUNC_1 (struct bgmac*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct bgmac *VAR_17,
    struct bgmac_dma_ring *VAR_18)
{
 u32 VAR_19;

 VAR_19 = FUNC_0(VAR_17, VAR_18->mmio_base + VAR_4);


 VAR_19 &= VAR_0;

 if (VAR_17->feature_flags & VAR_15) {
  VAR_19 &= ~VAR_2;
  VAR_19 |= VAR_1 << VAR_3;

  VAR_19 &= ~VAR_10;
  VAR_19 |= VAR_9 << VAR_11;

  VAR_19 &= ~VAR_13;
  VAR_19 |= VAR_12 << VAR_14;
 }
 VAR_19 |= VAR_5;
 VAR_19 |= VAR_8;
 VAR_19 |= VAR_7;
 VAR_19 |= VAR_16 << VAR_6;
 FUNC_1(VAR_17, VAR_18->mmio_base + VAR_4, VAR_19);
}
