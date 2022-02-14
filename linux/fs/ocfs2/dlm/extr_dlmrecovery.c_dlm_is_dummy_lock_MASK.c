
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_migratable_lock {scalar_t__ cookie; scalar_t__ type; scalar_t__ convert_type; scalar_t__ highest_blocked; scalar_t__ list; int node; } ;
struct dlm_ctxt {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct dlm_ctxt *VAR_2,
        struct dlm_migratable_lock *VAR_3,
        u8 *VAR_4)
{
 if (FUNC_0(VAR_3->cookie == 0 &&
     VAR_3->type == VAR_1 &&
     VAR_3->convert_type == VAR_1 &&
     VAR_3->highest_blocked == VAR_1 &&
     VAR_3->list == VAR_0)) {
  *VAR_4 = VAR_3->node;
  return 1;
 }
 return 0;
}
