
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
struct fsmap {int fmr_physical; int fmr_length; int fmr_owner; int fmr_flags; int fmr_device; } ;
struct ext4_fsmap {int fmr_physical; int fmr_length; int fmr_owner; int fmr_flags; int fmr_device; } ;



void FUNC_0(struct super_block *VAR_0, struct ext4_fsmap *VAR_1,
       struct fsmap *VAR_2)
{
 VAR_1->fmr_device = VAR_2->fmr_device;
 VAR_1->fmr_flags = VAR_2->fmr_flags;
 VAR_1->fmr_physical = VAR_2->fmr_physical >> VAR_0->s_blocksize_bits;
 VAR_1->fmr_owner = VAR_2->fmr_owner;
 VAR_1->fmr_length = VAR_2->fmr_length >> VAR_0->s_blocksize_bits;
}
