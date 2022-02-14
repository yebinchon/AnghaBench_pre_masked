
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_fsmap {int fmr_length; int fmr_offset; int fmr_owner; int fmr_physical; int fmr_flags; int fmr_device; } ;
struct fsmap {scalar_t__* fmr_reserved; void* fmr_length; void* fmr_offset; int fmr_owner; void* fmr_physical; int fmr_flags; int fmr_device; } ;


 void* FUNC_0 (int ) ;

void
FUNC_1(
 struct fsmap *VAR_0,
 struct xfs_fsmap *VAR_1)
{
 VAR_0->fmr_device = VAR_1->fmr_device;
 VAR_0->fmr_flags = VAR_1->fmr_flags;
 VAR_0->fmr_physical = FUNC_0(VAR_1->fmr_physical);
 VAR_0->fmr_owner = VAR_1->fmr_owner;
 VAR_0->fmr_offset = FUNC_0(VAR_1->fmr_offset);
 VAR_0->fmr_length = FUNC_0(VAR_1->fmr_length);
 VAR_0->fmr_reserved[0] = 0;
 VAR_0->fmr_reserved[1] = 0;
 VAR_0->fmr_reserved[2] = 0;
}
