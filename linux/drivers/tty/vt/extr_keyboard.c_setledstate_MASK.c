
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_struct {int ledmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct kbd_struct *VAR_4, unsigned int VAR_5)
{
        unsigned long VAR_6;
        FUNC_1(&VAR_2, VAR_6);
 if (!(VAR_5 & ~7)) {
  VAR_3 = VAR_5;
  VAR_4->ledmode = VAR_1;
 } else
  VAR_4->ledmode = VAR_0;

 FUNC_0();
 FUNC_2(&VAR_2, VAR_6);
}
