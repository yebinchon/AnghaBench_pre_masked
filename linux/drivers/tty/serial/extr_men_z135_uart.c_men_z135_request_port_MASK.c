
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int * membase; int mapbase; } ;
struct resource {int start; } ;
struct men_z135_port {struct resource* mem; struct mcb_device* mdev; } ;
struct mcb_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct resource*) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (struct resource*) ;
 struct resource* FUNC_5 (struct mcb_device*,int ) ;
 int FUNC_6 (struct resource*) ;
 struct men_z135_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static int FUNC_8(struct uart_port *VAR_1)
{
 struct men_z135_port *VAR_2 = FUNC_7(VAR_1);
 struct mcb_device *VAR_3 = VAR_2->mdev;
 struct resource *VAR_4;

 VAR_4 = FUNC_5(VAR_2->mdev, FUNC_2(&VAR_3->dev));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_1->mapbase = VAR_4->start;
 VAR_2->mem = VAR_4;

 VAR_1->membase = FUNC_3(VAR_4->start, FUNC_6(VAR_4));
 if (VAR_1->membase == ((void*)0)) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 return 0;
}
