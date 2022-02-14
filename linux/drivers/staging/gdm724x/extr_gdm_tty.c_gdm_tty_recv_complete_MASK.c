
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_dev {struct gdm** gdm; } ;
struct gdm {TYPE_1__* tty_dev; int port; } ;
struct TYPE_2__ {int priv_dev; int (* recv_func ) (int ,int (*) (void*,int,int,struct tty_dev*,int)) ;} ;


 int FUNC_0 (struct gdm*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int (*) (void*,int,int,struct tty_dev*,int)) ;
 int FUNC_2 (int ,int (*) (void*,int,int,struct tty_dev*,int)) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,void*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_3,
     int VAR_4,
     int VAR_5,
     struct tty_dev *VAR_6,
     int VAR_7)
{
 struct gdm *VAR_8 = VAR_6->gdm[VAR_5];

 if (!FUNC_0(VAR_8)) {
  if (VAR_7 == VAR_0)
   VAR_8->tty_dev->recv_func(VAR_8->tty_dev->priv_dev,
      FUNC_6);
  return VAR_2;
 }

 if (VAR_3 && VAR_4) {
  if (FUNC_3(&VAR_8->port, VAR_4) == VAR_4) {
   FUNC_5(&VAR_8->port, VAR_3, VAR_4);
   FUNC_4(&VAR_8->port);
  } else {
   return VAR_1;
  }
 }

 if (VAR_7 == VAR_0)
  VAR_8->tty_dev->recv_func(VAR_8->tty_dev->priv_dev,
     FUNC_6);

 return 0;
}
