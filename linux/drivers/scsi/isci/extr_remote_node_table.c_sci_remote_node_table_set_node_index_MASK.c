
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sci_remote_node_table {int available_nodes_array_size; int* available_remote_nodes; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(
 struct sci_remote_node_table *VAR_3,
 u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 FUNC_0(
  (VAR_3->available_nodes_array_size * VAR_1)
  <= (VAR_4 / VAR_2)
  );

 VAR_5 = VAR_4 / VAR_0;
 VAR_6 = VAR_4 % VAR_0;
 VAR_7 = (VAR_6 / VAR_2) * sizeof(u32);
 VAR_8 = VAR_4 % VAR_2;

 VAR_3->available_remote_nodes[VAR_5] |=
  1 << (VAR_7 + VAR_8);
}
