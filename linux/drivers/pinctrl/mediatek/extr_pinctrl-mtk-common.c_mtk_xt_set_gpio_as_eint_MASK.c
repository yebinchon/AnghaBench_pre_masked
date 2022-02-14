
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_pinctrl {int pctl_dev; } ;
struct TYPE_3__ {int number; } ;
struct TYPE_4__ {int eintmux; } ;
struct mtk_desc_pin {TYPE_1__ pin; TYPE_2__ eint; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_desc_pin* FUNC_0 (struct mtk_pinctrl*,unsigned long) ;
 int FUNC_1 (struct mtk_pinctrl*,int ,int,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, unsigned long VAR_3)
{
 struct mtk_pinctrl *VAR_4 = (struct mtk_pinctrl *)VAR_2;
 const struct mtk_desc_pin *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;


 FUNC_3(VAR_4->pctl_dev, VAR_5->pin.number, VAR_5->eint.eintmux);

 FUNC_2(VAR_4->pctl_dev, ((void*)0), VAR_5->pin.number,
       1);

 FUNC_1(VAR_4, VAR_5->pin.number, 1,
         VAR_1);

 return 0;
}
