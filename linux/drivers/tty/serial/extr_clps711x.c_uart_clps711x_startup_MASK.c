
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; int dev; } ;
struct clps711x_port {int syscon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_4)
{
 struct clps711x_port *VAR_5 = FUNC_0(VAR_4->dev);


 FUNC_3(FUNC_1(VAR_4->membase + VAR_3) & ~VAR_2,
        VAR_4->membase + VAR_3);


 return FUNC_2(VAR_5->syscon, VAR_0,
      VAR_1, VAR_1);
}
