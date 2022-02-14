
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tuner {int dummy; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_21 ;

__attribute__((used)) static v4l2_std_id FUNC_2(struct tuner *VAR_22, v4l2_std_id VAR_23)
{
 if (VAR_20[0] != '-' && (VAR_23 & VAR_4) == VAR_4) {
  switch (VAR_20[0]) {
  case '6':
   return VAR_5;
  case 'b':
  case 'B':
  case 'g':
  case 'G':
   return VAR_6;
  case 'i':
  case 'I':
   return VAR_8;
  case 'd':
  case 'D':
  case 'k':
  case 'K':
   return VAR_7;
  case 'M':
  case 'm':
   return VAR_9;
  case 'N':
  case 'n':
   if (VAR_20[1] == 'c' || VAR_20[1] == 'C')
    return VAR_11;
   return VAR_10;
  default:
   FUNC_1("pal= argument not recognised\n");
   break;
  }
 }
 if (VAR_21[0] != '-' && (VAR_23 & VAR_12) == VAR_12) {
  switch (VAR_21[0]) {
  case 'b':
  case 'B':
  case 'g':
  case 'G':
  case 'h':
  case 'H':
   return VAR_13 |
          VAR_15 |
          VAR_16;
  case 'd':
  case 'D':
  case 'k':
  case 'K':
   return VAR_14;
  case 'l':
  case 'L':
   if ((VAR_21[1] == 'C') || (VAR_21[1] == 'c'))
    return VAR_18;
   return VAR_17;
  default:
   FUNC_1("secam= argument not recognised\n");
   break;
  }
 }

 if (VAR_19[0] != '-' && (VAR_23 & VAR_0) == VAR_0) {
  switch (VAR_19[0]) {
  case 'm':
  case 'M':
   return VAR_1;
  case 'j':
  case 'J':
   return VAR_2;
  case 'k':
  case 'K':
   return VAR_3;
  default:
   FUNC_0("ntsc= argument not recognised\n");
   break;
  }
 }
 return VAR_23;
}
