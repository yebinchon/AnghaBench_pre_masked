
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int speed; unsigned int rate; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if (VAR_1[VAR_3].speed == VAR_2)
   return VAR_1[VAR_3].rate;

 return VAR_0;
}
