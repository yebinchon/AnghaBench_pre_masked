
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_bufhead {int free; int mem_used; } ;
struct tty_port {struct tty_bufhead buf; } ;
struct tty_buffer {scalar_t__ size; int free; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct tty_buffer*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct tty_port *VAR_1, struct tty_buffer *VAR_2)
{
 struct tty_bufhead *VAR_3 = &VAR_1->buf;


 FUNC_0(FUNC_1(VAR_2->size, &VAR_3->mem_used) < 0);

 if (VAR_2->size > VAR_0)
  FUNC_2(VAR_2);
 else if (VAR_2->size > 0)
  FUNC_3(&VAR_2->free, &VAR_3->free);
}
