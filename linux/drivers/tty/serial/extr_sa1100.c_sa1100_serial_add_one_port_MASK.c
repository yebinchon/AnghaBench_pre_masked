
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dev; } ;
struct sa1100_port {TYPE_1__ port; int * gpios; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (struct platform_device*,struct sa1100_port*) ;
 int VAR_1 ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct sa1100_port *VAR_2, struct platform_device *VAR_3)
{
 VAR_2->port.dev = &VAR_3->dev;




 VAR_2->gpios = FUNC_3(VAR_2->port.dev, 0);
 if (FUNC_0(VAR_2->gpios)) {
  int VAR_4 = FUNC_1(VAR_2->gpios);

  FUNC_2(VAR_2->port.dev, "failed to get mctrl gpios: %d\n",
   VAR_4);

  if (VAR_4 == -VAR_0)
   return VAR_4;

  VAR_2->gpios = ((void*)0);
 }

 FUNC_4(VAR_3, VAR_2);

 return FUNC_5(&VAR_1, &VAR_2->port);
}
