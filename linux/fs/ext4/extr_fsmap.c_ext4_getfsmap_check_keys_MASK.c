
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_fsmap {scalar_t__ fmr_device; scalar_t__ fmr_physical; scalar_t__ fmr_owner; } ;



__attribute__((used)) static bool FUNC_0(struct ext4_fsmap *VAR_0,
         struct ext4_fsmap *VAR_1)
{
 if (VAR_0->fmr_device > VAR_1->fmr_device)
  return 0;
 if (VAR_0->fmr_device < VAR_1->fmr_device)
  return 1;

 if (VAR_0->fmr_physical > VAR_1->fmr_physical)
  return 0;
 if (VAR_0->fmr_physical < VAR_1->fmr_physical)
  return 1;

 if (VAR_0->fmr_owner > VAR_1->fmr_owner)
  return 0;
 if (VAR_0->fmr_owner < VAR_1->fmr_owner)
  return 1;

 return 0;
}
