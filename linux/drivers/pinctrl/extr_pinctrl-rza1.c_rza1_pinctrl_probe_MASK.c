
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; int * pmxops; int * pctlops; int name; } ;
struct rza1_pinctrl {int data; TYPE_1__ desc; int mutex; int base; int * dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 struct rza1_pinctrl* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*,struct rza1_pinctrl*) ;
 int VAR_4 ;
 int FUNC_8 (struct rza1_pinctrl*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct rza1_pinctrl *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = &VAR_6->dev;

 VAR_7->base = FUNC_4(VAR_6, 0);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 FUNC_5(&VAR_7->mutex);

 FUNC_7(VAR_6, VAR_7);

 VAR_7->desc.name = VAR_0;
 VAR_7->desc.pctlops = &VAR_4;
 VAR_7->desc.pmxops = &VAR_5;
 VAR_7->desc.owner = VAR_3;
 VAR_7->data = FUNC_6(&VAR_6->dev);

 VAR_8 = FUNC_8(VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(&VAR_6->dev,
   "RZ/A1 pin controller and gpio successfully registered\n");

 return 0;
}
