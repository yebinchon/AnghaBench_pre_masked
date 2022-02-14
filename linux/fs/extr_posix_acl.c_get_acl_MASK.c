
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void posix_acl ;
struct inode {TYPE_1__* i_op; } ;
struct TYPE_2__ {void* (* get_acl ) (struct inode*,int) ;} ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct inode*) ;
 void** FUNC_2 (struct inode*,int) ;
 void* FUNC_3 (void**,void*,void*) ;
 int VAR_1 ;
 void* FUNC_4 (struct inode*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct inode*,int,int *) ;
 void* FUNC_9 (struct inode*,int) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

struct posix_acl *FUNC_12(struct inode *VAR_2, int VAR_3)
{
 void *VAR_4;
 struct posix_acl **VAR_5;
 struct posix_acl *VAR_6;







 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (!FUNC_5(VAR_6))
  return VAR_6;

 if (!FUNC_1(VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_10(VAR_1);
 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_3(VAR_5, VAR_0, VAR_4) != VAR_0)
                     ;
 if (!VAR_2->i_op->get_acl) {
  FUNC_8(VAR_2, VAR_3, ((void*)0));
  return ((void*)0);
 }
 VAR_6 = VAR_2->i_op->get_acl(VAR_2, VAR_3);

 if (FUNC_0(VAR_6)) {




  FUNC_3(VAR_5, VAR_4, VAR_0);
  return VAR_6;
 }




 FUNC_6(VAR_6);
 if (FUNC_11(FUNC_3(VAR_5, VAR_4, VAR_6) != VAR_4))
  FUNC_7(VAR_6);
 return VAR_6;
}
