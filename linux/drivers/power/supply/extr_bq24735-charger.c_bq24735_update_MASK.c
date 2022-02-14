
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq24735 {int charger; int lock; scalar_t__ charging; } ;


 scalar_t__ FUNC_0 (struct bq24735*) ;
 int FUNC_1 (struct bq24735*) ;
 int FUNC_2 (struct bq24735*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct bq24735 *VAR_0)
{
 FUNC_3(&VAR_0->lock);

 if (VAR_0->charging && FUNC_0(VAR_0))
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);

 FUNC_4(&VAR_0->lock);

 FUNC_5(VAR_0->charger);
}
