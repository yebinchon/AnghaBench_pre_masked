
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct pinctrl_pin_desc {int number; int name; } ;
struct at91_pinctrl {int nactive_banks; int pctl; } ;
struct TYPE_5__ {int npins; struct pinctrl_pin_desc* pins; int name; } ;
struct TYPE_4__ {int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_2 (struct platform_device*,struct at91_pinctrl*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int,int) ;
 struct pinctrl_pin_desc* FUNC_7 (int *,int,int,int ) ;
 int FUNC_8 (int *,struct at91_pinctrl*) ;
 struct at91_pinctrl* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,TYPE_2__*,struct at91_pinctrl*) ;
 int VAR_5 ;
 TYPE_1__** VAR_6 ;
 int FUNC_11 (int ,char*,int,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct platform_device*,struct at91_pinctrl*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct at91_pinctrl *VAR_8;
 struct pinctrl_pin_desc *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14 = 0;

 VAR_8 = FUNC_9(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_7, VAR_8);
 if (VAR_10)
  return VAR_10;






 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  if (VAR_6[VAR_11])
   VAR_14++;

 if (VAR_14 < VAR_8->nactive_banks) {
  FUNC_6(&VAR_7->dev,
    "All GPIO chips are not registered yet (%d/%d)\n",
    VAR_14, VAR_8->nactive_banks);
  FUNC_8(&VAR_7->dev, VAR_8);
  return -VAR_1;
 }

 VAR_4.name = FUNC_5(&VAR_7->dev);
 VAR_4.npins = VAR_5 * VAR_3;
 VAR_4.pins = VAR_9 =
  FUNC_7(&VAR_7->dev,
        VAR_4.npins, sizeof(*VAR_9),
        VAR_2);

 if (!VAR_4.pins)
  return -VAR_0;

 for (VAR_11 = 0, VAR_13 = 0; VAR_11 < VAR_5; VAR_11++) {
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++, VAR_13++) {
   VAR_9->number = VAR_13;
   VAR_9->name = FUNC_11(VAR_2, "pio%c%d", VAR_11 + 'A', VAR_12);
   VAR_9++;
  }
 }

 FUNC_13(VAR_7, VAR_8);
 VAR_8->pctl = FUNC_10(&VAR_7->dev, &VAR_4,
        VAR_8);

 if (FUNC_0(VAR_8->pctl)) {
  FUNC_3(&VAR_7->dev, "could not register AT91 pinctrl driver\n");
  return FUNC_1(VAR_8->pctl);
 }


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
  if (VAR_6[VAR_11])
   FUNC_12(VAR_8->pctl, &VAR_6[VAR_11]->range);

 FUNC_4(&VAR_7->dev, "initialized AT91 pinctrl driver\n");

 return 0;
}
