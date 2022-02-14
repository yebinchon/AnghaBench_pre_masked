
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq25890_state {int dummy; } ;
struct bq25890_device {int charger; int lock; struct bq25890_state state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct bq25890_device*,struct bq25890_state*) ;
 int FUNC_1 (struct bq25890_device*,struct bq25890_state*) ;
 int FUNC_2 (struct bq25890_device*,struct bq25890_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct bq25890_device *VAR_3 = VAR_2;
 int VAR_4;
 struct bq25890_state VAR_5;

 VAR_4 = FUNC_0(VAR_3, &VAR_5);
 if (VAR_4 < 0)
  goto handled;

 if (!FUNC_2(VAR_3, &VAR_5))
  goto handled;

 FUNC_1(VAR_3, &VAR_5);

 FUNC_3(&VAR_3->lock);
 VAR_3->state = VAR_5;
 FUNC_4(&VAR_3->lock);

 FUNC_5(VAR_3->charger);

handled:
 return VAR_0;
}
