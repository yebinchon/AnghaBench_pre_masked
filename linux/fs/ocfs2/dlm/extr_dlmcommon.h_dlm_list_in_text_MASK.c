
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dlm_lockres_list { ____Placeholder_dlm_lockres_list } dlm_lockres_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline char *FUNC_0(enum dlm_lockres_list VAR_3)
{
 if (VAR_3 == VAR_2)
  return "granted";
 else if (VAR_3 == VAR_1)
  return "converting";
 else if (VAR_3 == VAR_0)
  return "blocked";
 else
  return "unknown";
}
