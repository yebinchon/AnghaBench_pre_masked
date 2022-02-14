
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sci_remote_node_context {int sm; int destination_state; int remote_node_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sci_remote_node_context*,int ,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_2 ;

void FUNC_2(struct sci_remote_node_context *VAR_3,
         u16 VAR_4)
{
 FUNC_0(VAR_3, 0, sizeof(struct sci_remote_node_context));

 VAR_3->remote_node_index = VAR_4;
 VAR_3->destination_state = VAR_0;

 FUNC_1(&VAR_3->sm, VAR_2, VAR_1);
}
