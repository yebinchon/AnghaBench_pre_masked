
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_ios {int dummy; } ;
struct dw_mci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dw_mci*,int ) ;
 int FUNC_2 (struct dw_mci*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct dw_mci *VAR_5, struct mmc_ios *VAR_6)
{
 u32 VAR_7;


 VAR_7 = FUNC_1(VAR_5, VAR_2);
 VAR_7 &= ~VAR_4;
 VAR_7 |= FUNC_0(VAR_4,
     VAR_1);
 VAR_7 &= ~VAR_3;
 VAR_7 |= FUNC_0(VAR_3, VAR_0);
 FUNC_2(VAR_5, VAR_2, VAR_7);
}
