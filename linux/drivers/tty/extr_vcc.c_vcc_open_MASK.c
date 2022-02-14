
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lp; } ;
struct vcc_port {TYPE_1__ vio; } ;
struct tty_struct {int count; TYPE_2__* port; int index; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,struct tty_struct*,struct file*) ;
 scalar_t__ FUNC_2 (int) ;
 struct vcc_port* FUNC_3 (int ) ;
 int FUNC_4 (struct vcc_port*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_4, struct file *VAR_5)
{
 struct vcc_port *VAR_6;

 if (FUNC_2(!VAR_4)) {
  FUNC_0("VCC: open: Invalid TTY handle\n");
  return -VAR_2;
 }

 if (VAR_4->count > 1)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4->index);
 if (FUNC_2(!VAR_6)) {
  FUNC_0("VCC: open: Failed to find VCC port\n");
  return -VAR_1;
 }

 if (FUNC_2(!VAR_6->vio.lp)) {
  FUNC_0("VCC: open: LDC channel not configured\n");
  FUNC_4(VAR_6, 0);
  return -VAR_3;
 }
 FUNC_5(VAR_6->vio.lp);

 FUNC_4(VAR_6, 0);

 if (FUNC_2(!VAR_4->port)) {
  FUNC_0("VCC: open: TTY port not found\n");
  return -VAR_2;
 }

 if (FUNC_2(!VAR_4->port->ops)) {
  FUNC_0("VCC: open: TTY ops not defined\n");
  return -VAR_2;
 }

 return FUNC_1(VAR_4->port, VAR_4, VAR_5);
}
