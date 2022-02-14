
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flchip {int dummy; } ;
struct cfi_private {scalar_t__ mfr; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct cfi_private *VAR_2, struct flchip *VAR_3)
{




 if (VAR_2->mfr == VAR_0 && VAR_2->id == VAR_1)
  return 1;
 return 0;
}
