
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_sock_container {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long*,int ,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct o2net_sock_container**,int*) ;
 int FUNC_5 (struct o2net_sock_container*) ;
 int FUNC_6 (int,unsigned long*) ;

void FUNC_7(unsigned long *VAR_1, unsigned VAR_2)
{
 struct o2net_sock_container *VAR_3;
 int VAR_4, VAR_5;

 FUNC_1(VAR_2 < (FUNC_0(VAR_0) * sizeof(unsigned long)));

 FUNC_2(VAR_1, 0, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (!FUNC_4(FUNC_3(VAR_4), &VAR_3, &VAR_5))
   continue;
  if (!VAR_5) {
   FUNC_6(VAR_4, VAR_1);
   FUNC_5(VAR_3);
  }
 }
}
