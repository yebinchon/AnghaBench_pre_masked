
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {int line; } ;
struct mps2_uart_port {TYPE_1__ port; int flags; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,void*,int,int ,int ) ;
 int FUNC_1 (int *,void*,int ,int ,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct platform_device*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5,
       struct mps2_uart_port *VAR_6)
{
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 int VAR_8;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7, "serial");

 if (VAR_8 < 0)
  VAR_8 = FUNC_1(&VAR_4, (void *)VAR_6, 0, VAR_2, VAR_1);
 else
  VAR_8 = FUNC_0(&VAR_4, (void *)VAR_6, VAR_8, VAR_2, VAR_1);

 if (VAR_8 < 0)
  return VAR_8;


 if (FUNC_3(VAR_5) == 1)
  VAR_6->flags |= VAR_3;

 VAR_6->port.line = VAR_8;

 return 0;
}
