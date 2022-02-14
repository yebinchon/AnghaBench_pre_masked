
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dev; } ;
struct sccnxp_port {int lock; TYPE_1__* chip; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 struct sccnxp_port *VAR_4 = FUNC_0(VAR_3->dev);
 unsigned long VAR_5;

 FUNC_3(&VAR_4->lock, VAR_5);


 if (VAR_4->chip->flags & VAR_2)
  FUNC_2(VAR_3, VAR_0, 1);

 FUNC_1(VAR_3, VAR_1);

 FUNC_4(&VAR_4->lock, VAR_5);
}
