
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct cx18 {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;

__attribute__((used)) static v4l2_std_id FUNC_1(struct cx18 *VAR_20)
{
 switch (VAR_18[0]) {
 case '6':
  return VAR_3;
 case 'b':
 case 'B':
 case 'g':
 case 'G':
  return VAR_4;
 case 'h':
 case 'H':
  return VAR_6;
 case 'n':
 case 'N':
  if (VAR_18[1] == 'c' || VAR_18[1] == 'C')
   return VAR_10;
  return VAR_9;
 case 'i':
 case 'I':
  return VAR_7;
 case 'd':
 case 'D':
 case 'k':
 case 'K':
  return VAR_5;
 case 'M':
 case 'm':
  return VAR_8;
 case '-':
  break;
 default:
  FUNC_0("pal= argument not recognised\n");
  return 0;
 }

 switch (VAR_19[0]) {
 case 'b':
 case 'B':
 case 'g':
 case 'G':
 case 'h':
 case 'H':
  return VAR_11 | VAR_13 | VAR_14;
 case 'd':
 case 'D':
 case 'k':
 case 'K':
  return VAR_12;
 case 'l':
 case 'L':
  if (VAR_19[1] == 'C' || VAR_19[1] == 'c')
   return VAR_16;
  return VAR_15;
 case '-':
  break;
 default:
  FUNC_0("secam= argument not recognised\n");
  return 0;
 }

 switch (VAR_17[0]) {
 case 'm':
 case 'M':
  return VAR_0;
 case 'j':
 case 'J':
  return VAR_1;
 case 'k':
 case 'K':
  return VAR_2;
 case '-':
  break;
 default:
  FUNC_0("ntsc= argument not recognised\n");
  return 0;
 }


 return 0;
}
