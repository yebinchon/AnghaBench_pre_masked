
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem_limit; int mem_used; } ;
struct tty_port {TYPE_1__ buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;

int FUNC_2(struct tty_port *VAR_0)
{
 int VAR_1 = VAR_0->buf.mem_limit - FUNC_0(&VAR_0->buf.mem_used);
 return FUNC_1(VAR_1, 0);
}
