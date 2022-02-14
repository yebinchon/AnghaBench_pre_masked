
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nsp32_hw_data ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(nsp32_hw_data *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;


 FUNC_1(VAR_0);


 FUNC_3(VAR_0, 1);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 1);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 0);


 FUNC_3(VAR_0, 0);


 FUNC_3(VAR_0, 0);


 for (VAR_2 = 7; VAR_2 >= 0; VAR_2--) {
  FUNC_3(VAR_0, ((VAR_1 >> VAR_2) & 1));
 }


 FUNC_3(VAR_0, 0);


 FUNC_1(VAR_0);


 FUNC_3(VAR_0, 1);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 1);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 0);
 FUNC_3(VAR_0, 0);


 FUNC_3(VAR_0, 1);


 FUNC_3(VAR_0, 0);


 VAR_3 = 0;
 for (VAR_2 = 7; VAR_2 >= 0; VAR_2--) {
  VAR_3 += (FUNC_0(VAR_0) << VAR_2);
 }


 FUNC_3(VAR_0, 1);


 FUNC_2(VAR_0);

 return VAR_3;
}
