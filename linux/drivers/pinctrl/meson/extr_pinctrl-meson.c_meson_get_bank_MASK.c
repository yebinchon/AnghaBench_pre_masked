
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_pinctrl {TYPE_1__* data; } ;
struct meson_bank {unsigned int first; unsigned int last; } ;
struct TYPE_2__ {int num_banks; struct meson_bank* banks; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct meson_pinctrl *VAR_1, unsigned int VAR_2,
     struct meson_bank **VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->data->num_banks; VAR_4++) {
  if (VAR_2 >= VAR_1->data->banks[VAR_4].first &&
      VAR_2 <= VAR_1->data->banks[VAR_4].last) {
   *VAR_3 = &VAR_1->data->banks[VAR_4];
   return 0;
  }
 }

 return -VAR_0;
}
