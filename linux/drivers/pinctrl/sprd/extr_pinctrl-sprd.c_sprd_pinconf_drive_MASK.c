
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_0)
{
 unsigned int VAR_1 = 0;

 switch (VAR_0) {
 case 2:
  break;
 case 4:
  VAR_1 |= FUNC_0(19);
  break;
 case 6:
  VAR_1 |= FUNC_0(20);
  break;
 case 8:
  VAR_1 |= FUNC_0(19) | FUNC_0(20);
  break;
 case 10:
  VAR_1 |= FUNC_0(21);
  break;
 case 12:
  VAR_1 |= FUNC_0(21) | FUNC_0(19);
  break;
 case 14:
  VAR_1 |= FUNC_0(21) | FUNC_0(20);
  break;
 case 16:
  VAR_1 |= FUNC_0(19) | FUNC_0(20) | FUNC_0(21);
  break;
 case 20:
  VAR_1 |= FUNC_0(22);
  break;
 case 21:
  VAR_1 |= FUNC_0(22) | FUNC_0(19);
  break;
 case 24:
  VAR_1 |= FUNC_0(22) | FUNC_0(20);
  break;
 case 25:
  VAR_1 |= FUNC_0(22) | FUNC_0(20) | FUNC_0(19);
  break;
 case 27:
  VAR_1 |= FUNC_0(22) | FUNC_0(21);
  break;
 case 29:
  VAR_1 |= FUNC_0(22) | FUNC_0(21) | FUNC_0(19);
  break;
 case 31:
  VAR_1 |= FUNC_0(22) | FUNC_0(21) | FUNC_0(20);
  break;
 case 33:
  VAR_1 |= FUNC_0(22) | FUNC_0(21) | FUNC_0(20) | FUNC_0(19);
  break;
 default:
  break;
 }

 return VAR_1;
}
