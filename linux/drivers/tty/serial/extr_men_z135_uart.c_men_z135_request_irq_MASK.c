
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int irq; } ;
struct men_z135_port {struct uart_port port; TYPE_1__* mdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,char*,struct men_z135_port*) ;

__attribute__((used)) static int FUNC_2(struct men_z135_port *VAR_2)
{
 struct device *VAR_3 = &VAR_2->mdev->dev;
 struct uart_port *VAR_4 = &VAR_2->port;
 int VAR_5 = 0;

 VAR_5 = FUNC_1(VAR_4->irq, VAR_1, VAR_0,
   "men_z135_intr", VAR_2);
 if (VAR_5)
  FUNC_0(VAR_3, "Error %d getting interrupt\n", VAR_5);

 return VAR_5;
}
