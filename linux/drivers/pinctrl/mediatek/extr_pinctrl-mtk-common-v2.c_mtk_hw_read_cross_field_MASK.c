
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pinctrl {int dummy; } ;
struct mtk_pin_field {int bitpos; scalar_t__ next; scalar_t__ offset; int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mtk_pin_field*,int*,int*) ;
 int FUNC_2 (struct mtk_pinctrl*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mtk_pinctrl *VAR_0,
        struct mtk_pin_field *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 FUNC_1(VAR_1, &VAR_4, &VAR_3);

 VAR_6 = (FUNC_2(VAR_0, VAR_1->index, VAR_1->offset)
       >> VAR_1->bitpos) & (FUNC_0(VAR_3) - 1);
 VAR_5 = (FUNC_2(VAR_0, VAR_1->index, VAR_1->offset + VAR_1->next))
       & (FUNC_0(VAR_4) - 1);

 *VAR_2 = (VAR_5 << VAR_3) | VAR_6;
}
