
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xgene_enet_pdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct xgene_enet_pdata*,int ,int *) ;
 int FUNC_7 (struct xgene_enet_pdata*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct xgene_enet_pdata *VAR_3,
        u32 VAR_4, u16 VAR_5,
        u16 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 FUNC_6(VAR_3, VAR_1, &VAR_7);
 VAR_7 |= VAR_0;
 FUNC_2(&VAR_7, 3);
 FUNC_7(VAR_3, VAR_1, VAR_7);

 VAR_8 = FUNC_5(VAR_5);
 VAR_9 = FUNC_5(VAR_6);
 FUNC_6(VAR_3, VAR_2, &VAR_7);
 FUNC_0(&VAR_7, VAR_4);
 FUNC_1(&VAR_7, VAR_8);
 FUNC_3(&VAR_7, VAR_9);
 FUNC_7(VAR_3, VAR_2, VAR_7);
 FUNC_4("+ cle_bypass: fpsel: %d nxtfpsel: %d\n", VAR_8, VAR_9);
}
