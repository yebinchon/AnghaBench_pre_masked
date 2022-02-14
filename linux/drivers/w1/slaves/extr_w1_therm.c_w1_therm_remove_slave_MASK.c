
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int * family_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct w1_slave *VAR_0)
{
 int VAR_1 = FUNC_2(1, FUNC_0(VAR_0->family_data));

 while (VAR_1) {
  FUNC_4(1000);
  VAR_1 = FUNC_1(FUNC_0(VAR_0->family_data));
 }
 FUNC_3(VAR_0->family_data);
 VAR_0->family_data = ((void*)0);
}
