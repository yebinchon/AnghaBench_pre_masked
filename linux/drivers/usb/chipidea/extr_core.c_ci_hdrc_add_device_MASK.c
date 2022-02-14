
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct ci_hdrc_platform_data {int dummy; } ;


 int VAR_0 ;
 struct platform_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct ci_hdrc_platform_data*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct ci_hdrc_platform_data*,int) ;
 int FUNC_6 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_7 (char*,int) ;
 int FUNC_8 (struct platform_device*) ;

struct platform_device *FUNC_9(struct device *VAR_3,
   struct resource *VAR_4, int VAR_5,
   struct ci_hdrc_platform_data *VAR_6)
{
 struct platform_device *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_6);
 if (VAR_9)
  return FUNC_0(VAR_9);

 VAR_8 = FUNC_2(&VAR_2, 0, 0, VAR_1);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);

 VAR_7 = FUNC_7("ci_hdrc", VAR_8);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto put_id;
 }

 VAR_7->dev.parent = VAR_3;

 VAR_9 = FUNC_6(VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_5(VAR_7, VAR_6, sizeof(*VAR_6));
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  goto err;

 return VAR_7;

err:
 FUNC_8(VAR_7);
put_id:
 FUNC_3(&VAR_2, VAR_8);
 return FUNC_0(VAR_9);
}
