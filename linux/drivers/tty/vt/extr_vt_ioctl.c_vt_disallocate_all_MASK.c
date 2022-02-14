
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct vc_data*) ;
 int FUNC_4 (int *) ;
 struct vc_data* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void)
{
 struct vc_data *VAR_2[VAR_0];
 int VAR_3;

 FUNC_1();
 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
  if (!FUNC_0(VAR_3))
   VAR_2[VAR_3] = FUNC_5(VAR_3);
  else
   VAR_2[VAR_3] = ((void*)0);
 FUNC_2();

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2[VAR_3] && VAR_3 >= VAR_1) {
   FUNC_4(&VAR_2[VAR_3]->port);
   FUNC_3(VAR_2[VAR_3]);
  }
 }
}
