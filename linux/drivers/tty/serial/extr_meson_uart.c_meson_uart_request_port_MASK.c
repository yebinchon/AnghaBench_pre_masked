
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int membase; int mapsize; int mapbase; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_2)
{
 if (!FUNC_3(VAR_2->dev, VAR_2->mapbase, VAR_2->mapsize,
         FUNC_1(VAR_2->dev))) {
  FUNC_0(VAR_2->dev, "Memory region busy\n");
  return -VAR_0;
 }

 VAR_2->membase = FUNC_2(VAR_2->dev, VAR_2->mapbase,
          VAR_2->mapsize);
 if (!VAR_2->membase)
  return -VAR_1;

 return 0;
}
