
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_lock_resource {int state; int spinlock; } ;
struct dlm_ctxt {int spinlock; int domain_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct dlm_ctxt *VAR_1,
         struct dlm_lock_resource *VAR_2,
         u8 VAR_3)
{
 int VAR_4;
 FUNC_0(&VAR_2->spinlock);
 VAR_4 = !!(VAR_2->state & VAR_0);
 FUNC_1(&VAR_2->spinlock);



 FUNC_0(&VAR_1->spinlock);
 if (!FUNC_2(VAR_3, VAR_1->domain_map))
  VAR_4 = 1;
 FUNC_1(&VAR_1->spinlock);
 return VAR_4;
}
