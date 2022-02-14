
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_fsmap {scalar_t__ fmr_length; scalar_t__ fmr_physical; } ;
typedef scalar_t__ ext4_fsblk_t ;



__attribute__((used)) static inline ext4_fsblk_t FUNC_0(struct ext4_fsmap *VAR_0)
{
 return VAR_0->fmr_physical + VAR_0->fmr_length;
}
