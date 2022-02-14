
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq25890_state {int online; } ;
struct bq25890_device {int dev; int lock; struct bq25890_state state; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq25890_device*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bq25890_device *VAR_1,
     struct bq25890_state *VAR_2)
{
 int VAR_3;
 struct bq25890_state VAR_4;

 FUNC_2(&VAR_1->lock);
 VAR_4 = VAR_1->state;
 FUNC_3(&VAR_1->lock);

 if (!VAR_2->online) {

  VAR_3 = FUNC_0(VAR_1, VAR_0, 0);
  if (VAR_3 < 0)
   goto error;
 } else if (!VAR_4.online) {

  VAR_3 = FUNC_0(VAR_1, VAR_0, 1);
  if (VAR_3 < 0)
   goto error;
 }

 return;

error:
 FUNC_1(VAR_1->dev, "Error communicating with the chip.\n");
}
