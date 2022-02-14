
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {size_t line; int dev; } ;
struct sccnxp_port {int* opened; int lock; TYPE_1__* chip; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (struct uart_port*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_10)
{
 struct sccnxp_port *VAR_11 = FUNC_0(VAR_10->dev);
 unsigned long VAR_12;

 FUNC_4(&VAR_11->lock, VAR_12);

 if (VAR_11->chip->flags & VAR_8) {

  FUNC_3(VAR_10, VAR_9, 0);
 }


 FUNC_2(VAR_10, VAR_7, VAR_1);
 FUNC_2(VAR_10, VAR_7, VAR_3);
 FUNC_2(VAR_10, VAR_7, VAR_2);
 FUNC_2(VAR_10, VAR_7, VAR_0);


 FUNC_2(VAR_10, VAR_7, VAR_4 | VAR_5);


 FUNC_1(VAR_10, VAR_6);

 VAR_11->opened[VAR_10->line] = 1;

 FUNC_5(&VAR_11->lock, VAR_12);

 return 0;
}
