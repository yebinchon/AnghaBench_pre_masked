
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hinic_api_cmd_chain {scalar_t__ chain_type; } ;
typedef enum hinic_node_id { ____Placeholder_hinic_node_id } hinic_node_id ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hinic_api_cmd_chain*,int,int *,int ) ;

int FUNC_1(struct hinic_api_cmd_chain *VAR_2,
   enum hinic_node_id VAR_3, u8 *VAR_4, u16 VAR_5)
{

 if (VAR_2->chain_type == VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 return -VAR_0;
}
