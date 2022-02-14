
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 switch (VAR_3) {
 case 0:
  switch (VAR_2->type) {
  case 128:
   FUNC_1(VAR_1);
   break;
  case 129:
   FUNC_1(VAR_0);
   break;
  }
  break;
 case 3:
  switch (VAR_2->type) {
  case 128:
   FUNC_0(VAR_1);
   break;
  case 129:
   FUNC_0(VAR_0);
   break;
  }
  break;
 }
}
