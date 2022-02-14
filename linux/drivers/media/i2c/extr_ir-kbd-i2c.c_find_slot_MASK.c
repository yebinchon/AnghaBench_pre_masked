
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(u16 *VAR_0, unsigned int VAR_1, u16 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_0(&VAR_0[VAR_3]) == VAR_2) {
   return VAR_3;
  } else if (!VAR_0[VAR_3]) {
   FUNC_1(VAR_2, &VAR_0[VAR_3]);
   return VAR_3;
  }
 }

 return -1;
}
