
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {size_t index; int count; } ;
struct tty_driver {struct tty_struct** ttys; } ;


 int FUNC_0 (struct tty_driver*) ;
 int FUNC_1 (struct tty_struct*) ;

int FUNC_2(struct tty_driver *VAR_0, struct tty_struct *VAR_1)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
 VAR_1->count++;
 VAR_0->ttys[VAR_1->index] = VAR_1;
 return 0;
}
