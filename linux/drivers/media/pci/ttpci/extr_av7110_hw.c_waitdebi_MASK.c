
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av7110 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct av7110*,int ,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct av7110 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(4, "%p\n", VAR_2);

 for (VAR_5 = 0; VAR_5 < 100; VAR_5++) {
  if (FUNC_1(VAR_2, VAR_0, VAR_3, 0, 2) == VAR_4)
   return 0;
  FUNC_2(5);
 }
 return -VAR_1;
}
