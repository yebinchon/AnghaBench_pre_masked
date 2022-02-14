
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct fwtty_port* driver_data; } ;
struct TYPE_2__ {int throttled; } ;
struct fwtty_port {TYPE_1__ stats; } ;



__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_0)
{
 struct fwtty_port *VAR_1 = VAR_0->driver_data;
 ++VAR_1->stats.throttled;
}
