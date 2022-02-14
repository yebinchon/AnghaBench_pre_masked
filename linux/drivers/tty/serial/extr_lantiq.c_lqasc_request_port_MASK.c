
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; int * membase; int mapbase; int dev; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ,int) ;
 struct resource* FUNC_3 (int *,int ,int,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct resource*) ;
 struct platform_device* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_port *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_6(VAR_5->dev);
 struct resource *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6, VAR_3, 0);
 if (!VAR_7) {
  FUNC_0(&VAR_6->dev, "cannot obtain I/O memory region");
  return -VAR_1;
 }
 VAR_8 = FUNC_5(VAR_7);

 VAR_7 = FUNC_3(&VAR_6->dev, VAR_7->start,
  VAR_8, FUNC_1(&VAR_6->dev));
 if (!VAR_7) {
  FUNC_0(&VAR_6->dev, "cannot request I/O memory region");
  return -VAR_0;
 }

 if (VAR_5->flags & VAR_4) {
  VAR_5->membase = FUNC_2(&VAR_6->dev,
   VAR_5->mapbase, VAR_8);
  if (VAR_5->membase == ((void*)0))
   return -VAR_2;
 }
 return 0;
}
