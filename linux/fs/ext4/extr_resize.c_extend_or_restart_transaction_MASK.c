
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(handle_t *VAR_1, int VAR_2)
{
 int VAR_3;

 if (FUNC_0(VAR_1, VAR_2))
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3) {
  VAR_3 = FUNC_2(VAR_1, VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
