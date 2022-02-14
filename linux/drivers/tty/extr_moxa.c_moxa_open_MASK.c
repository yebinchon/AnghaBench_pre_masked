
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tty_struct {int index; int termios; struct moxa_port* driver_data; } ;
struct TYPE_5__ {int mutex; int count; } ;
struct moxa_port {scalar_t__ type; TYPE_1__ port; scalar_t__ statusflags; } ;
struct moxa_board_conf {int numPorts; struct moxa_port* ports; int ready; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct moxa_port*) ;
 int FUNC_1 (struct moxa_port*,int,int) ;
 int FUNC_2 (struct moxa_port*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 struct moxa_board_conf* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct tty_struct*,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,struct tty_struct*,struct file*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,struct tty_struct*) ;

__attribute__((used)) static int FUNC_12(struct tty_struct *VAR_9, struct file *VAR_10)
{
 struct moxa_board_conf *VAR_11;
 struct moxa_port *VAR_12;
 int VAR_13;

 VAR_13 = VAR_9->index;
 if (VAR_13 == VAR_4) {
  return FUNC_3(VAR_0) ? 0 : -VAR_2;
 }
 if (FUNC_6(&VAR_8))
  return -VAR_3;
 VAR_11 = &VAR_7[VAR_13 / VAR_5];
 if (!VAR_11->ready) {
  FUNC_7(&VAR_8);
  return -VAR_1;
 }

 if (VAR_13 % VAR_5 >= VAR_11->numPorts) {
  FUNC_7(&VAR_8);
  return -VAR_1;
 }

 VAR_12 = &VAR_11->ports[VAR_13 % VAR_5];
 VAR_12->port.count++;
 VAR_9->driver_data = VAR_12;
 FUNC_11(&VAR_12->port, VAR_9);
 FUNC_5(&VAR_12->port.mutex);
 if (!FUNC_9(&VAR_12->port)) {
  VAR_12->statusflags = 0;
  FUNC_4(VAR_9, &VAR_9->termios);
  FUNC_1(VAR_12, 1, 1);
  FUNC_0(VAR_12);
  FUNC_2(VAR_12, VAR_12->type == VAR_6);
  FUNC_10(&VAR_12->port, 1);
 }
 FUNC_7(&VAR_12->port.mutex);
 FUNC_7(&VAR_8);

 return FUNC_8(&VAR_12->port, VAR_9, VAR_10);
}
