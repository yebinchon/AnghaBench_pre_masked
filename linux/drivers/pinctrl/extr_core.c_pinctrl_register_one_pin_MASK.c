
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_pin_desc {int number; int drv_data; scalar_t__ name; } ;
struct pinctrl_dev {TYPE_1__* desc; int pin_desc_tree; int dev; } ;
struct pin_desc {int dynamic_name; scalar_t__ name; int drv_data; struct pinctrl_dev* pctldev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct pin_desc*) ;
 struct pin_desc* FUNC_3 (int,int ) ;
 struct pin_desc* FUNC_4 (struct pinctrl_dev*,int ) ;
 int FUNC_5 (char*,int ,scalar_t__,int ) ;
 int FUNC_6 (int *,int ,struct pin_desc*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_3,
        const struct pinctrl_pin_desc *VAR_4)
{
 struct pin_desc *VAR_5;

 VAR_5 = FUNC_4(VAR_3, VAR_4->number);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "pin %d already registered\n",
   VAR_4->number);
  return -VAR_0;
 }

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;


 VAR_5->pctldev = VAR_3;


 if (VAR_4->name) {
  VAR_5->name = VAR_4->name;
 } else {
  VAR_5->name = FUNC_1(VAR_2, "PIN%u", VAR_4->number);
  if (!VAR_5->name) {
   FUNC_2(VAR_5);
   return -VAR_1;
  }
  VAR_5->dynamic_name = 1;
 }

 VAR_5->drv_data = VAR_4->drv_data;

 FUNC_6(&VAR_3->pin_desc_tree, VAR_4->number, VAR_5);
 FUNC_5("registered pin %d (%s) on %s\n",
   VAR_4->number, VAR_5->name, VAR_3->desc->name);
 return 0;
}
