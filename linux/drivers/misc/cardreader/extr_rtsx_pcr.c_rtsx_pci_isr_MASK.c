
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_pcr {int bier; int card_inserted; int card_removed; int lock; int carddet_work; scalar_t__ done; int trans_result; scalar_t__ dma_error_count; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*,int ) ;
 int FUNC_4 (struct rtsx_pcr*,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_14, void *VAR_15)
{
 struct rtsx_pcr *VAR_16 = VAR_15;
 u32 VAR_17;

 if (!VAR_16)
  return VAR_2;

 FUNC_6(&VAR_16->lock);

 VAR_17 = FUNC_3(VAR_16, VAR_6);

 FUNC_4(VAR_16, VAR_6, VAR_17);
 if ((VAR_17 & VAR_16->bier) == 0) {
  FUNC_7(&VAR_16->lock);
  return VAR_2;
 }
 if (VAR_17 == 0xFFFFFFFF) {
  FUNC_7(&VAR_16->lock);
  return VAR_1;
 }

 VAR_17 &= (VAR_16->bier | 0x7FFFFF);

 if (VAR_17 & VAR_9)
  FUNC_2(VAR_16);

 if (VAR_17 & VAR_8) {
  if (VAR_17 & VAR_7) {
   VAR_16->card_inserted |= VAR_7;
  } else {
   VAR_16->card_removed |= VAR_7;
   VAR_16->card_inserted &= ~VAR_7;
  }
  VAR_16->dma_error_count = 0;
 }

 if (VAR_17 & VAR_4) {
  if (VAR_17 & VAR_3) {
   VAR_16->card_inserted |= VAR_3;
  } else {
   VAR_16->card_removed |= VAR_3;
   VAR_16->card_inserted &= ~VAR_3;
  }
 }

 if (VAR_17 & (VAR_5 | VAR_0)) {
  if (VAR_17 & (VAR_10 | VAR_0)) {
   VAR_16->trans_result = VAR_12;
   if (VAR_16->done)
    FUNC_0(VAR_16->done);
  } else if (VAR_17 & VAR_11) {
   VAR_16->trans_result = VAR_13;
   if (VAR_16->done)
    FUNC_0(VAR_16->done);
  }
 }

 if ((VAR_16->card_inserted || VAR_16->card_removed) && !(VAR_17 & VAR_9))
  FUNC_5(&VAR_16->carddet_work,
    FUNC_1(200));

 FUNC_7(&VAR_16->lock);
 return VAR_1;
}
