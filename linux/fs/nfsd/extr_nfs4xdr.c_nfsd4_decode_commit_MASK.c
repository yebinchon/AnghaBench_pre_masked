
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int dummy; } ;
struct nfsd4_commit {int co_count; int co_offset; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_3, struct nfsd4_commit *VAR_4)
{
 VAR_0;

 FUNC_0(12);
 VAR_2 = FUNC_2(VAR_2, &VAR_4->co_offset);
 VAR_4->co_count = FUNC_1(VAR_2++);

 VAR_1;
}
