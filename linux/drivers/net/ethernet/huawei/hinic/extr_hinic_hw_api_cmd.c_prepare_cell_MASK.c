
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_api_cmd_chain {int chain_type; struct hinic_api_cmd_cell* curr_node; } ;
struct hinic_api_cmd_cell {int ctrl; } ;
typedef enum hinic_node_id { ____Placeholder_hinic_node_id } hinic_node_id ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hinic_api_cmd_chain*,int,void*,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct hinic_api_cmd_chain *VAR_0,
    enum hinic_node_id VAR_1,
    void *VAR_2, u16 VAR_3)
{
 struct hinic_api_cmd_cell *VAR_4 = VAR_0->curr_node;
 u16 VAR_5 = FUNC_0(VAR_0->chain_type);

 FUNC_2(&VAR_4->ctrl, VAR_5);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
