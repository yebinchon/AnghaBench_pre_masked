
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pv_major; int pv_minor; } ;
struct dlm_ctxt {int node_num; int spinlock; int domain_map; TYPE_1__ dlm_locking_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ctxt*,int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dlm_ctxt *VAR_2)
{
 int VAR_3 = -1;


 if (VAR_2->dlm_locking_proto.pv_major == 1 &&
     VAR_2->dlm_locking_proto.pv_minor < 2)
  return;






 FUNC_2(&VAR_2->spinlock);
 while (1) {
  VAR_3 = FUNC_1(VAR_2->domain_map, VAR_1, VAR_3 + 1);
  if (VAR_3 >= VAR_1)
   break;
  if (VAR_3 == VAR_2->node_num)
   continue;

  FUNC_3(&VAR_2->spinlock);
  FUNC_0(VAR_2, VAR_0, VAR_3);
  FUNC_2(&VAR_2->spinlock);
 }
 FUNC_3(&VAR_2->spinlock);
}
