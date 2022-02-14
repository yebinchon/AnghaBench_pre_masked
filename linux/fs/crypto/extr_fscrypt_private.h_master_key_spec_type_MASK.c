
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_key_specifier {int type; } ;





__attribute__((used)) static inline const char *FUNC_0(
    const struct fscrypt_key_specifier *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
  return "descriptor";
 case 128:
  return "identifier";
 }
 return "[unknown]";
}
