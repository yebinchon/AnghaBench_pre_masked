
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_desc_ring {int id; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xgene_enet_desc_ring*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_desc_ring *VAR_5)
{
 u32 VAR_6, VAR_7;
 bool VAR_8;

 VAR_8 = FUNC_1(VAR_5->id);

 VAR_6 = VAR_5->id & FUNC_0(9, 0);
 VAR_6 |= VAR_3;

 VAR_7 = (VAR_5->num << 9) & FUNC_0(18, 9);
 VAR_7 |= VAR_4;
 if (VAR_8)
  VAR_7 |= VAR_2;

 FUNC_2(VAR_5, VAR_0, VAR_6);
 FUNC_2(VAR_5, VAR_1, VAR_7);
}
