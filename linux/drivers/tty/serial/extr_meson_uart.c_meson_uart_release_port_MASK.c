
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int mapsize; int mapbase; int dev; int * membase; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 FUNC_0(VAR_0->dev, VAR_0->membase);
 VAR_0->membase = ((void*)0);
 FUNC_1(VAR_0->dev, VAR_0->mapbase, VAR_0->mapsize);
}
