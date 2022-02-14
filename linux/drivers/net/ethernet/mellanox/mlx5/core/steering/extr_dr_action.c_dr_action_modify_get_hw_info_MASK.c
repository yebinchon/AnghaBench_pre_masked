
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct dr_action_modify_field_conv {int start; int end; } ;


 size_t FUNC_0 (struct dr_action_modify_field_conv*) ;
 struct dr_action_modify_field_conv* VAR_0 ;

__attribute__((used)) static const struct dr_action_modify_field_conv *
FUNC_1(u16 VAR_1)
{
 const struct dr_action_modify_field_conv *VAR_2;

 if (VAR_1 >= FUNC_0(VAR_0))
  goto not_found;

 VAR_2 = &VAR_0[VAR_1];
 if (!VAR_2->end && !VAR_2->start)
  goto not_found;

 return VAR_2;

not_found:
 return ((void*)0);
}
