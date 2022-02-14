
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; int count; struct tty_port* port; struct tty_struct* link; int termios; int termios_locked; int termios_rwsem; } ;
struct tty_port {struct tty_struct* itty; } ;
struct tty_driver {scalar_t__ subtype; int owner; struct tty_driver* other; int init_termios; struct tty_struct** ttys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct tty_struct* FUNC_0 (struct tty_driver*,int) ;
 int FUNC_1 (struct tty_port*) ;
 struct tty_port* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tty_port*,int) ;
 int FUNC_8 (struct tty_port*) ;
 int FUNC_9 (struct tty_driver*) ;
 int FUNC_10 (struct tty_struct*) ;
 int FUNC_11 (struct tty_port*) ;
 int FUNC_12 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_13(struct tty_driver *VAR_5, struct tty_struct *VAR_6,
  bool VAR_7)
{
 struct tty_struct *VAR_8;
 struct tty_port *VAR_9[2];
 int VAR_10 = VAR_6->index;
 int VAR_11 = -VAR_1;


 if (VAR_5->subtype != VAR_3)
  return -VAR_0;

 VAR_9[0] = FUNC_2(sizeof **VAR_9, VAR_2);
 VAR_9[1] = FUNC_2(sizeof **VAR_9, VAR_2);
 if (!VAR_9[0] || !VAR_9[1])
  goto err;
 if (!FUNC_6(VAR_5->other->owner)) {

  goto err;
 }
 VAR_8 = FUNC_0(VAR_5->other, VAR_10);
 if (!VAR_8)
  goto err_put_module;

 FUNC_12(VAR_8);
 FUNC_3(&VAR_8->termios_rwsem, VAR_4);

 if (VAR_7) {


  FUNC_10(VAR_6);
  FUNC_10(VAR_8);

  VAR_5->other->ttys[VAR_10] = VAR_8;
  VAR_5->ttys[VAR_10] = VAR_6;
 } else {
  FUNC_4(&VAR_6->termios_locked, 0, sizeof(VAR_6->termios_locked));
  VAR_6->termios = VAR_5->init_termios;
  FUNC_4(&VAR_8->termios_locked, 0, sizeof(VAR_6->termios_locked));
  VAR_8->termios = VAR_5->other->init_termios;
 }




 FUNC_9(VAR_5->other);

 VAR_6->link = VAR_8;
 VAR_8->link = VAR_6;
 FUNC_11(VAR_9[0]);
 FUNC_11(VAR_9[1]);
 FUNC_7(VAR_9[0], 8192);
 FUNC_7(VAR_9[1], 8192);
 VAR_8->port = VAR_9[0];
 VAR_6->port = VAR_9[1];
 VAR_8->port->itty = VAR_8;

 FUNC_8(VAR_8->port);

 FUNC_9(VAR_5);
 VAR_6->count++;
 VAR_8->count++;
 return 0;

err_put_module:
 FUNC_5(VAR_5->other->owner);
err:
 FUNC_1(VAR_9[0]);
 FUNC_1(VAR_9[1]);
 return VAR_11;
}
