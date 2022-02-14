
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct brcms_c_rateset {scalar_t__* mcs; } ;


 size_t VAR_0 ;

void FUNC_0(struct brcms_c_rateset *VAR_1)
{
 uint VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->mcs[VAR_2] = 0;
}
