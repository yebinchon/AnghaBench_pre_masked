
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct dlm_ctxt {int spinlock; TYPE_1__ reco; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct dlm_ctxt *VAR_1)
{
 int VAR_2;
 FUNC_0(&VAR_1->spinlock);
 VAR_2 = !!(VAR_1->reco.state & VAR_0);
 FUNC_1(&VAR_1->spinlock);
 return VAR_2;
}
