
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;



__attribute__((used)) static bool FUNC_0(void * const VAR_0, size_t VAR_1)
{

 u32 *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1 / sizeof(*VAR_2); VAR_3++)
  if (VAR_2[VAR_3])
   return 0;

 return 1;
}
