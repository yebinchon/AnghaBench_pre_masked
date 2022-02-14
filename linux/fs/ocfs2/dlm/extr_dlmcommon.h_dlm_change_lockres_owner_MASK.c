
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dlm_lock_resource {scalar_t__ owner; int spinlock; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct dlm_ctxt *VAR_0,
         struct dlm_lock_resource *VAR_1,
         u8 VAR_2)
{
 FUNC_0(&VAR_1->spinlock);

 if (VAR_2 != VAR_1->owner)
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
