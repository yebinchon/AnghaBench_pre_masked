
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {unsigned int c_cflag; int c_ospeed; } ;
typedef int speed_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int * VAR_3 ;
 unsigned int VAR_4 ;

speed_t FUNC_0(struct ktermios *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = VAR_5->c_cflag & VAR_1;






 if (VAR_6 & VAR_2) {
  VAR_6 &= ~VAR_2;

  if (VAR_6 < 1 || VAR_6 + 15 > VAR_4)
   VAR_5->c_cflag &= ~VAR_2;
  else
   VAR_6 += 15;
 }
 return VAR_6 >= VAR_4 ? 0 : VAR_3[VAR_6];
}
