
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gru_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_3;
 int VAR_4 = FUNC_1(sizeof(struct gru_state) *
         VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0((unsigned long)VAR_2[VAR_3], VAR_4);
}
