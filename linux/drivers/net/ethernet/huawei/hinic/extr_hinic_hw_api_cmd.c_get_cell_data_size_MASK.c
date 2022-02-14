
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum hinic_api_cmd_chain_type { ____Placeholder_hinic_api_cmd_chain_type } hinic_api_cmd_chain_type ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


__attribute__((used)) static u8 FUNC_1(enum hinic_api_cmd_chain_type VAR_3)
{
 u8 VAR_4 = 0;

 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_0(VAR_2 +
           VAR_1,
           VAR_0);
  break;
 default:
  break;
 }

 return VAR_4;
}
