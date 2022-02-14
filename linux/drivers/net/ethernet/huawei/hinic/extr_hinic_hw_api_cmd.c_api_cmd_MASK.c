
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hinic_api_cmd_chain {size_t prod_idx; int sem; int curr_node; struct hinic_api_cmd_cell_ctxt* cell_ctxt; } ;
struct hinic_api_cmd_cell_ctxt {int cell_vaddr; } ;
typedef enum hinic_node_id { ____Placeholder_hinic_node_id } hinic_node_id ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hinic_api_cmd_chain*) ;
 int FUNC_1 (struct hinic_api_cmd_chain*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hinic_api_cmd_chain*,int,int *,int ) ;
 int FUNC_4 (struct hinic_api_cmd_chain*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hinic_api_cmd_chain*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct hinic_api_cmd_chain *VAR_1,
     enum hinic_node_id VAR_2, u8 *VAR_3, u16 VAR_4)
{
 struct hinic_api_cmd_cell_ctxt *VAR_5;
 int VAR_6;

 FUNC_2(&VAR_1->sem);
 if (FUNC_0(VAR_1)) {
  FUNC_5(&VAR_1->sem);
  return -VAR_0;
 }

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_1);

 FUNC_7();

 FUNC_4(VAR_1);

 VAR_5 = &VAR_1->cell_ctxt[VAR_1->prod_idx];

 VAR_1->curr_node = VAR_5->cell_vaddr;

 VAR_6 = FUNC_6(VAR_1);

 FUNC_5(&VAR_1->sem);
 return VAR_6;
}
