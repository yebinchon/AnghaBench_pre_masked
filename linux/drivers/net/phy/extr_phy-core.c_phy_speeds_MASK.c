
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bit; unsigned int speed; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,unsigned long*) ;

size_t FUNC_2(unsigned int *VAR_2, size_t VAR_3,
    unsigned long *VAR_4)
{
 size_t VAR_5;
 int VAR_6;

 for (VAR_6 = 0, VAR_5 = 0; VAR_6 < FUNC_0(VAR_1) && VAR_5 < VAR_3; VAR_6++)
  if (VAR_1[VAR_6].bit < VAR_0 &&
      FUNC_1(VAR_1[VAR_6].bit, VAR_4) &&
      (VAR_5 == 0 || VAR_2[VAR_5 - 1] != VAR_1[VAR_6].speed))
   VAR_2[VAR_5++] = VAR_1[VAR_6].speed;

 return VAR_5;
}
