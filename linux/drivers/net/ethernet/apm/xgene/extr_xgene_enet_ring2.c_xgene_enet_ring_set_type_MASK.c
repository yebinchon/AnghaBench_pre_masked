
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_desc_ring {int id; int * state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_desc_ring *VAR_5)
{
 u32 *VAR_6 = VAR_5->state;
 bool VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_1(VAR_5->id);
 VAR_8 = (VAR_7) ? VAR_2 : VAR_3;
 VAR_6[4] |= FUNC_0(VAR_4, VAR_8);
 if (VAR_7)
  VAR_6[3] |= FUNC_0(VAR_1, VAR_0);
}
