
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {struct tty_struct* tty; } ;
struct tty_struct {scalar_t__ index; struct tty_port* port; } ;
struct tty_port {int * ops; } ;
struct tty_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct tty_port*) ;
 struct tty_port* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_driver*,struct tty_struct*) ;
 scalar_t__ FUNC_5 (int) ;
 struct vcc_port* FUNC_6 (scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_7 (struct vcc_port*,int) ;

__attribute__((used)) static int FUNC_8(struct tty_driver *VAR_7, struct tty_struct *VAR_8)
{
 struct vcc_port *VAR_9;
 struct tty_port *VAR_10;
 int VAR_11;

 if (FUNC_5(!VAR_8)) {
  FUNC_2("VCC: install: Invalid TTY handle\n");
  return -VAR_3;
 }

 if (VAR_8->index >= VAR_5)
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_1(sizeof(struct tty_port), VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_6(VAR_8->index, 1);
 if (!VAR_9) {
  FUNC_2("VCC: install: Failed to find VCC port\n");
  VAR_8->port = ((void*)0);
  FUNC_0(VAR_10);
  return -VAR_1;
 }

 FUNC_3(VAR_10);
 VAR_10->ops = &VAR_6;
 VAR_8->port = VAR_10;

 VAR_9->tty = VAR_8;

 FUNC_7(VAR_9, 1);

 return 0;
}
