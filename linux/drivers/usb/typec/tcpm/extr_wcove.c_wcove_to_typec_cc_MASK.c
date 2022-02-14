
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum typec_cc_status { ____Placeholder_typec_cc_status } typec_cc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_9 ;



__attribute__((used)) static enum typec_cc_status FUNC_1(unsigned int VAR_10)
{
 if (VAR_10 & VAR_9) {
  if (VAR_10 & VAR_6)
   return VAR_5;
  else if (VAR_10 & VAR_7)
   return VAR_3;
  else if (VAR_10 & VAR_8)
   return VAR_4;
 } else {
  switch (FUNC_0(VAR_10)) {
  case 128:
   return VAR_2;
  case 129:
   return VAR_1;
  default:
   break;
  }
 }
 return VAR_0;
}
