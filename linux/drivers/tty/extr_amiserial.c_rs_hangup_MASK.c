
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int name; struct serial_state* driver_data; } ;
struct TYPE_2__ {int open_wait; int * tty; scalar_t__ count; } ;
struct serial_state {TYPE_1__ tport; } ;


 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct serial_state*,int ,char*) ;
 int FUNC_2 (struct tty_struct*,struct serial_state*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct serial_state *VAR_1 = VAR_0->driver_data;

 if (FUNC_1(VAR_1, VAR_0->name, "rs_hangup"))
  return;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_1);
 VAR_1->tport.count = 0;
 FUNC_3(&VAR_1->tport, 0);
 VAR_1->tport.tty = ((void*)0);
 FUNC_4(&VAR_1->tport.open_wait);
}
