
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {scalar_t__ c_ispeed; scalar_t__ c_ospeed; int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(const struct ktermios *VAR_3, const struct ktermios *VAR_4)
{
 if (VAR_3->c_ispeed != VAR_4->c_ispeed || VAR_3->c_ospeed != VAR_4->c_ospeed)
  return 1;
 if ((VAR_3->c_cflag ^ VAR_4->c_cflag) & ~(VAR_2 | VAR_1 | VAR_0))
  return 1;
 return 0;
}
