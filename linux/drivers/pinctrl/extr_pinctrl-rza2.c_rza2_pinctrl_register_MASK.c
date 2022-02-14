
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int npins; struct pinctrl_pin_desc* pins; } ;
struct rza2_pinctrl_priv {unsigned int npins; int dev; int pctl; TYPE_1__ desc; struct pinctrl_pin_desc* pins; } ;
struct pinctrl_pin_desc {unsigned int number; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct pinctrl_pin_desc* FUNC_1 (int ,unsigned int,int,int ) ;
 int FUNC_2 (int ,TYPE_1__*,struct rza2_pinctrl_priv*,int *) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;
 int FUNC_4 (struct rza2_pinctrl_priv*) ;

__attribute__((used)) static int FUNC_5(struct rza2_pinctrl_priv *VAR_3)
{
 struct pinctrl_pin_desc *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3->dev, VAR_3->npins, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->pins = VAR_4;
 VAR_3->desc.pins = VAR_4;
 VAR_3->desc.npins = VAR_3->npins;

 for (VAR_5 = 0; VAR_5 < VAR_3->npins; VAR_5++) {
  VAR_4[VAR_5].number = VAR_5;
  VAR_4[VAR_5].name = VAR_2[VAR_5];
 }

 VAR_6 = FUNC_2(VAR_3->dev, &VAR_3->desc, VAR_3,
          &VAR_3->pctl);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "pinctrl registration failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_3->pctl);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "pinctrl enable failed\n");
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "GPIO registration failed\n");
  return VAR_6;
 }

 return 0;
}
