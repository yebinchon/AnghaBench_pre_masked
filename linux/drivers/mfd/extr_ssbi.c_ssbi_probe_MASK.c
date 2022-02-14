
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ssbi {scalar_t__ controller_type; int lock; int write; int read; int base; } ;
struct resource {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,char const*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 struct ssbi* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (struct device_node*,char*,int *) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct ssbi*) ;
 int FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (char const*,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct device_node *VAR_12 = VAR_11->dev.of_node;
 struct resource *VAR_13;
 struct ssbi *VAR_14;
 const char *VAR_15;

 VAR_14 = FUNC_5(&VAR_11->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_13 = FUNC_8(VAR_11, VAR_3, 0);
 VAR_14->base = FUNC_4(&VAR_11->dev, VAR_13);
 if (FUNC_0(VAR_14->base))
  return FUNC_1(VAR_14->base);

 FUNC_9(VAR_11, VAR_14);

 VAR_15 = FUNC_7(VAR_12, "qcom,controller-type", ((void*)0));
 if (VAR_15 == ((void*)0)) {
  FUNC_2(&VAR_11->dev, "Missing qcom,controller-type property\n");
  return -VAR_0;
 }
 FUNC_3(&VAR_11->dev, "SSBI controller type: '%s'\n", VAR_15);
 if (FUNC_11(VAR_15, "ssbi") == 0)
  VAR_14->controller_type = VAR_5;
 else if (FUNC_11(VAR_15, "ssbi2") == 0)
  VAR_14->controller_type = VAR_6;
 else if (FUNC_11(VAR_15, "pmic-arbiter") == 0)
  VAR_14->controller_type = VAR_4;
 else {
  FUNC_2(&VAR_11->dev, "Unknown qcom,controller-type\n");
  return -VAR_0;
 }

 if (VAR_14->controller_type == VAR_4) {
  VAR_14->read = VAR_7;
  VAR_14->write = VAR_8;
 } else {
  VAR_14->read = VAR_9;
  VAR_14->write = VAR_10;
 }

 FUNC_10(&VAR_14->lock);

 return FUNC_6(&VAR_11->dev);
}
