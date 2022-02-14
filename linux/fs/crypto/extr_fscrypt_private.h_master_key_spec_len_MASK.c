
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_key_specifier {int type; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static inline int FUNC_0(const struct fscrypt_key_specifier *VAR_2)
{
 switch (VAR_2->type) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 }
 return 0;
}
