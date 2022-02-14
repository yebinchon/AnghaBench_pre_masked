
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {TYPE_1__* client_ops; } ;
struct tty_buffer {int flags; int read; } ;
struct TYPE_2__ {int (* receive_buf ) (struct tty_port*,unsigned char*,char*,int) ;} ;


 int VAR_0 ;
 unsigned char* FUNC_0 (struct tty_buffer*,int ) ;
 char* FUNC_1 (struct tty_buffer*,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (struct tty_port*,unsigned char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct tty_port *VAR_1, struct tty_buffer *VAR_2, int VAR_3)
{
 unsigned char *VAR_4 = FUNC_0(VAR_2, VAR_2->read);
 char *VAR_5 = ((void*)0);
 int VAR_6;

 if (~VAR_2->flags & VAR_0)
  VAR_5 = FUNC_1(VAR_2, VAR_2->read);

 VAR_6 = VAR_1->client_ops->receive_buf(VAR_1, VAR_4, VAR_5, VAR_3);
 if (VAR_6 > 0)
  FUNC_2(VAR_4, 0, VAR_6);
 return VAR_6;
}
