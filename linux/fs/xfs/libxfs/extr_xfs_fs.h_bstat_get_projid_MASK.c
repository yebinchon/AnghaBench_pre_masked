
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xfs_bstat {int bs_projid_lo; scalar_t__ bs_projid_hi; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(const struct xfs_bstat *VAR_0)
{
 return (uint32_t)VAR_0->bs_projid_hi << 16 | VAR_0->bs_projid_lo;
}
