
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int master_key_identifier; } ;
union fscrypt_policy {int version; TYPE_2__ v2; } ;
typedef union fscrypt_context {int dummy; } fscrypt_context ;
struct inode {TYPE_3__* i_sb; } ;
struct TYPE_8__ {int pid; int comm; } ;
struct TYPE_7__ {TYPE_1__* s_cop; } ;
struct TYPE_5__ {int (* set_context ) (struct inode*,union fscrypt_context*,int,int *) ;} ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (union fscrypt_context*,union fscrypt_policy const*) ;
 int FUNC_2 (union fscrypt_policy const*,struct inode*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct inode*,union fscrypt_context*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2,
     const union fscrypt_policy *VAR_3)
{
 union fscrypt_context VAR_4;
 int VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_3, VAR_2))
  return -VAR_0;

 switch (VAR_3->version) {
 case 129:
  FUNC_4("%s (pid %d) is setting deprecated v1 encryption policy; recommend upgrading to v2.\n",
        VAR_1->comm, VAR_1->pid);
  break;
 case 128:
  VAR_6 = FUNC_3(VAR_2->i_sb,
            VAR_3->v2.master_key_identifier);
  if (VAR_6)
   return VAR_6;
  break;
 default:
  FUNC_0(1);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(&VAR_4, VAR_3);

 return VAR_2->i_sb->s_cop->set_context(VAR_2, &VAR_4, VAR_5, ((void*)0));
}
