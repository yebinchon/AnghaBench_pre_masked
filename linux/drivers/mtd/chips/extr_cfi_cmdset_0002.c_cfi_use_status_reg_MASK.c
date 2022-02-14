
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cfi_private {struct cfi_pri_amdstd* cmdset_priv; } ;
struct cfi_pri_amdstd {char MinorVersion; int SoftwareFeatures; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct cfi_private *VAR_2)
{
 struct cfi_pri_amdstd *VAR_3 = VAR_2->cmdset_priv;
 u8 VAR_4 = VAR_1 | VAR_0;

 return VAR_3->MinorVersion >= '5' &&
  (VAR_3->SoftwareFeatures & VAR_4) == VAR_1;
}
