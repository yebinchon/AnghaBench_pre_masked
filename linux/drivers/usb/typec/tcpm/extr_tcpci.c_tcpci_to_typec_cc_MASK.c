
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

__attribute__((used)) static enum typec_cc_status FUNC_0(unsigned int VAR_6, bool VAR_7)
{
 switch (VAR_6) {
 case 0x1:
  return VAR_7 ? VAR_5 : VAR_1;
 case 0x2:
  return VAR_7 ? VAR_3 : VAR_2;
 case 0x3:
  if (VAR_7)
   return VAR_4;

 case 0x0:
 default:
  return VAR_0;
 }
}
