
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; int line; } ;
struct ktermios {scalar_t__ c_line; } ;
struct clps711x_port {int syscon; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct clps711x_port* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3,
        struct ktermios *VAR_4)
{
 if (!VAR_3->line) {
  struct clps711x_port *VAR_5 = FUNC_0(VAR_3->dev);

  FUNC_1(VAR_5->syscon, VAR_2, VAR_1,
       (VAR_4->c_line == VAR_0) ? VAR_1 : 0);
 }
}
