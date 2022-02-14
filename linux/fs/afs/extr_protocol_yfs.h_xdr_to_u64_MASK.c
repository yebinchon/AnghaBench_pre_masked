
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct yfs_xdr_u64 {int lsw; int msw; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u64 FUNC_1(const struct yfs_xdr_u64 VAR_0)
{
 return ((u64)FUNC_0(VAR_0.msw) << 32) | FUNC_0(VAR_0.lsw);
}
