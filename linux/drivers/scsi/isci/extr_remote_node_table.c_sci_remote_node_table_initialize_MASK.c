
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct sci_remote_node_table {void* group_array_size; void* available_nodes_array_size; int remote_node_groups; int available_remote_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (struct sci_remote_node_table*,int,int) ;
 int FUNC_2 (struct sci_remote_node_table*,int) ;

void FUNC_3(
 struct sci_remote_node_table *VAR_2,
 u32 VAR_3)
{
 u32 VAR_4;




 FUNC_0(
  VAR_2->available_remote_nodes,
  0x00,
  sizeof(VAR_2->available_remote_nodes)
  );

 FUNC_0(
  VAR_2->remote_node_groups,
  0x00,
  sizeof(VAR_2->remote_node_groups)
  );


 VAR_2->available_nodes_array_size = (u16)
       (VAR_3 / VAR_0)
       + ((VAR_3 % VAR_0) != 0);



 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_2(VAR_2, VAR_4);
 }

 VAR_2->group_array_size = (u16)
           (VAR_3 / (VAR_1 * 32))
           + ((VAR_3 % (VAR_1 * 32)) != 0);

 for (VAR_4 = 0; VAR_4 < (VAR_3 / VAR_1); VAR_4++) {



  FUNC_1(VAR_2, 2, VAR_4);
 }


 if ((VAR_3 % VAR_1) == 2) {
  FUNC_1(VAR_2, 1, VAR_4);
 } else if ((VAR_3 % VAR_1) == 1) {
  FUNC_1(VAR_2, 0, VAR_4);
 }
}
