
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct tty_struct* tty; } ;
struct vc_data {scalar_t__ vc_utf; int vc_cols; int vc_rows; TYPE_4__ port; } ;
struct TYPE_6__ {int c_iflag; } ;
struct TYPE_5__ {int ws_col; int ws_row; } ;
struct tty_struct {unsigned int index; TYPE_2__ termios; TYPE_1__ winsize; struct vc_data* driver_data; } ;
struct tty_driver {int dummy; } ;
struct TYPE_7__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,struct tty_driver*,struct tty_struct*) ;
 int FUNC_3 (unsigned int) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct tty_driver *VAR_3, struct tty_struct *VAR_4)
{
 unsigned int VAR_5 = VAR_4->index;
 struct vc_data *VAR_6;
 int VAR_7;

 FUNC_0();
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  goto unlock;

 VAR_6 = VAR_2[VAR_5].d;


 if (VAR_6->port.tty) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 VAR_7 = FUNC_2(&VAR_6->port, VAR_3, VAR_4);
 if (VAR_7)
  goto unlock;

 VAR_4->driver_data = VAR_6;
 VAR_6->port.tty = VAR_4;

 if (!VAR_4->winsize.ws_row && !VAR_4->winsize.ws_col) {
  VAR_4->winsize.ws_row = VAR_2[VAR_5].d->vc_rows;
  VAR_4->winsize.ws_col = VAR_2[VAR_5].d->vc_cols;
 }
 if (VAR_6->vc_utf)
  VAR_4->termios.c_iflag |= VAR_1;
 else
  VAR_4->termios.c_iflag &= ~VAR_1;
unlock:
 FUNC_1();
 return VAR_7;
}
