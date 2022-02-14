
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_driver {struct console* cons; } ;
struct device_node {int dummy; } ;
struct console {int index; int name; } ;


 int FUNC_0 (int ,int,int *) ;
 int VAR_0 ;
 struct device_node* VAR_1 ;
 char* VAR_2 ;

int FUNC_1(struct console *VAR_3, struct device_node *VAR_4,
       struct uart_driver *VAR_5, int VAR_6, bool VAR_7)
{
 if (!VAR_3)
  return 0;

 VAR_5->cons = VAR_3;

 if (VAR_1 != VAR_4)
  return 0;

 if (!VAR_7) {
  int VAR_8 = 0;

  if (VAR_2 &&
      *VAR_2 == 'b')
   VAR_8 = 1;

  if ((VAR_6 & 1) != VAR_8)
   return 0;
 }

 if (!VAR_0) {
  VAR_3->index = VAR_6;
  FUNC_0(VAR_3->name, VAR_6, ((void*)0));
 }
 return 1;
}
