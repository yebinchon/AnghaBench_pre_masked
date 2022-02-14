
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum qe_clock { ____Placeholder_qe_clock } qe_clock ;
typedef enum comm_dir { ____Placeholder_comm_dir } comm_dir ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(u32 VAR_5, enum qe_clock VAR_6,
       enum comm_dir VAR_7)
{
 int VAR_8 = -VAR_2;

 if (VAR_7 == VAR_0 && VAR_6 == VAR_3) {
  VAR_8 = 0;
  return VAR_8;
 }
 if (VAR_7 == VAR_1 && VAR_6 == VAR_4) {
  VAR_8 = 0;
  return VAR_8;
 }

 switch (VAR_5) {
 case 0:
 case 1:
  switch (VAR_6) {
  case 128:
   VAR_8 = 1;
   break;
  case 133:
   VAR_8 = 2;
   break;
  default:
   break;
  }
  break;
 case 2:
 case 3:
  switch (VAR_6) {
  case 128:
   VAR_8 = 1;
   break;
  case 132:
   VAR_8 = 2;
   break;
  default:
   break;
  }
  break;
 case 4:
 case 5:
  switch (VAR_6) {
  case 131:
   VAR_8 = 1;
   break;
  case 130:
   VAR_8 = 2;
   break;
  default:
   break;
  }
  break;
 case 6:
 case 7:
  switch (VAR_6) {
  case 131:
   VAR_8 = 1;
   break;
  case 129:
   VAR_8 = 2;
   break;
  default:
   break;
  }
  break;
 }

 return VAR_8;
}
