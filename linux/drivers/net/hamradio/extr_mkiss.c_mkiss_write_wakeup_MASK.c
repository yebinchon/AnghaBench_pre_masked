
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; int flags; } ;
struct mkiss {scalar_t__ xleft; int xhead; int dev; } ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct mkiss* FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct mkiss*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tty_struct*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_1)
{
 struct mkiss *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return;

 if (VAR_2->xleft <= 0) {



  FUNC_0(VAR_0, &VAR_1->flags);

  FUNC_3(VAR_2->dev);
  goto out;
 }

 VAR_3 = VAR_1->ops->write(VAR_1, VAR_2->xhead, VAR_2->xleft);
 VAR_2->xleft -= VAR_3;
 VAR_2->xhead += VAR_3;

out:
 FUNC_2(VAR_2);
}
