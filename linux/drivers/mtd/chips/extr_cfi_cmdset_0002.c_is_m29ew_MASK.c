
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_private {scalar_t__ mfr; scalar_t__ device_type; int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct cfi_private *VAR_3)
{
 if (VAR_3->mfr == VAR_2 &&
     ((VAR_3->device_type == VAR_1 && (VAR_3->id & 0xff) == 0x7e) ||
      (VAR_3->device_type == VAR_0 && VAR_3->id == 0x227e)))
  return 1;
 return 0;
}
