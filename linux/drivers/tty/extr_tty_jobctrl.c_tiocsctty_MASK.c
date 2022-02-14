
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {scalar_t__ session; } ;
struct file {int f_mode; } ;
struct TYPE_5__ {TYPE_1__* signal; } ;
struct TYPE_4__ {scalar_t__ tty; scalar_t__ leader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_6 (struct tty_struct*) ;
 int FUNC_7 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_8(struct tty_struct *VAR_5, struct file *VAR_6, int VAR_7)
{
 int VAR_8 = 0;

 FUNC_6(VAR_5);
 FUNC_2(&VAR_4);

 if (VAR_3->signal->leader && (FUNC_5(VAR_3) == VAR_5->session))
  goto unlock;





 if (!VAR_3->signal->leader || VAR_3->signal->tty) {
  VAR_8 = -VAR_1;
  goto unlock;
 }

 if (VAR_5->session) {




  if (VAR_7 == 1 && FUNC_0(VAR_0)) {



   FUNC_4(VAR_5->session);
  } else {
   VAR_8 = -VAR_1;
   goto unlock;
  }
 }


 if ((VAR_6->f_mode & VAR_2) == 0 && !FUNC_0(VAR_0)) {
  VAR_8 = -VAR_1;
  goto unlock;
 }

 FUNC_1(VAR_5);
unlock:
 FUNC_3(&VAR_4);
 FUNC_7(VAR_5);
 return VAR_8;
}
