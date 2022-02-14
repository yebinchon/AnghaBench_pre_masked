
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xgene_enet_pdata {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct xgene_enet_pdata*,scalar_t__,int*) ;
 int FUNC_2 (struct xgene_enet_pdata*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_pdata *VAR_4,
    u16 VAR_5, u8 VAR_6)
{
 u8 VAR_7;
 u32 VAR_8;

 VAR_7 = (VAR_6 < 2) ? 0 : 4;
 FUNC_1(VAR_4, VAR_3 + VAR_7, &VAR_8);

 if (!(VAR_6 & 0x1))
  VAR_8 = FUNC_0(VAR_1, VAR_8 >> VAR_2) |
   FUNC_0(VAR_0, VAR_5);
 else
  VAR_8 = FUNC_0(VAR_1, VAR_5) | FUNC_0(VAR_0, VAR_8);

 FUNC_2(VAR_4, VAR_3 + VAR_7, VAR_8);
}
