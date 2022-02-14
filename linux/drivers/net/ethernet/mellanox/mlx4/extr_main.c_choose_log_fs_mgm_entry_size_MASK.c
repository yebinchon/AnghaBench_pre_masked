
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 int VAR_3 = VAR_1;

 for (VAR_3 = VAR_1; VAR_3 <= VAR_0;
       VAR_3++) {
  if (VAR_2 <= 4 * ((1 << VAR_3) / 16 - 2))
   break;
 }

 return (VAR_3 <= VAR_0) ? VAR_3 : -1;
}
