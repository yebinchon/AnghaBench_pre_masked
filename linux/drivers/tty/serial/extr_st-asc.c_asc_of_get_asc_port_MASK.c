
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int line; } ;
struct asc_port {int * rts; TYPE_1__ port; void* force_m1; void* hw_flow_control; } ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct asc_port* VAR_2 ;
 int FUNC_1 (struct device_node*,char*) ;
 void* FUNC_2 (struct device_node*,char*) ;

__attribute__((used)) static struct asc_port *FUNC_3(struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 int VAR_5;

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4, "serial");
 if (VAR_5 < 0)
  VAR_5 = FUNC_1(VAR_4, VAR_1);

 if (VAR_5 < 0)
  VAR_5 = 0;

 if (FUNC_0(VAR_5 >= VAR_0))
  return ((void*)0);

 VAR_2[VAR_5].hw_flow_control = FUNC_2(VAR_4,
       "uart-has-rtscts");
 VAR_2[VAR_5].force_m1 = FUNC_2(VAR_4, "st,force_m1");
 VAR_2[VAR_5].port.line = VAR_5;
 VAR_2[VAR_5].rts = ((void*)0);

 return &VAR_2[VAR_5];
}
