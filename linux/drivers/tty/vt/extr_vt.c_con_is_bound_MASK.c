
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct consw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct consw const** VAR_1 ;

int FUNC_1(const struct consw *VAR_2)
{
 int VAR_3, VAR_4 = 0;

 FUNC_0();

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3] == VAR_2) {
   VAR_4 = 1;
   break;
  }
 }

 return VAR_4;
}
