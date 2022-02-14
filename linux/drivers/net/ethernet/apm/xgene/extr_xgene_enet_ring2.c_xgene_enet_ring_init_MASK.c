
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xgene_enet_desc_ring {int* state; int dma; int id; int cfgsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_desc_ring *VAR_13)
{
 u32 *VAR_14 = VAR_13->state;
 u64 VAR_15 = VAR_13->dma;

 if (FUNC_2(VAR_13->id) == VAR_6) {
  VAR_14[0] |= FUNC_1(VAR_9, VAR_13->id & VAR_5);
  VAR_14[3] |= FUNC_0(VAR_8);
 }
 VAR_14[0] |= FUNC_1(VAR_7, 2);

 VAR_15 >>= 8;
 VAR_14[2] |= VAR_1 | FUNC_1(VAR_3, VAR_15);

 VAR_15 >>= 27;
 VAR_14[3] |= FUNC_1(VAR_4, VAR_13->cfgsize)
      | VAR_0
      | FUNC_1(VAR_2, VAR_15);
 VAR_14[4] |= FUNC_1(VAR_12, 1);
 VAR_14[5] |= FUNC_0(VAR_11) | FUNC_0(VAR_10);
}
