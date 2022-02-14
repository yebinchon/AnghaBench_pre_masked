
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; int port; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct tty_struct*,struct file*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0, struct file *VAR_1)
{
 if (FUNC_2(!VAR_0)) {
  FUNC_0("VCC: close: Invalid TTY handle\n");
  return;
 }

 if (FUNC_2(VAR_0->count > 1))
  return;

 if (FUNC_2(!VAR_0->port)) {
  FUNC_0("VCC: close: TTY port not found\n");
  return;
 }

 FUNC_1(VAR_0->port, VAR_0, VAR_1);
}
