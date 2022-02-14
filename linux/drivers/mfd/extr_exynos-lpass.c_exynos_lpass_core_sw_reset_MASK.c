
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_lpass {int top; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct exynos_lpass *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = 0;

 FUNC_0(VAR_1->top, VAR_0, &VAR_3);

 VAR_3 &= ~VAR_2;
 FUNC_1(VAR_1->top, VAR_0, VAR_3);

 FUNC_2(100, 150);

 VAR_3 |= VAR_2;
 FUNC_1(VAR_1->top, VAR_0, VAR_3);
}
