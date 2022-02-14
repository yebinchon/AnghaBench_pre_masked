
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int * membase; int dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct uart_port *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_1(VAR_1->dev);

 if (VAR_1->flags & VAR_0) {
  FUNC_0(&VAR_2->dev, VAR_1->membase);
  VAR_1->membase = ((void*)0);
 }
}
