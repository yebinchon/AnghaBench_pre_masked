
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct armada_37xx_pinctrl {int ngroups; int nfuncs; TYPE_1__* data; int dev; int funcs; struct armada_37xx_pin_group* groups; } ;
struct armada_37xx_pin_group {int npins; int extra_npins; scalar_t__* funcs; scalar_t__ extra_pin; scalar_t__* pins; scalar_t__ start_pin; } ;
struct TYPE_2__ {int nr_pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__* FUNC_2 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct armada_37xx_pinctrl *VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = VAR_4->data->nr_pins;

 for (VAR_5 = 0; VAR_5 < VAR_4->ngroups; VAR_5++) {
  struct armada_37xx_pin_group *VAR_8 = &VAR_4->groups[VAR_5];
  int VAR_9, VAR_10, VAR_11;

  VAR_8->pins = FUNC_2(VAR_4->dev,
      VAR_8->npins + VAR_8->extra_npins,
      sizeof(*VAR_8->pins),
      VAR_2);
  if (!VAR_8->pins)
   return -VAR_0;

  for (VAR_9 = 0; VAR_9 < VAR_8->npins; VAR_9++)
   VAR_8->pins[VAR_9] = VAR_8->start_pin + VAR_9;

  for (VAR_10 = 0; VAR_10 < VAR_8->extra_npins; VAR_10++)
   VAR_8->pins[VAR_9+VAR_10] = VAR_8->extra_pin + VAR_10;

  for (VAR_11 = 0; (VAR_11 < VAR_3) && VAR_8->funcs[VAR_11]; VAR_11++) {
   int VAR_12;

   VAR_12 = FUNC_0(VAR_4->funcs, &VAR_7,
         VAR_8->funcs[VAR_11]);
   if (VAR_12 == -VAR_1)
    FUNC_1(VAR_4->dev,
     "More functions than pins(%d)\n",
     VAR_4->data->nr_pins);
   if (VAR_12 < 0)
    continue;
   VAR_6++;
  }
 }

 VAR_4->nfuncs = VAR_6;

 return 0;
}
