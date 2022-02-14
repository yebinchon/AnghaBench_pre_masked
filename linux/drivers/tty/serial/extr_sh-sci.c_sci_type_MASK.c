
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int type; } ;
__attribute__((used)) static const char *FUNC_0(struct uart_port *VAR_0)
{
 switch (VAR_0->type) {
 case 132:
  return "irda";
 case 131:
  return "sci";
 case 130:
  return "scif";
 case 129:
  return "scifa";
 case 128:
  return "scifb";
 case 133:
  return "hscif";
 }

 return ((void*)0);
}
