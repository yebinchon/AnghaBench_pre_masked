
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_remote_node_context {int destination_state; int user_cookie; int user_callback; } ;





 int VAR_0 ;
 int FUNC_0 (struct sci_remote_node_context*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sci_remote_node_context *VAR_1)
{
 switch (VAR_1->destination_state) {
 case 129:
 case 128:
  VAR_1->destination_state = 129;

 case 130:
  FUNC_0(VAR_1, VAR_1->user_callback,
            VAR_1->user_cookie);
  break;
 default:
  VAR_1->destination_state = VAR_0;
  break;
 }
}
