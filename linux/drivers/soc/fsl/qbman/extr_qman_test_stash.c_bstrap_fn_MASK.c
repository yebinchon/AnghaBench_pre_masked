
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstrap {int (* fn ) () ;int started; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 struct bstrap *VAR_1 = VAR_0;
 int VAR_2;

 FUNC_0(&VAR_1->started);
 VAR_2 = VAR_1->fn();
 if (VAR_2)
  return VAR_2;
 while (!FUNC_1())
  FUNC_2(20);
 return 0;
}
