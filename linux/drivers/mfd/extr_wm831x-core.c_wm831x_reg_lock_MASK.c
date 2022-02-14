
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int locked; int dev; int io_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wm831x*,int ,int ) ;

void FUNC_6(struct wm831x *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1, VAR_0, 0);
 if (VAR_2 == 0) {
  FUNC_2(VAR_1->dev, "Registers locked\n");

  FUNC_3(&VAR_1->io_lock);
  FUNC_0(VAR_1->locked);
  VAR_1->locked = 1;
  FUNC_4(&VAR_1->io_lock);
 } else {
  FUNC_1(VAR_1->dev, "Failed to lock registers: %d\n", VAR_2);
 }

}
