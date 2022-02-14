
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct wmt_pinctrl_data {int * groups; int dev; } ;
struct TYPE_3__ {int function; int group; } ;
struct TYPE_4__ {TYPE_1__ mux; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct device_node {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,size_t) ;
 int * VAR_2 ;
 int FUNC_2 (struct wmt_pinctrl_data*,size_t) ;

__attribute__((used)) static int FUNC_3(struct wmt_pinctrl_data *VAR_3,
     struct device_node *VAR_4,
     u32 VAR_5, u32 VAR_6,
     struct pinctrl_map **VAR_7)
{
 int VAR_8;
 struct pinctrl_map *VAR_9 = *VAR_7;

 if (VAR_6 >= FUNC_0(VAR_2)) {
  FUNC_1(VAR_3->dev, "invalid wm,function %d\n", VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_5);
 if (VAR_8 < 0) {
  FUNC_1(VAR_3->dev, "unable to match pin %d to group\n", VAR_5);
  return VAR_8;
 }

 VAR_9->type = VAR_1;
 VAR_9->data.mux.group = VAR_3->groups[VAR_8];
 VAR_9->data.mux.function = VAR_2[VAR_6];
 (*VAR_7)++;

 return 0;
}
