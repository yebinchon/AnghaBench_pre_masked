
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct pic32_sport {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pic32_sport*,int ) ;
 int FUNC_2 (struct pic32_sport*,int ) ;
 int FUNC_3 (struct pic32_sport*,int ,int) ;
 int FUNC_4 (struct pic32_sport*) ;
 struct pic32_sport* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_4)
{
 struct pic32_sport *VAR_5 = FUNC_5(VAR_4);

 if (!(FUNC_2(VAR_5, VAR_0) & VAR_1))
  return;

 if (!(FUNC_2(VAR_5, VAR_2) & VAR_3))
  return;


 FUNC_4(VAR_5);

 FUNC_3(VAR_5, FUNC_0(VAR_2),
    VAR_3);
 FUNC_1(VAR_5, 0);
}
