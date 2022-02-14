
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct axp20x_pctl {TYPE_1__* desc; TYPE_2__* funcs; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {char* name; int ngroups; int * groups; int muxval; } ;
struct TYPE_4__ {int npins; TYPE_3__* pins; int adc_mask; int ldo_mask; int adc_mux; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int,TYPE_2__*,TYPE_3__*) ;
 int * FUNC_1 (int *,int,int,int ) ;
 struct axp20x_pctl* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_8)
{
 struct axp20x_pctl *VAR_9 = FUNC_2(VAR_8);
 int VAR_10, VAR_11, VAR_12, VAR_13 = VAR_9->desc->npins;

 VAR_9->funcs[VAR_2].name = "gpio_out";
 VAR_9->funcs[VAR_2].muxval = VAR_5;
 VAR_9->funcs[VAR_1].name = "gpio_in";
 VAR_9->funcs[VAR_1].muxval = VAR_4;
 VAR_9->funcs[VAR_3].name = "ldo";




 VAR_9->funcs[VAR_0].name = "adc";
 VAR_9->funcs[VAR_0].muxval = VAR_9->desc->adc_mux;


 for (VAR_10 = 0; VAR_10 <= VAR_1; VAR_10++) {
  VAR_9->funcs[VAR_10].ngroups = VAR_13;
  VAR_9->funcs[VAR_10].groups = FUNC_1(&VAR_8->dev,
           VAR_13, sizeof(char *),
           VAR_7);
  if (!VAR_9->funcs[VAR_10].groups)
   return -VAR_6;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   VAR_9->funcs[VAR_10].groups[VAR_12] = VAR_9->desc->pins[VAR_12].name;
 }

 VAR_11 = FUNC_0(&VAR_8->dev, VAR_9->desc->ldo_mask,
          VAR_13, &VAR_9->funcs[VAR_3],
          VAR_9->desc->pins);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_0(&VAR_8->dev, VAR_9->desc->adc_mask,
          VAR_13, &VAR_9->funcs[VAR_0],
          VAR_9->desc->pins);
 if (VAR_11)
  return VAR_11;

 return 0;
}
