
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_dev {int priv_dev; int (* recv_func ) (int ,int ) ;struct gdm** gdm; } ;
struct TYPE_3__ {int * ops; } ;
struct gdm {int index; int minor; struct tty_dev* tty_dev; TYPE_1__ port; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 struct gdm*** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct gdm*) ;
 struct gdm* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int,struct device*) ;

int FUNC_7(struct tty_dev *VAR_11, struct device *VAR_12)
{
 struct gdm *VAR_13;
 int VAR_14;
 int VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_3);
  if (!VAR_13)
   return -VAR_1;

  FUNC_2(&VAR_9);
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   if (!VAR_8[VAR_14][VAR_15])
    break;
  }

  if (VAR_15 == VAR_2) {
   FUNC_0(VAR_13);
   FUNC_3(&VAR_9);
   return -VAR_0;
  }

  VAR_8[VAR_14][VAR_15] = VAR_13;
  FUNC_3(&VAR_9);

  VAR_11->gdm[VAR_14] = VAR_13;
  FUNC_5(&VAR_13->port);

  VAR_13->port.ops = &VAR_7;
  VAR_13->index = VAR_14;
  VAR_13->minor = VAR_15;
  VAR_13->tty_dev = VAR_11;

  FUNC_6(&VAR_13->port, VAR_6[VAR_14],
      VAR_13->minor, VAR_12);
 }

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  VAR_13->tty_dev->recv_func(VAR_13->tty_dev->priv_dev,
     VAR_10);

 return 0;
}
