
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
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xgene_enet_desc_ring*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct xgene_enet_desc_ring *VAR_6)
{
 u32 VAR_7, VAR_8;
 bool VAR_9;

 if (FUNC_2(VAR_6->id) == VAR_5)
  return;

 VAR_9 = FUNC_1(VAR_6->id);

 VAR_7 = VAR_6->id & FUNC_0(9, 0);
 VAR_7 |= VAR_3;

 VAR_8 = (VAR_6->num << 9) & FUNC_0(18, 9);
 VAR_8 |= VAR_4;

 if (VAR_9)
  VAR_8 |= VAR_2;

 FUNC_3(VAR_6, VAR_0, VAR_7);
 FUNC_3(VAR_6, VAR_1, VAR_8);
}
