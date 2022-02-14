
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_migratable_lockres {int dummy; } ;
struct TYPE_2__ {int node; void* highest_blocked; void* convert_type; void* type; scalar_t__ cookie; } ;
struct dlm_lock {TYPE_1__ ml; int * lksb; } ;
struct dlm_ctxt {int node_num; } ;
typedef int dummy ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct dlm_lock*,struct dlm_migratable_lockres*,int ) ;
 int FUNC_1 (struct dlm_lock*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dlm_ctxt *VAR_2,
          struct dlm_migratable_lockres *VAR_3)
{
 struct dlm_lock VAR_4;
 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ml.cookie = 0;
 VAR_4.ml.type = VAR_1;
 VAR_4.ml.convert_type = VAR_1;
 VAR_4.ml.highest_blocked = VAR_1;
 VAR_4.lksb = ((void*)0);
 VAR_4.ml.node = VAR_2->node_num;
 FUNC_0(&VAR_4, VAR_3, VAR_0);
}
