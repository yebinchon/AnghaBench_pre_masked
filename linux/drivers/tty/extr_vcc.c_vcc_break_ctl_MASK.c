
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {int lock; } ;
struct tty_struct {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 struct vcc_port* FUNC_4 (int ) ;
 int FUNC_5 (struct vcc_port*) ;
 int FUNC_6 (struct vcc_port*,int) ;
 scalar_t__ FUNC_7 (struct vcc_port*,int ) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_3, int VAR_4)
{
 struct vcc_port *VAR_5;
 unsigned long VAR_6;

 if (FUNC_3(!VAR_3)) {
  FUNC_0("VCC: break_ctl: Invalid TTY handle\n");
  return -VAR_1;
 }

 VAR_5 = FUNC_4(VAR_3->index);
 if (FUNC_3(!VAR_5)) {
  FUNC_0("VCC: break_ctl: Failed to find VCC port\n");
  return -VAR_0;
 }


 if (VAR_4 == 0) {
  FUNC_6(VAR_5, 0);
  return 0;
 }

 FUNC_1(&VAR_5->lock, VAR_6);

 if (FUNC_7(VAR_5, VAR_2) < 0)
  FUNC_5(VAR_5);

 FUNC_2(&VAR_5->lock, VAR_6);

 FUNC_6(VAR_5, 0);

 return 0;
}
