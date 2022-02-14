
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {scalar_t__ chan_fifo0_tx; int * done_buff; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_flctl*) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct sh_flctl*,unsigned long*,int,int ) ;
 int FUNC_3 (struct sh_flctl*) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct sh_flctl *VAR_1, int VAR_2,
      unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long *VAR_6 = (unsigned long *)&VAR_1->done_buff[VAR_3];

 VAR_5 = (VAR_2 + 3) / 4;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_6[VAR_4] = FUNC_1(VAR_6[VAR_4]);


 if (VAR_1->chan_fifo0_tx && VAR_2 >= 32 &&
  FUNC_2(VAR_1, VAR_6, VAR_2, VAR_0) > 0)
   return;


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_6[VAR_4], FUNC_0(VAR_1));
 }
}
