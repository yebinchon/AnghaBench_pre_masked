
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abx500_pinrange {unsigned int offset; int npins; } ;
struct abx500_pinctrl_soc_data {int gpio_num_ranges; struct abx500_pinrange* gpio_ranges; } ;



__attribute__((used)) static int FUNC_0(struct abx500_pinctrl_soc_data *VAR_0)
{
 unsigned int VAR_1 = 0;
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = 0;
 int VAR_4;







 for (VAR_4 = 0; VAR_4 < VAR_0->gpio_num_ranges; VAR_4++) {
  unsigned VAR_5;
  unsigned VAR_6;
  const struct abx500_pinrange *VAR_7;

  VAR_7 = &VAR_0->gpio_ranges[VAR_4];
  VAR_5 = VAR_7->offset;
  VAR_6 = VAR_7->offset + VAR_7->npins - 1;

  if (VAR_4 == 0) {

   VAR_1 = VAR_5;
   VAR_2 = VAR_6;
  } else {
   if (VAR_5 < VAR_1)
    VAR_1 = VAR_5;
   if (VAR_6 > VAR_2)
    VAR_2 = VAR_6;
  }
 }

 VAR_3 = VAR_2 - VAR_1 + 1;
 return VAR_3;
}
