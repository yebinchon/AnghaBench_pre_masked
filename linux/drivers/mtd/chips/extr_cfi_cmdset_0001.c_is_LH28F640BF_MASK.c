
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct cfi_private *VAR_5)
{

 if (VAR_5->mfr == VAR_0 && (
     VAR_5->id == VAR_4 || VAR_5->id == VAR_2 ||
     VAR_5->id == VAR_3 || VAR_5->id == VAR_1))
  return 1;
 return 0;
}
