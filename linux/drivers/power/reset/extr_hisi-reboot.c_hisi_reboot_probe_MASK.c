
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*,int ) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 int VAR_7;

 VAR_2 = FUNC_3(VAR_6, 0);
 if (!VAR_2) {
  FUNC_0(1, "failed to map base address");
  return -VAR_1;
 }

 if (FUNC_4(VAR_6, "reboot-offset", &VAR_4) < 0) {
  FUNC_5("failed to find reboot-offset property\n");
  FUNC_2(VAR_2);
  return -VAR_0;
 }

 VAR_7 = FUNC_6(&VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "cannot register restart handler (err=%d)\n",
   VAR_7);
  FUNC_2(VAR_2);
 }

 return VAR_7;
}
