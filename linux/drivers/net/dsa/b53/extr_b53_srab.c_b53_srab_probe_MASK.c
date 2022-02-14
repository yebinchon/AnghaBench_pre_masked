
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {struct device_node* of_node; struct b53_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct b53_srab_priv {int regs; } ;
struct b53_platform_data {scalar_t__ chip_id; } ;
struct b53_device {struct b53_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct platform_device*) ;
 struct b53_device* FUNC_3 (TYPE_1__*,int *,struct b53_srab_priv*) ;
 int FUNC_4 (struct b53_device*) ;
 void* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct of_device_id* FUNC_7 (int ,struct device_node*) ;
 int FUNC_8 (struct platform_device*,struct b53_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct b53_platform_data *VAR_5 = VAR_4->dev.platform_data;
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 const struct of_device_id *VAR_7 = ((void*)0);
 struct b53_srab_priv *VAR_8;
 struct b53_device *VAR_9;

 if (VAR_6)
  VAR_7 = FUNC_7(VAR_2, VAR_6);

 if (VAR_7) {
  VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;

  VAR_5->chip_id = (u32)(unsigned long)VAR_7->data;
 }

 VAR_8 = FUNC_5(&VAR_4->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->regs = FUNC_6(VAR_4, 0);
 if (FUNC_0(VAR_8->regs))
  return -VAR_0;

 VAR_9 = FUNC_3(&VAR_4->dev, &VAR_3, VAR_8);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_5)
  VAR_9->pdata = VAR_5;

 FUNC_8(VAR_4, VAR_9);

 FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 return FUNC_4(VAR_9);
}
