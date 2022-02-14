
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enter_kgdb; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,unsigned long*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_2(int VAR_6, const char **VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_6 == 0) {
  FUNC_0();
  return 0;
 }

 if (VAR_6 != 1)
  return VAR_1;

 VAR_9 = FUNC_1(VAR_7[1], &VAR_8);
 if (VAR_9)
  return VAR_9;




 if ((VAR_8 >= VAR_0) || !VAR_5[VAR_8].enter_kgdb)
  return VAR_2;

 VAR_4 = VAR_8;




 return VAR_3;
}
