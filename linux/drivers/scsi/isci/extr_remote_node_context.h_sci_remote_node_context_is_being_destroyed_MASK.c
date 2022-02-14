
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ current_state_id; } ;
struct sci_remote_node_context {scalar_t__ destination_state; TYPE_1__ sm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(
 struct sci_remote_node_context *VAR_3)
{
 return (VAR_3->destination_state == VAR_0)
  || ((VAR_3->sm.current_state_id == VAR_2)
      && (VAR_3->destination_state == VAR_1));
}
