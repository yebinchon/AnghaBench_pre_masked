
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lynxfb_output {int paths; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_8 ;

int FUNC_2(struct lynxfb_output *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;

 switch (VAR_10) {
 case 129:
  VAR_11 = VAR_2;
  VAR_12 = 0;
  break;
 case 131:
  VAR_11 = VAR_2;
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_11 = VAR_4;
  VAR_12 = VAR_1;
  break;
 case 132:
  VAR_11 = VAR_3;
  VAR_12 = VAR_1;
  break;
 case 130:
  VAR_11 = VAR_5;
  VAR_12 = VAR_1;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_9->paths & VAR_8) {
  unsigned int VAR_13;

  VAR_13 = FUNC_0(VAR_0) & ~VAR_6;
  FUNC_1(VAR_0, VAR_13 | VAR_11);

  VAR_13 = FUNC_0(VAR_0) & ~VAR_1;
  FUNC_1(VAR_0, VAR_13 | VAR_12);
 }
 return 0;
}
