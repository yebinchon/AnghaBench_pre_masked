
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct imx1_pinctrl {int dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct imx1_pinctrl*,unsigned int,unsigned long,int ) ;
 TYPE_1__* FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 struct imx1_pinctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
        unsigned VAR_2, unsigned long *VAR_3,
        unsigned VAR_4)
{
 struct imx1_pinctrl *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 != VAR_4; ++VAR_6) {
  FUNC_1(VAR_5, VAR_2, VAR_3[VAR_6] & 0x01, VAR_0);

  FUNC_0(VAR_5->dev, "pinconf set pullup pin %s\n",
   FUNC_2(VAR_1, VAR_2)->name);
 }

 return 0;
}
