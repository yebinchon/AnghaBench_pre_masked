
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cas*,int) ;
 int FUNC_1 (struct cas*) ;

__attribute__((used)) static int FUNC_2(struct cas *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2) < 0) {
   FUNC_1(VAR_1);
   return -1;
  }
 }
 return 0;
}
