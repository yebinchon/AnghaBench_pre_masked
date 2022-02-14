
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_desc_ring {int* state; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_desc_ring *VAR_7)
{
 u32 *VAR_8 = VAR_7->state;
 bool VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_1(VAR_7->id);
 VAR_10 = (VAR_9) ? VAR_5 : VAR_6;
 VAR_8[4] |= (VAR_10 << VAR_4) &
   FUNC_0(VAR_4, VAR_3);

 if (VAR_9) {
  VAR_8[3] |= (VAR_0 << VAR_2) &
    FUNC_0(VAR_2, VAR_1);
 }
}
