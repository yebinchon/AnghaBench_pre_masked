
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
struct mtk_pinctrl_group {int name; } ;
struct mtk_pinctrl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int * VAR_3 ;
 int FUNC_1 (struct mtk_pinctrl*,size_t,size_t) ;

__attribute__((used)) static int FUNC_2(struct mtk_pinctrl *VAR_4,
  u32 VAR_5, u32 VAR_6, struct mtk_pinctrl_group *VAR_7,
  struct pinctrl_map **VAR_8, unsigned *VAR_9,
  unsigned *VAR_10)
{
 bool VAR_11;

 if (*VAR_10 == *VAR_9)
  return -VAR_1;

 (*VAR_8)[*VAR_10].type = VAR_2;
 (*VAR_8)[*VAR_10].data.mux.group = VAR_7->name;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (!VAR_11) {
  FUNC_0(VAR_4->dev, "invalid function %d on pin %d .\n",
    VAR_6, VAR_5);
  return -VAR_0;
 }

 (*VAR_8)[*VAR_10].data.mux.function = VAR_3[VAR_6];
 (*VAR_10)++;

 return 0;
}
