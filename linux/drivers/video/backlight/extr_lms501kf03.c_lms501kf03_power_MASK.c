
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lms501kf03 {int power; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lms501kf03*) ;
 int FUNC_2 (struct lms501kf03*) ;

__attribute__((used)) static int FUNC_3(struct lms501kf03 *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1) &&
  !FUNC_0(VAR_0->power))
  VAR_2 = FUNC_2(VAR_0);
 else if (!FUNC_0(VAR_1) &&
  FUNC_0(VAR_0->power))
  VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2)
  VAR_0->power = VAR_1;

 return VAR_2;
}
