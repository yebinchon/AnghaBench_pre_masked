
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlxsw_emad_op_tlv_status { ____Placeholder_mlxsw_emad_op_tlv_status } mlxsw_emad_op_tlv_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_2,
         enum mlxsw_emad_op_tlv_status *VAR_3)
{
 *VAR_3 = FUNC_0(VAR_2);

 switch (*VAR_3) {
 case 130:
  return 0;
 case 137:
 case 134:
  return -VAR_0;
 case 128:
 case 129:
 case 132:
 case 136:
 case 133:
 case 138:
 case 131:
 case 135:
 default:
  return -VAR_1;
 }
}
