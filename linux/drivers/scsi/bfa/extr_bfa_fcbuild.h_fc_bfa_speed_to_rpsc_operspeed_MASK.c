
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum fc_rpsc_op_speed { ____Placeholder_fc_rpsc_op_speed } fc_rpsc_op_speed ;
typedef enum bfa_port_speed { ____Placeholder_bfa_port_speed } bfa_port_speed ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline enum fc_rpsc_op_speed
FUNC_0(enum bfa_port_speed VAR_7)
{
 switch (VAR_7) {

 case 131:
  return VAR_2;

 case 130:
  return VAR_3;

 case 129:
  return VAR_4;

 case 128:
  return VAR_5;

 case 132:
  return VAR_1;

 case 133:
  return VAR_0;

 default:
  return VAR_6;
 }
}
