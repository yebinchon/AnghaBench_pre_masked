
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_key_specifier {scalar_t__ __reserved; } ;


 scalar_t__ FUNC_0 (struct fscrypt_key_specifier const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct fscrypt_key_specifier *VAR_0)
{
 if (VAR_0->__reserved)
  return 0;
 return FUNC_0(VAR_0) != 0;
}
