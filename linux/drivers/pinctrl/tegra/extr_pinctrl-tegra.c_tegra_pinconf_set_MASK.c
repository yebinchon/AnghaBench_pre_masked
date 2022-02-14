
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
        unsigned VAR_2, unsigned long *VAR_3,
        unsigned VAR_4)
{
 FUNC_0(VAR_1->dev, "pin_config_set op not supported\n");
 return -VAR_0;
}
