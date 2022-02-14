
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int quirks; scalar_t__ state; int mutex; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*) ;

void FUNC_8(struct wl1271 *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->quirks & VAR_0))
  return;

 FUNC_0(&VAR_2->mutex);

 if (FUNC_5(VAR_2->state != VAR_1))
  goto out;

 VAR_3 = FUNC_2(VAR_2->dev);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 < 0) {
  FUNC_6(VAR_2);
  goto out;
 }

 FUNC_3(VAR_2->dev);
 FUNC_4(VAR_2->dev);
out:
 FUNC_1(&VAR_2->mutex);
}
