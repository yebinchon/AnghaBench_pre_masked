
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int dummy; } ;
struct dlm_ctxt {int spinlock; } ;


 struct dlm_lock_resource* FUNC_0 (struct dlm_ctxt*,char const*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (char const*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct dlm_lock_resource * FUNC_4(struct dlm_ctxt *VAR_0,
        const char *VAR_1,
        unsigned int VAR_2)
{
 struct dlm_lock_resource *VAR_3;
 unsigned int VAR_4 = FUNC_1(VAR_1, VAR_2);

 FUNC_2(&VAR_0->spinlock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
 FUNC_3(&VAR_0->spinlock);
 return VAR_3;
}
