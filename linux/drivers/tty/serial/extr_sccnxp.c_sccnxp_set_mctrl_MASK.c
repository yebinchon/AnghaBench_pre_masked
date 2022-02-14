
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
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_5, unsigned int VAR_6)
{
 struct sccnxp_port *VAR_7 = FUNC_0(VAR_5->dev);
 unsigned long VAR_8;

 if (!(VAR_7->chip->flags & VAR_2))
  return;

 FUNC_2(&VAR_7->lock, VAR_8);

 FUNC_1(VAR_5, VAR_0, VAR_6 & VAR_3);
 FUNC_1(VAR_5, VAR_1, VAR_6 & VAR_4);

 FUNC_3(&VAR_7->lock, VAR_8);
}
