
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; int mapbase; } ;
struct sci_port {int reg_size; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct resource*) ;
 struct resource* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct uart_port*) ;
 struct sci_port* FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_1)
{
 struct resource *VAR_2;
 struct sci_port *VAR_3 = FUNC_5(VAR_1);
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1->mapbase, VAR_3->reg_size,
     FUNC_1(VAR_1->dev));
 if (FUNC_6(VAR_2 == ((void*)0))) {
  FUNC_0(VAR_1->dev, "request_mem_region failed.");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_1);
 if (FUNC_6(VAR_4 != 0)) {
  FUNC_2(VAR_2);
  return VAR_4;
 }

 return 0;
}
