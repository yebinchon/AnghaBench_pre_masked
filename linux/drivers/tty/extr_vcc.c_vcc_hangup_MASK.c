
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {int dummy; } ;
struct tty_struct {int port; int index; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 struct vcc_port* FUNC_3 (int ) ;
 int FUNC_4 (struct vcc_port*) ;
 int FUNC_5 (struct vcc_port*,int) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0)
{
 struct vcc_port *VAR_1;

 if (FUNC_2(!VAR_0)) {
  FUNC_0("VCC: hangup: Invalid TTY handle\n");
  return;
 }

 VAR_1 = FUNC_3(VAR_0->index);
 if (FUNC_2(!VAR_1)) {
  FUNC_0("VCC: hangup: Failed to find VCC port\n");
  return;
 }

 if (FUNC_2(!VAR_0->port)) {
  FUNC_0("VCC: hangup: TTY port not found\n");
  FUNC_5(VAR_1, 0);
  return;
 }

 FUNC_4(VAR_1);

 FUNC_5(VAR_1, 0);

 FUNC_1(VAR_0->port);
}
