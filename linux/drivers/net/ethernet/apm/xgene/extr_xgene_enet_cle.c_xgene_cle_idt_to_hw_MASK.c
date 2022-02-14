
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {scalar_t__ enet_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_1(struct xgene_enet_pdata *VAR_6,
    u32 VAR_7, u32 VAR_8,
    u32 VAR_9, u32 *VAR_10)
{
 if (VAR_6->enet_id == VAR_5) {
  *VAR_10 = FUNC_0(VAR_0, VAR_7) |
      FUNC_0(VAR_2, VAR_8) |
      FUNC_0(VAR_4, VAR_9);
 } else {
  *VAR_10 = FUNC_0(VAR_0, VAR_7) |
      FUNC_0(VAR_1, VAR_8) |
      FUNC_0(VAR_3, VAR_9);
 }
}
