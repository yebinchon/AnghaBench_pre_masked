
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sci_port {int has_rtscts; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_sci_port {int regtype; int type; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct sci_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (void const*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 struct plat_sci_port* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*,char*) ;
 void* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct device_node*,char*) ;
 struct sci_port* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct plat_sci_port *FUNC_10(struct platform_device *VAR_4,
       unsigned int *VAR_5)
{
 struct device_node *VAR_6 = VAR_4->dev.of_node;
 struct plat_sci_port *VAR_7;
 struct sci_port *VAR_8;
 const void *VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_0) || !VAR_6)
  return ((void*)0);

 VAR_9 = FUNC_8(&VAR_4->dev);

 VAR_7 = FUNC_5(&VAR_4->dev, sizeof(struct plat_sci_port), VAR_1);
 if (!VAR_7)
  return ((void*)0);


 VAR_10 = FUNC_7(VAR_6, "serial");
 if (VAR_10 < 0 && ~VAR_3)
  VAR_10 = FUNC_6(VAR_3);
 if (VAR_10 < 0) {
  FUNC_4(&VAR_4->dev, "failed to get alias id (%d)\n", VAR_10);
  return ((void*)0);
 }
 if (VAR_10 >= FUNC_0(VAR_2)) {
  FUNC_4(&VAR_4->dev, "serial%d out of range\n", VAR_10);
  return ((void*)0);
 }

 VAR_8 = &VAR_2[VAR_10];
 *VAR_5 = VAR_10;

 VAR_7->type = FUNC_3(VAR_9);
 VAR_7->regtype = FUNC_2(VAR_9);

 VAR_8->has_rtscts = FUNC_9(VAR_6, "uart-has-rtscts");

 return VAR_7;
}
