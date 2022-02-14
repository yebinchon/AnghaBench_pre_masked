
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
struct fscrypt_info {TYPE_2__ ci_policy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fscrypt_info*,int const*) ;
 int FUNC_1 (struct fscrypt_info*,int const*) ;

int FUNC_2(struct fscrypt_info *VAR_1, const u8 *VAR_2)
{
 if (VAR_1->ci_policy.v1.flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return FUNC_0(VAR_1, VAR_2);
}
