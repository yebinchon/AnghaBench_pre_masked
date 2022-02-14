
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct emac_adapter {int dma_order; scalar_t__ base; scalar_t__ dmaw_dly_cnt; scalar_t__ dmar_dly_cnt; scalar_t__ dmaw_block; scalar_t__ dmar_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct emac_adapter *VAR_13)
{
 u32 VAR_14 = VAR_2;

 switch (VAR_13->dma_order) {
 case 129:
  VAR_14 |= VAR_7;
  break;
 case 130:
  VAR_14 |= VAR_6;
  break;
 case 128:
  VAR_14 |= VAR_8;
  break;
 default:
  break;
 }

 VAR_14 |= (((u32)VAR_13->dmar_block) << VAR_10) &
      VAR_9;
 VAR_14 |= (((u32)VAR_13->dmaw_block) << VAR_12) &
      VAR_11;
 VAR_14 |= (((u32)VAR_13->dmar_dly_cnt) << VAR_1) &
      VAR_0;
 VAR_14 |= (((u32)VAR_13->dmaw_dly_cnt) << VAR_4) &
      VAR_3;


 FUNC_0(VAR_14, VAR_13->base + VAR_5);
}
