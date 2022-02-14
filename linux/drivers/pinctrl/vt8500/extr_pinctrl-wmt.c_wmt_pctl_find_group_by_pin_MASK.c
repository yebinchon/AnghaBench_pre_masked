
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wmt_pinctrl_data {int npins; TYPE_1__* pins; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct wmt_pinctrl_data *VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->npins; VAR_3++) {
  if (VAR_1->pins[VAR_3].number == VAR_2)
   return VAR_3;
 }

 return -VAR_0;
}
