
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tmr; int alarm; } ;
struct timerfd_ctx {TYPE_1__ t; } ;
struct inode {int dummy; } ;
struct file {struct timerfd_ctx* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct timerfd_ctx*) ;
 int FUNC_3 (struct timerfd_ctx*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct timerfd_ctx*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, struct file *VAR_2)
{
 struct timerfd_ctx *VAR_3 = VAR_2->private_data;

 FUNC_4(VAR_3);

 if (FUNC_2(VAR_3))
  FUNC_0(&VAR_3->t.alarm);
 else
  FUNC_1(&VAR_3->t.tmr);
 FUNC_3(VAR_3, VAR_0);
 return 0;
}
