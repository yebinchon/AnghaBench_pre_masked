
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct elm_info {int list; int elm_completion; int elm_base; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,struct resource*) ;
 struct elm_info* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ,struct elm_info*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct elm_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 int VAR_9 = 0;
 struct resource *VAR_10, *VAR_11;
 struct elm_info *VAR_12;

 VAR_12 = FUNC_5(&VAR_8->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->dev = &VAR_8->dev;

 VAR_11 = FUNC_9(VAR_8, VAR_4, 0);
 if (!VAR_11) {
  FUNC_3(&VAR_8->dev, "no irq resource defined\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_9(VAR_8, VAR_5, 0);
 VAR_12->elm_base = FUNC_4(&VAR_8->dev, VAR_10);
 if (FUNC_1(VAR_12->elm_base))
  return FUNC_2(VAR_12->elm_base);

 VAR_9 = FUNC_6(&VAR_8->dev, VAR_11->start, VAR_7, 0,
   VAR_8->name, VAR_12);
 if (VAR_9) {
  FUNC_3(&VAR_8->dev, "failure requesting %pr\n", VAR_11);
  return VAR_9;
 }

 FUNC_12(&VAR_8->dev);
 if (FUNC_13(&VAR_8->dev) < 0) {
  VAR_9 = -VAR_0;
  FUNC_11(&VAR_8->dev);
  FUNC_3(&VAR_8->dev, "can't enable clock\n");
  return VAR_9;
 }

 FUNC_7(&VAR_12->elm_completion);
 FUNC_0(&VAR_12->list);
 FUNC_8(&VAR_12->list, &VAR_6);
 FUNC_10(VAR_8, VAR_12);
 return VAR_9;
}
