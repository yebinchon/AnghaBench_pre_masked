
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aqm; int apm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int ) ;

int FUNC_3(int VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5 < 0 || VAR_5 >= VAR_0 || VAR_6 < 0 || VAR_6 >= VAR_1)
  return -VAR_2;

 FUNC_0(&VAR_4);

 if (FUNC_2(VAR_5, VAR_3.apm)
     && FUNC_2(VAR_6, VAR_3.aqm))
  VAR_7 = 1;

 FUNC_1(&VAR_4);

 return VAR_7;
}
