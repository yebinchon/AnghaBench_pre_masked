
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {size_t line; int dev; } ;
struct sccnxp_port {int lock; TYPE_1__* chip; scalar_t__* opened; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (struct uart_port*,int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_7)
{
 struct sccnxp_port *VAR_8 = FUNC_0(VAR_7->dev);
 unsigned long VAR_9;

 FUNC_4(&VAR_8->lock, VAR_9);

 VAR_8->opened[VAR_7->line] = 0;


 FUNC_1(VAR_7, VAR_4 | VAR_3);


 FUNC_2(VAR_7, VAR_5, VAR_0 | VAR_1);


 if (VAR_8->chip->flags & VAR_6)
  FUNC_3(VAR_7, VAR_2, 0);

 FUNC_5(&VAR_8->lock, VAR_9);
}
