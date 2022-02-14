
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union fscrypt_policy {scalar_t__ version; } ;


 int FUNC_0 (union fscrypt_policy const*) ;
 int FUNC_1 (union fscrypt_policy const*,union fscrypt_policy const*,int ) ;

bool FUNC_2(const union fscrypt_policy *VAR_0,
       const union fscrypt_policy *VAR_1)
{
 if (VAR_0->version != VAR_1->version)
  return 0;

 return !FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_0));
}
