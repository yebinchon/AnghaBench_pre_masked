
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* name; } ;
struct dlm_lock_resource {TYPE_1__ lockname; } ;
struct dlm_ctxt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ctxt*,struct dlm_lock_resource*,char const*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct dlm_lock_resource*) ;
 void* FUNC_2 (int ,int ) ;

struct dlm_lock_resource *FUNC_3(struct dlm_ctxt *VAR_3,
       const char *VAR_4,
       unsigned int VAR_5)
{
 struct dlm_lock_resource *VAR_6 = ((void*)0);

 VAR_6 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_6)
  goto error;

 VAR_6->lockname.name = FUNC_2(VAR_1, VAR_0);
 if (!VAR_6->lockname.name)
  goto error;

 FUNC_0(VAR_3, VAR_6, VAR_4, VAR_5);
 return VAR_6;

error:
 if (VAR_6)
  FUNC_1(VAR_2, VAR_6);
 return ((void*)0);
}
