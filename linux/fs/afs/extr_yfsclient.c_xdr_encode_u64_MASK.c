
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct yfs_xdr_u64 {int dummy; } ;
typedef int __be32 ;


 struct yfs_xdr_u64 FUNC_0 (int ) ;
 int FUNC_1 (struct yfs_xdr_u64*) ;

__attribute__((used)) static __be32 *FUNC_2(__be32 *VAR_0, u64 VAR_1)
{
 struct yfs_xdr_u64 *VAR_2 = (void *)VAR_0;

 *VAR_2 = FUNC_0(VAR_1);
 return VAR_0 + FUNC_1(VAR_2);
}
