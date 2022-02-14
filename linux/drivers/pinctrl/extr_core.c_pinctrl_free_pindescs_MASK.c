
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_pin_desc {int number; } ;
struct pinctrl_dev {int pin_desc_tree; } ;
struct pin_desc {struct pin_desc* name; scalar_t__ dynamic_name; } ;


 int FUNC_0 (struct pin_desc*) ;
 int FUNC_1 (int *,int ) ;
 struct pin_desc* FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_0,
      const struct pinctrl_pin_desc *VAR_1,
      unsigned VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  struct pin_desc *VAR_4;

  VAR_4 = FUNC_2(&VAR_0->pin_desc_tree,
         VAR_1[VAR_3].number);
  if (VAR_4) {
   FUNC_1(&VAR_0->pin_desc_tree,
       VAR_1[VAR_3].number);
   if (VAR_4->dynamic_name)
    FUNC_0(VAR_4->name);
  }
  FUNC_0(VAR_4);
 }
}
