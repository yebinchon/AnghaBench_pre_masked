
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int ) ;
 struct device_node* FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (struct device_node*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 int VAR_6;

 VAR_1 = FUNC_4(VAR_5, 0);
 if (!VAR_1) {
  FUNC_0(1, "failed to map base address");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(((void*)0), ((void*)0), "zte,zx296702-pcu");
 VAR_2 = FUNC_4(VAR_5, 0);
 FUNC_5(VAR_5);
 if (!VAR_2) {
  FUNC_2(VAR_1);
  FUNC_0(1, "failed to map pcu_base address");
  return -VAR_0;
 }

 VAR_6 = FUNC_6(&VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_1);
  FUNC_2(VAR_2);
  FUNC_1(&VAR_4->dev, "Register restart handler failed(err=%d)\n",
   VAR_6);
 }

 return VAR_6;
}
