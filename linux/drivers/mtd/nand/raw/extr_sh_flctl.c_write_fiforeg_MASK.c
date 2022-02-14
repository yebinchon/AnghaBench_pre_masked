
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int * done_buff; } ;


 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct sh_flctl*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sh_flctl *VAR_0, int VAR_1,
      unsigned int VAR_2)
{
 int VAR_3, VAR_4;
 unsigned long *VAR_5 = (unsigned long *)&VAR_0->done_buff[VAR_2];

 VAR_4 = (VAR_1 + 3) / 4;
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_2(VAR_0);
  FUNC_3(FUNC_1(VAR_5[VAR_3]), FUNC_0(VAR_0));
 }
}
