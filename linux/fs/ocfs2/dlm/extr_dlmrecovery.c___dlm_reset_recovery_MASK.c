
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dead_node; } ;
struct dlm_ctxt {int recovery_map; TYPE_1__ reco; int spinlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dlm_ctxt*,int ) ;
 int FUNC_3 (struct dlm_ctxt*,int ) ;

__attribute__((used)) static inline void FUNC_4(struct dlm_ctxt *VAR_1)
{
 FUNC_0(&VAR_1->spinlock);
 FUNC_1(VAR_1->reco.dead_node, VAR_1->recovery_map);
 FUNC_2(VAR_1, VAR_0);
 FUNC_3(VAR_1, VAR_0);
}
