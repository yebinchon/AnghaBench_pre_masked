
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_3__ {int sel_mode; scalar_t__ ye; scalar_t__ xe; scalar_t__ ys; scalar_t__ xs; } ;
struct TYPE_4__ {int work; TYPE_1__ sel; int tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,struct tty_struct*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 () ;

int FUNC_5(struct tty_struct *VAR_8)
{






 FUNC_2(VAR_8);
 if (FUNC_0(&VAR_3.tty, ((void*)0), VAR_8)) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }




 FUNC_4();

 VAR_3.sel.xs = VAR_5 + 1;
 VAR_3.sel.ys = VAR_7 + 1;
 VAR_3.sel.xe = VAR_4 + 1;
 VAR_3.sel.ye = VAR_6 + 1;
 VAR_3.sel.sel_mode = VAR_1;

 FUNC_1(VAR_2, &VAR_3.work);

 return 0;
}
