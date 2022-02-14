
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gigaset_driver {int tty; int have_tty; } ;
struct cardstate {int mutex; int * tty_dev; int minor_index; int port; int if_wake_tasklet; struct gigaset_driver* driver; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct cardstate*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,unsigned long) ;
 int * FUNC_6 (int *,int ,int ,int *) ;

void FUNC_7(struct cardstate *VAR_1)
{
 struct gigaset_driver *VAR_2;

 VAR_2 = VAR_1->driver;
 if (!VAR_2->have_tty)
  return;

 FUNC_5(&VAR_1->if_wake_tasklet, VAR_0, (unsigned long) VAR_1);

 FUNC_2(&VAR_1->mutex);
 VAR_1->tty_dev = FUNC_6(&VAR_1->port, VAR_2->tty,
   VAR_1->minor_index, ((void*)0));

 if (!FUNC_0(VAR_1->tty_dev))
  FUNC_1(VAR_1->tty_dev, VAR_1);
 else {
  FUNC_4("could not register device to the tty subsystem\n");
  VAR_1->tty_dev = ((void*)0);
 }
 FUNC_3(&VAR_1->mutex);
}
