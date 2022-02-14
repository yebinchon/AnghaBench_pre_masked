
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_action_entry {scalar_t__ id; } ;
struct flow_action {struct flow_action_entry* entries; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct flow_action *VAR_1,
          int VAR_2)
{
 struct flow_action_entry VAR_3;
 struct flow_action_entry VAR_4;

 VAR_3 = VAR_1->entries[VAR_2];
 if (VAR_3.id != VAR_0)
  return 0;

 if (VAR_2 == 0)
  return 1;

 VAR_4 = VAR_1->entries[VAR_2 - 1];

 return VAR_4.id != VAR_0;
}
