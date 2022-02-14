
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_lock_resource {int state; int spinlock; } ;
struct dlm_ctxt {int spinlock; } ;


 int VAR_0 ;
 struct dlm_lock_resource* FUNC_0 (struct dlm_ctxt*,char const*,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dlm_lock_resource*) ;
 int FUNC_3 (int ,char*,unsigned int,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct dlm_lock_resource * FUNC_6(struct dlm_ctxt *VAR_1,
      const char *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct dlm_lock_resource *VAR_5 = ((void*)0);

 FUNC_3(0, "%.*s\n", VAR_3, VAR_2);

 FUNC_1(&VAR_1->spinlock);

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_4(&VAR_5->spinlock);
  if (VAR_5->state & VAR_0) {
   FUNC_5(&VAR_5->spinlock);
   FUNC_2(VAR_5);
   return ((void*)0);
  }
  FUNC_5(&VAR_5->spinlock);
 }

 return VAR_5;
}
