
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int * done_buff; } ;


 int FUNC_0 (struct sh_flctl*) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct sh_flctl*) ;

__attribute__((used)) static void FUNC_4(struct sh_flctl *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 unsigned long *VAR_3 = (unsigned long *)&VAR_0->done_buff[VAR_1];

 FUNC_3(VAR_0);

 VAR_2 = FUNC_2(FUNC_0(VAR_0));
 *VAR_3 = FUNC_1(VAR_2);
}
