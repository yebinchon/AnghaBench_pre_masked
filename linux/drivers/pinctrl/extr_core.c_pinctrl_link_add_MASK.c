
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ link_consumers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pinctrl_dev *VAR_2,
        struct device *VAR_3)
{
 if (VAR_2->desc->link_consumers)
  FUNC_0(VAR_3, VAR_2->dev,
    VAR_1 |
    VAR_0);
}
