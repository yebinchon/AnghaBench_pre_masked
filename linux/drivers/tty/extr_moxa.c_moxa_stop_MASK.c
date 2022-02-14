
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int statusflags; } ;


 int FUNC_0 (struct moxa_port*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct moxa_port *VAR_2 = VAR_1->driver_data;

 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_2);
 FUNC_1(VAR_0, &VAR_2->statusflags);
}
