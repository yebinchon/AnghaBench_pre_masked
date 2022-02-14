
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_cgu_pll_ctrl {int pd; int bypass; int fbsel; int direct; int psel; int autoblock; int msel; int pllclksrc; } ;
typedef enum packing_op { ____Placeholder_packing_op } packing_op ;


 int FUNC_0 (void*,int *,int,int,int const,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct sja1105_cgu_pll_ctrl *VAR_1,
    enum packing_op VAR_2)
{
 const int VAR_3 = 4;

 FUNC_0(VAR_0, &VAR_1->pllclksrc, 28, 24, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->msel, 23, 16, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->autoblock, 11, 11, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->psel, 9, 8, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->direct, 7, 7, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->fbsel, 6, 6, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->bypass, 1, 1, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_1->pd, 0, 0, VAR_3, VAR_2);
}
