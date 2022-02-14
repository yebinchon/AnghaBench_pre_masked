
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ws_row; int ws_col; } ;
struct tty_struct {int count; TYPE_1__ winsize; } ;
struct file {int dummy; } ;
struct TYPE_5__ {scalar_t__ low_latency; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,struct tty_struct*) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_1, struct file *VAR_2)
{
 if (VAR_1->count == 1) {
  FUNC_0(&VAR_0, VAR_1);
  VAR_0.low_latency = 0;
  if (!VAR_1->winsize.ws_row && !VAR_1->winsize.ws_col) {
   VAR_1->winsize.ws_row = 24;
   VAR_1->winsize.ws_col = 80;
  }
 }
 return 0;
}
