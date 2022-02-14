
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int function; int group; } ;
struct TYPE_4__ {TYPE_1__ mux; } ;
struct pinctrl_map {TYPE_2__ data; int type; } ;
struct device_node {int dummy; } ;
struct bcm2835_pinctrl {int dev; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,char*,struct device_node*,size_t) ;

__attribute__((used)) static int FUNC_2(struct bcm2835_pinctrl *VAR_4,
  struct device_node *VAR_5, u32 VAR_6, u32 VAR_7,
  struct pinctrl_map **VAR_8)
{
 struct pinctrl_map *VAR_9 = *VAR_8;

 if (VAR_7 >= FUNC_0(VAR_2)) {
  FUNC_1(VAR_4->dev, "%pOF: invalid brcm,function %d\n", VAR_5, VAR_7);
  return -VAR_0;
 }

 VAR_9->type = VAR_1;
 VAR_9->data.mux.group = VAR_3[VAR_6];
 VAR_9->data.mux.function = VAR_2[VAR_7];
 (*VAR_8)++;

 return 0;
}
