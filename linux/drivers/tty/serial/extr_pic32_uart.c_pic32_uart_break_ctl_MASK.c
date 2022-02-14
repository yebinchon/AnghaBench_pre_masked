
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct pic32_sport {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct pic32_sport*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct pic32_sport* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_2, int VAR_3)
{
 struct pic32_sport *VAR_4 = FUNC_5(VAR_2);
 unsigned long VAR_5;

 FUNC_3(&VAR_2->lock, VAR_5);

 if (VAR_3)
  FUNC_2(VAR_4, FUNC_1(VAR_0),
     VAR_1);
 else
  FUNC_2(VAR_4, FUNC_0(VAR_0),
     VAR_1);

 FUNC_4(&VAR_2->lock, VAR_5);
}
