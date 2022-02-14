
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_buffer* tail; } ;
struct tty_port {TYPE_1__ buf; } ;
struct tty_buffer {int used; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_port*,size_t,int) ;
 unsigned char* FUNC_1 (struct tty_buffer*,int) ;
 int FUNC_2 (struct tty_buffer*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(struct tty_port *VAR_2, unsigned char **VAR_3,
  size_t VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_4, VAR_0);
 if (FUNC_3(VAR_5)) {
  struct tty_buffer *VAR_6 = VAR_2->buf.tail;
  *VAR_3 = FUNC_1(VAR_6, VAR_6->used);
  if (~VAR_6->flags & VAR_0)
   FUNC_4(FUNC_2(VAR_6, VAR_6->used), VAR_1, VAR_5);
  VAR_6->used += VAR_5;
 }
 return VAR_5;
}
