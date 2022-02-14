
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {struct mvebu_pinctrl_soc_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct mvebu_pinctrl_soc_info {unsigned int variant; int nmodes; void* ngpioranges; TYPE_2__* gpioranges; void* modes; void* ncontrols; TYPE_2__* controls; } ;
struct TYPE_13__ {int npins; } ;


 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 void* VAR_4 ;
 struct mvebu_pinctrl_soc_info VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int,int,int ) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 TYPE_2__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_2__* VAR_15 ;
 void* VAR_16 ;
 int FUNC_3 (struct platform_device*) ;
 struct of_device_id* FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_17)
{
 struct mvebu_pinctrl_soc_info *VAR_18 = &VAR_5;
 const struct of_device_id *VAR_19 =
  FUNC_4(VAR_6, &VAR_17->dev);
 int VAR_20;

 if (!VAR_19)
  return -VAR_0;

 VAR_18->variant = (unsigned) VAR_19->data & 0xff;

 switch (VAR_18->variant) {
 case 130:
  VAR_18->controls = VAR_8;
  VAR_18->ncontrols = FUNC_0(VAR_8);
  VAR_18->modes = VAR_4;



  VAR_18->nmodes = VAR_8[0].npins;
  VAR_18->gpioranges = VAR_9;
  VAR_18->ngpioranges = FUNC_0(VAR_9);
  break;
 case 129:
  VAR_18->controls = VAR_10;
  VAR_18->ncontrols = FUNC_0(VAR_10);
  VAR_18->modes = VAR_4;



  VAR_18->nmodes = VAR_10[0].npins;
  VAR_18->gpioranges = VAR_11;
  VAR_18->ngpioranges = FUNC_0(VAR_11);
  break;
 case 128:
  VAR_18->controls = VAR_12;
  VAR_18->ncontrols = FUNC_0(VAR_12);
  VAR_18->modes = VAR_4;



  VAR_18->nmodes = VAR_12[0].npins;
  VAR_18->gpioranges = VAR_13;
  VAR_18->ngpioranges = FUNC_0(VAR_13);
  break;
 case 133:
 case 132:
 case 131:

  VAR_18->controls = VAR_14;
  VAR_18->ncontrols = FUNC_0(VAR_14);
  VAR_18->modes = VAR_16;
  VAR_18->nmodes = VAR_14[0].npins;
  VAR_18->gpioranges = VAR_15;
  VAR_18->ngpioranges = FUNC_0(VAR_15);
  break;
 }

 VAR_20 = FUNC_1(VAR_18->nmodes, VAR_3);

 VAR_7 = FUNC_2(&VAR_17->dev, VAR_20, sizeof(u32),
         VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_17->dev.platform_data = VAR_18;

 return FUNC_3(VAR_17);
}
