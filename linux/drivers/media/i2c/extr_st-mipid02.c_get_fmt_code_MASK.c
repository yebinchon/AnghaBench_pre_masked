
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static __u32 FUNC_1(__u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2])
   return VAR_1;
 }

 return VAR_0[0];
}
