
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dev; } ;
struct xvtc_device {void* has_generator; void* has_detector; TYPE_2__ xvip; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 void* FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct xvtc_device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->xvip.dev->of_node;

 VAR_0->has_detector = FUNC_0(VAR_1, "xlnx,detector");
 VAR_0->has_generator = FUNC_0(VAR_1, "xlnx,generator");

 return 0;
}
