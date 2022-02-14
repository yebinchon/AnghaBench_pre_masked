
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int statusflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct moxa_port*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_1)
{
 struct moxa_port *VAR_2 = VAR_1->driver_data;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)




         FUNC_1(VAR_0, &VAR_2->statusflags);
 return VAR_3;
}
