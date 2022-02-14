
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipw_tty* driver_data; } ;
struct serial_struct {int baud_base; int line; int type; } ;
struct TYPE_2__ {int count; } ;
struct ipw_tty {int index; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_3,
          struct serial_struct *VAR_4)
{
 struct ipw_tty *VAR_5 = VAR_3->driver_data;

 if (!VAR_5)
  return -VAR_1;

 if (!VAR_5->port.count)
  return -VAR_0;

 VAR_4->type = VAR_2;
 VAR_4->line = VAR_5->index;
 VAR_4->baud_base = 115200;
 return 0;
}
