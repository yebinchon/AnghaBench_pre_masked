
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem_limit; } ;
struct tty_port {TYPE_1__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct tty_port *VAR_2, int VAR_3)
{
 if (VAR_3 < VAR_1)
  return -VAR_0;
 VAR_2->buf.mem_limit = VAR_3;
 return 0;
}
