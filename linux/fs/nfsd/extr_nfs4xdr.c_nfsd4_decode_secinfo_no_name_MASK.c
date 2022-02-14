
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_secinfo_no_name {int sin_style; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_2(struct nfsd4_compoundargs *VAR_3,
       struct nfsd4_secinfo_no_name *VAR_4)
{
 VAR_0;

 FUNC_0(4);
 VAR_4->sin_style = FUNC_1(VAR_2++);
 VAR_1;
}
