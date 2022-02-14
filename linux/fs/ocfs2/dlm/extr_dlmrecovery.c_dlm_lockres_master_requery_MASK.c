
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dlm_node_iter {int dummy; } ;
struct dlm_lock_resource {int dummy; } ;
struct dlm_ctxt {int node_num; int spinlock; int domain_map; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*,int,scalar_t__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct dlm_node_iter*) ;
 int FUNC_4 (struct dlm_node_iter*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dlm_ctxt *VAR_1,
          struct dlm_lock_resource *VAR_2,
          u8 *VAR_3)
{
 struct dlm_node_iter VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 *VAR_3 = VAR_0;
 FUNC_7(&VAR_1->spinlock);
 FUNC_3(VAR_1->domain_map, &VAR_4);
 FUNC_8(&VAR_1->spinlock);

 while ((VAR_5 = FUNC_4(&VAR_4)) >= 0) {

  if (VAR_5 == VAR_1->node_num)
   continue;
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3);
  if (VAR_6 < 0) {
   FUNC_6(VAR_6);
   if (!FUNC_2(VAR_6))
    FUNC_0();


  }
  if (*VAR_3 != VAR_0) {
   FUNC_5(0, "lock master is %u\n", *VAR_3);
   break;
  }
 }
 return VAR_6;
}
