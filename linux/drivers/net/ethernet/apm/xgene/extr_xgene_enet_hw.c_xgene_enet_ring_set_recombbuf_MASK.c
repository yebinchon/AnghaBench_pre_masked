
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_desc_ring {int* state; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_desc_ring *VAR_5)
{
 u32 *VAR_6 = VAR_5->state;

 VAR_6[3] |= VAR_0;
 VAR_6[3] |= (0xf << VAR_4) &
   FUNC_0(VAR_4, VAR_3);
 VAR_6[4] |= 0x7 & FUNC_0(VAR_2, VAR_1);
}
