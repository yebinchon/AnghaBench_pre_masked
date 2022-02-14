
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_2(struct nfsd4_compoundargs *VAR_3, u32 *VAR_4)
{
 __be32 *VAR_5;

 FUNC_0(4);
 *VAR_4 = FUNC_1(VAR_5++);

 if (*VAR_4 & ~VAR_0)
  return VAR_2;
 return VAR_1;
xdr_error:
 return VAR_2;
}
