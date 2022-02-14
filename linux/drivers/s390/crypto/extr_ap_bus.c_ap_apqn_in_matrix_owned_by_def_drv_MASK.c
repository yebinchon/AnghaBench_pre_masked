
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* apm; unsigned long* aqm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,unsigned long*) ;

int FUNC_3(unsigned long *VAR_4,
           unsigned long *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;

 FUNC_0(&VAR_3);

 for (VAR_6 = 0; !VAR_8 && VAR_6 < VAR_0; VAR_6++)
  if (FUNC_2(VAR_6, VAR_4) &&
      FUNC_2(VAR_6, VAR_2.apm))
   for (VAR_7 = 0; !VAR_8 && VAR_7 < VAR_1; VAR_7++)
    if (FUNC_2(VAR_7, VAR_5) &&
        FUNC_2(VAR_7, VAR_2.aqm))
     VAR_8 = 1;

 FUNC_1(&VAR_3);

 return VAR_8;
}
