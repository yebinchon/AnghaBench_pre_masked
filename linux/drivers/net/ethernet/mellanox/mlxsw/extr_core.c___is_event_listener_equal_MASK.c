
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_event_listener {scalar_t__ func; scalar_t__ trap_id; } ;



__attribute__((used)) static bool FUNC_0(const struct mlxsw_event_listener *VAR_0,
          const struct mlxsw_event_listener *VAR_1)
{
 return (VAR_0->func == VAR_1->func &&
  VAR_0->trap_id == VAR_1->trap_id);
}
