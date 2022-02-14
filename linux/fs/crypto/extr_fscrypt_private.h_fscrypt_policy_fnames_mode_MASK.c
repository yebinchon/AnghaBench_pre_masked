
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int filenames_encryption_mode; } ;
struct TYPE_3__ {int filenames_encryption_mode; } ;
union fscrypt_policy {int version; TYPE_2__ v2; TYPE_1__ v1; } ;
typedef int u8 ;


 int FUNC_0 () ;



__attribute__((used)) static inline u8
FUNC_1(const union fscrypt_policy *VAR_0)
{
 switch (VAR_0->version) {
 case 129:
  return VAR_0->v1.filenames_encryption_mode;
 case 128:
  return VAR_0->v2.filenames_encryption_mode;
 }
 FUNC_0();
}
