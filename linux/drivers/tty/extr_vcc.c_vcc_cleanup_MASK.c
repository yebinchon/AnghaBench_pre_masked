
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct vcc_port* name; } ;
struct vcc_port {struct vcc_port* domain; TYPE_1__ vio; scalar_t__ removed; int * tty; } ;
struct tty_struct {struct vcc_port* port; int index; } ;


 int FUNC_0 (struct vcc_port*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vcc_port*) ;
 scalar_t__ FUNC_3 (int) ;
 struct vcc_port* FUNC_4 (int ,int) ;
 int FUNC_5 (struct vcc_port*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_0)
{
 struct vcc_port *VAR_1;

 if (FUNC_3(!VAR_0)) {
  FUNC_1("VCC: cleanup: Invalid TTY handle\n");
  return;
 }

 VAR_1 = FUNC_4(VAR_0->index, 1);
 if (VAR_1) {
  VAR_1->tty = ((void*)0);

  if (VAR_1->removed) {
   FUNC_6(VAR_0->index);
   FUNC_0(VAR_1->vio.name);
   FUNC_0(VAR_1->domain);
   FUNC_0(VAR_1);
  } else {
   FUNC_5(VAR_1, 1);
  }
 }

 FUNC_2(VAR_0->port);
 FUNC_0(VAR_0->port);
 VAR_0->port = ((void*)0);
}
