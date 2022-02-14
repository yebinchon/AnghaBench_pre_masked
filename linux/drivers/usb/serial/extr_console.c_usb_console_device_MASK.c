
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int dummy; } ;
struct console {int index; scalar_t__ data; } ;



__attribute__((used)) static struct tty_driver *FUNC_0(struct console *VAR_0, int *VAR_1)
{
 struct tty_driver **VAR_2 = (struct tty_driver **)VAR_0->data;

 if (!*VAR_2)
  return ((void*)0);

 *VAR_1 = VAR_0->index;
 return *VAR_2;
}
