
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xgene_enet_desc_ring {int* state; int dma; int cfgsize; } ;
typedef enum xgene_enet_ring_cfgsize { ____Placeholder_xgene_enet_ring_cfgsize } xgene_enet_ring_cfgsize ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_desc_ring *VAR_10)
{
 u32 *VAR_11 = VAR_10->state;
 u64 VAR_12 = VAR_10->dma;
 enum xgene_enet_ring_cfgsize VAR_13 = VAR_10->cfgsize;

 VAR_11[4] |= (1 << VAR_9) &
   FUNC_0(VAR_9, VAR_8);
 VAR_11[3] |= VAR_0;
 VAR_11[2] |= VAR_1;

 VAR_12 >>= 8;
 VAR_11[2] |= (VAR_12 << VAR_5) &
   FUNC_1(VAR_5, VAR_4);
 VAR_12 >>= VAR_4;
 VAR_11[3] |= VAR_12 & FUNC_1(VAR_3, VAR_2);
 VAR_11[3] |= ((u32)VAR_13 << VAR_7) &
   FUNC_0(VAR_7, VAR_6);
}
