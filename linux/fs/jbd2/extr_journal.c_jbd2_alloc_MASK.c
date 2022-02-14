
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gfp_t ;


 int FUNC_0 (unsigned long) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 void* FUNC_4 (int ,int ) ;

void *FUNC_5(size_t VAR_1, gfp_t VAR_2)
{
 void *VAR_3;

 FUNC_0(VAR_1 & (VAR_1-1));

 if (VAR_1 < VAR_0)
  VAR_3 = FUNC_4(FUNC_3(VAR_1), VAR_2);
 else
  VAR_3 = (void *)FUNC_1(VAR_2, FUNC_2(VAR_1));



 FUNC_0(((unsigned long) VAR_3) & (VAR_1-1));

 return VAR_3;
}
