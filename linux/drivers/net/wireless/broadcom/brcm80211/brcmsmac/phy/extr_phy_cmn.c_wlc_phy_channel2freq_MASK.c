
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_3__ {size_t chan; int freq; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(uint VAR_1)
{
 uint VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].chan == VAR_1)
   return VAR_0[VAR_2].freq;
 return 0;
}
