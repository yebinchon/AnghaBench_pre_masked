
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qm_mcr_querycgr {int i_bcnt_lo; scalar_t__ i_bcnt_hi; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u64 FUNC_1(const struct qm_mcr_querycgr *VAR_0)
{
 return ((u64)VAR_0->i_bcnt_hi << 32) | FUNC_0(VAR_0->i_bcnt_lo);
}
