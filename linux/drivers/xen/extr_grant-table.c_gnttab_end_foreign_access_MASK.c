
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int grant_ref_t ;


 int FUNC_0 (int ,int,int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned long) ;

void FUNC_5(grant_ref_t VAR_0, int VAR_1,
          unsigned long VAR_2)
{
 if (FUNC_1(VAR_0, VAR_1)) {
  FUNC_2(VAR_0);
  if (VAR_2 != 0)
   FUNC_3(FUNC_4(VAR_2));
 } else
  FUNC_0(VAR_0, VAR_1,
        VAR_2 ? FUNC_4(VAR_2) : ((void*)0));
}
