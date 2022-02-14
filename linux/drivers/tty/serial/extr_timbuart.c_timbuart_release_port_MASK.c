
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int mapbase; int * membase; int dev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 struct platform_device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_2->dev);
 int VAR_4 =
  FUNC_3(FUNC_1(VAR_3, VAR_0, 0));

 if (VAR_2->flags & VAR_1) {
  FUNC_0(VAR_2->membase);
  VAR_2->membase = ((void*)0);
 }

 FUNC_2(VAR_2->mapbase, VAR_4);
}
