
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;
struct cfi_early_fixup {scalar_t__ mfr; scalar_t__ id; int (* fixup ) (struct cfi_private*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cfi_private*) ;

__attribute__((used)) static void FUNC_1(struct cfi_private *VAR_2,
       const struct cfi_early_fixup *VAR_3)
{
 const struct cfi_early_fixup *VAR_4;

 for (VAR_4 = VAR_3; VAR_4->fixup; VAR_4++) {
  if (((VAR_4->mfr == VAR_1) || (VAR_4->mfr == VAR_2->mfr)) &&
      ((VAR_4->id == VAR_0) || (VAR_4->id == VAR_2->id))) {
   VAR_4->fixup(VAR_2);
  }
 }
}
