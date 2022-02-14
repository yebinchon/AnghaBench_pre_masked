
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct berlin_pinctrl_function {int name; } ;
struct berlin_pinctrl {int regmap; struct berlin_pinctrl_function* functions; TYPE_1__* desc; } ;
struct berlin_desc_group {int lsb; int offset; scalar_t__ bit_width; } ;
struct berlin_desc_function {int muxval; } ;
struct TYPE_2__ {struct berlin_desc_group* groups; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 struct berlin_desc_function* FUNC_1 (struct berlin_pinctrl*,struct berlin_desc_group const*,int ) ;
 struct berlin_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
        unsigned VAR_2,
        unsigned VAR_3)
{
 struct berlin_pinctrl *VAR_4 = FUNC_2(VAR_1);
 const struct berlin_desc_group *VAR_5 = VAR_4->desc->groups + VAR_3;
 struct berlin_pinctrl_function *VAR_6 = VAR_4->functions + VAR_2;
 struct berlin_desc_function *VAR_7 =
  FUNC_1(VAR_4, VAR_5,
           VAR_6->name);
 u32 VAR_8, VAR_9;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_5->lsb + VAR_5->bit_width - 1,
         VAR_5->lsb);
 VAR_9 = VAR_7->muxval << VAR_5->lsb;
 FUNC_3(VAR_4->regmap, VAR_5->offset, VAR_8, VAR_9);

 return 0;
}
