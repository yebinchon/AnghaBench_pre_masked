
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_remote_node_context {void* user_cookie; int user_callback; int destination_state; } ;
struct isci_host {int eventq; } ;
typedef int scics_sds_remote_node_context_callback ;


 int VAR_0 ;
 struct isci_host* FUNC_0 (int ) ;
 int FUNC_1 (struct sci_remote_node_context*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
 struct sci_remote_node_context *VAR_1,
 scics_sds_remote_node_context_callback VAR_2,
 void *VAR_3)
{
 struct isci_host *VAR_4 = FUNC_0(FUNC_1(VAR_1));

 VAR_1->destination_state = VAR_0;
 VAR_1->user_callback = VAR_2;
 VAR_1->user_cookie = VAR_3;

 FUNC_2(&VAR_4->eventq);
}
