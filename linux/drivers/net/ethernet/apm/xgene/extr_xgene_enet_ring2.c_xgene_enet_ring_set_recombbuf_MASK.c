
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_desc_ring {int * state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_desc_ring *VAR_2)
{
 u32 *VAR_3 = VAR_2->state;

 VAR_3[3] |= VAR_0;
 VAR_3[4] |= FUNC_0(VAR_1, 0x7);
}
