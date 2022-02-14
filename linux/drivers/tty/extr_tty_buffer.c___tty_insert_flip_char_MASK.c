
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty_buffer* tail; } ;
struct tty_port {TYPE_1__ buf; } ;
struct tty_buffer {int flags; int used; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (struct tty_port*,int,int) ;
 unsigned char* FUNC_1 (struct tty_buffer*,int ) ;
 char* FUNC_2 (struct tty_buffer*,int ) ;

int FUNC_3(struct tty_port *VAR_2, unsigned char VAR_3, char VAR_4)
{
 struct tty_buffer *VAR_5;
 int VAR_6 = (VAR_4 == VAR_1) ? VAR_0 : 0;

 if (!FUNC_0(VAR_2, 1, VAR_6))
  return 0;

 VAR_5 = VAR_2->buf.tail;
 if (~VAR_5->flags & VAR_0)
  *FUNC_2(VAR_5, VAR_5->used) = VAR_4;
 *FUNC_1(VAR_5, VAR_5->used++) = VAR_3;

 return 1;
}
