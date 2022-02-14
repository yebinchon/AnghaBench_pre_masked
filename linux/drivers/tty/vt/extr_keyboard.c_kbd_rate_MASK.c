
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_repeat {int dummy; } ;


 int FUNC_0 (int *,struct kbd_repeat*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct kbd_repeat *VAR_2)
{
 struct kbd_repeat VAR_3[2] = { *VAR_2 };

 FUNC_0(&VAR_0, VAR_3, VAR_1);
 *VAR_2 = VAR_3[1];

 return 0;
}
