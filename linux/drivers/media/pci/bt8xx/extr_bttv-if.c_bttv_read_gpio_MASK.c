
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct bttv** VAR_3 ;
 unsigned long FUNC_0 () ;

int FUNC_1(unsigned int VAR_4, unsigned long *VAR_5)
{
 struct bttv *VAR_6;

 if (VAR_4 >= VAR_2) {
  return -VAR_0;
 }

 VAR_6 = VAR_3[VAR_4];
 if (!VAR_6)
  return -VAR_1;

 if(VAR_6->shutdown) {
  return -VAR_1;
 }



 *VAR_5 = FUNC_0();
 return 0;
}
