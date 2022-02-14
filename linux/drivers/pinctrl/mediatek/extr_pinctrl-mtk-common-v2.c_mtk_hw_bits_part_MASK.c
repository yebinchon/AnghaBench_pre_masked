
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pin_field {int bitpos; int mask; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_pin_field *VAR_0, int *VAR_1, int *VAR_2)
{
 *VAR_2 = 32 - VAR_0->bitpos;
 *VAR_1 = FUNC_0(VAR_0->mask) - *VAR_2;
}
