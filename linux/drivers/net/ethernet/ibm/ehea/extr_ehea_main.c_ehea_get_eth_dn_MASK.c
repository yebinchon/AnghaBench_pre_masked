
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ const u32 ;
struct ehea_adapter {TYPE_2__* ofdev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct device_node* FUNC_0 (struct device_node*,struct device_node*) ;
 scalar_t__* FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct device_node *FUNC_2(struct ehea_adapter *VAR_0,
        u32 VAR_1)
{
 struct device_node *VAR_2;
 struct device_node *VAR_3 = ((void*)0);
 const u32 *VAR_4;

 VAR_2 = VAR_0->ofdev->dev.of_node;
 while ((VAR_3 = FUNC_0(VAR_2, VAR_3))) {

  VAR_4 = FUNC_1(VAR_3, "ibm,hea-port-no",
       ((void*)0));
  if (VAR_4)
   if (*VAR_4 == VAR_1)
    return VAR_3;
 }

 return ((void*)0);
}
