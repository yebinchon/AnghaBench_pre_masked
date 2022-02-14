
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union fscrypt_policy {int dummy; } fscrypt_policy ;
typedef union fscrypt_context {int dummy; } fscrypt_context ;
struct inode {TYPE_2__* i_sb; int i_crypt_info; } ;
struct fscrypt_info {union fscrypt_policy ci_policy; } ;
typedef int ctx ;
struct TYPE_4__ {TYPE_1__* s_cop; } ;
struct TYPE_3__ {int (* get_context ) (struct inode*,union fscrypt_context*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 struct fscrypt_info* FUNC_1 (int ) ;
 int FUNC_2 (union fscrypt_policy*,union fscrypt_context*,int) ;
 int FUNC_3 (struct inode*,union fscrypt_context*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, union fscrypt_policy *VAR_4)
{
 const struct fscrypt_info *VAR_5;
 union fscrypt_context VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3->i_crypt_info);
 if (VAR_5) {

  *VAR_4 = VAR_5->ci_policy;
  return 0;
 }

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 VAR_7 = VAR_3->i_sb->s_cop->get_context(VAR_3, &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return (VAR_7 == -VAR_2) ? -VAR_0 : VAR_7;

 return FUNC_2(VAR_4, &VAR_6, VAR_7);
}
