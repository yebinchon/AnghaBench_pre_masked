
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int ,unsigned long) ;
 void* FUNC_3 (unsigned long) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void *FUNC_5(unsigned long VAR_1)
{
 void *VAR_2;
 unsigned long VAR_3;


 VAR_1 = FUNC_0(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 FUNC_2(VAR_2, 0, VAR_1);
 VAR_3 = (unsigned long) VAR_2;

 while ((long)VAR_1 > 0) {
  FUNC_1(FUNC_4((void *)VAR_3));
  VAR_3 += VAR_0;
  VAR_1 -= VAR_0;
 }
 return VAR_2;
}
