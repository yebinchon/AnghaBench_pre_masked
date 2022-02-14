
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct ktermios {int c_cflag; } ;





 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct ktermios *VAR_1)
{
 unsigned int VAR_2;

 tcflag_t VAR_3 = VAR_1->c_cflag;

 switch (VAR_3 & VAR_0) {





 case 130:
  VAR_2 = 5;
  break;
 case 129:
  VAR_2 = 6;
  break;
 case 128:
  VAR_2 = 7;
  break;

 default:
  VAR_2 = 8;
  break;
 }

 return VAR_2;
}
