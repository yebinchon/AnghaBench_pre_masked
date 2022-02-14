
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union fscrypt_context {int dummy; } fscrypt_context ;
struct inode {TYPE_2__* i_sb; int i_crypt_info; } ;
struct fscrypt_info {int ci_policy; } ;
typedef int ctx ;
struct TYPE_4__ {TYPE_1__* s_cop; } ;
struct TYPE_3__ {int (* set_context ) (struct inode*,union fscrypt_context*,int,void*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fscrypt_info* FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (union fscrypt_context*,int *) ;
 int FUNC_4 (struct inode*,union fscrypt_context*,int,void*) ;

int FUNC_5(struct inode *VAR_2, struct inode *VAR_3,
      void *VAR_4, bool VAR_5)
{
 union fscrypt_context VAR_6;
 int VAR_7;
 struct fscrypt_info *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_1(VAR_2->i_crypt_info);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_3(&VAR_6, &VAR_8->ci_policy);

 FUNC_0(sizeof(VAR_6) != VAR_1);
 VAR_9 = VAR_2->i_sb->s_cop->set_context(VAR_3, &VAR_6, VAR_7, VAR_4);
 if (VAR_9)
  return VAR_9;
 return VAR_5 ? FUNC_2(VAR_3): 0;
}
