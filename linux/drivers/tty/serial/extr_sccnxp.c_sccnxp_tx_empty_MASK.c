
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uart_port {int dev; } ;
struct sccnxp_port {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_port *VAR_3)
{
 u8 VAR_4;
 unsigned long VAR_5;
 struct sccnxp_port *VAR_6 = FUNC_0(VAR_3->dev);

 FUNC_2(&VAR_6->lock, VAR_5);
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 FUNC_3(&VAR_6->lock, VAR_5);

 return (VAR_4 & VAR_1) ? VAR_2 : 0;
}
