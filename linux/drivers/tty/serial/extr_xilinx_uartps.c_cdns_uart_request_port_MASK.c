
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapbase; int dev; int membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_3)
{
 if (!FUNC_3(VAR_3->mapbase, VAR_1,
      VAR_0)) {
  return -VAR_2;
 }

 VAR_3->membase = FUNC_1(VAR_3->mapbase, VAR_1);
 if (!VAR_3->membase) {
  FUNC_0(VAR_3->dev, "Unable to map registers\n");
  FUNC_2(VAR_3->mapbase, VAR_1);
  return -VAR_2;
 }
 return 0;
}
