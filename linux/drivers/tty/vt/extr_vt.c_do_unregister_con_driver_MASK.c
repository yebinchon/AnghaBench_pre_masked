
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consw {int dummy; } ;
struct con_driver {int flag; struct consw const* con; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct consw const*) ;
 struct consw const* VAR_6 ;
 struct con_driver* VAR_7 ;
 int FUNC_1 (int *) ;

int FUNC_2(const struct consw *VAR_8)
{
 int VAR_9;


 if (FUNC_0(VAR_8))
  return -VAR_1;

 if (VAR_8 == VAR_6)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct con_driver *VAR_10 = &VAR_7[VAR_9];

  if (VAR_10->con == VAR_8) {
   VAR_10->con = ((void*)0);
   VAR_10->flag = VAR_0;
   FUNC_1(&VAR_5);

   return 0;
  }
 }

 return -VAR_3;
}
