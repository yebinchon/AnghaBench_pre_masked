
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_api_cmd_chain {int dummy; } ;
typedef enum hinic_api_cmd_chain_type { ____Placeholder_hinic_api_cmd_chain_type } hinic_api_cmd_chain_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hinic_api_cmd_chain*) ;

void FUNC_1(struct hinic_api_cmd_chain **VAR_2)
{
 enum hinic_api_cmd_chain_type VAR_3;

 VAR_3 = VAR_1;
 for ( ; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_3 != VAR_1)
   continue;

  FUNC_0(VAR_2[VAR_3]);
 }
}
