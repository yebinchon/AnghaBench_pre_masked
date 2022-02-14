
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum qed_filter_opcode { ____Placeholder_qed_filter_opcode } qed_filter_opcode ;
typedef enum eth_filter_action { ____Placeholder_eth_filter_action } eth_filter_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




__attribute__((used)) static enum eth_filter_action FUNC_0(enum qed_filter_opcode VAR_4)
{
 enum eth_filter_action VAR_5 = VAR_3;

 switch (VAR_4) {
 case 130:
  VAR_5 = VAR_0;
  break;
 case 128:
  VAR_5 = VAR_1;
  break;
 case 129:
  VAR_5 = VAR_2;
  break;
 default:
  VAR_5 = VAR_3;
 }

 return VAR_5;
}
