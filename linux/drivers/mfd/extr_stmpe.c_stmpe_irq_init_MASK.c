
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe {int dev; int domain; TYPE_1__* variant; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int num_irqs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device_node*,int,int,int *,struct stmpe*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct stmpe *VAR_2, struct device_node *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_2->variant->num_irqs;

 VAR_2->domain = FUNC_1(VAR_3, VAR_5, VAR_4,
           &VAR_1, VAR_2);
 if (!VAR_2->domain) {
  FUNC_0(VAR_2->dev, "Failed to create irqdomain\n");
  return -VAR_0;
 }

 return 0;
}
