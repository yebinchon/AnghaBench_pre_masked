
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_compoundargs {int dummy; } ;
struct nfsd4_close {int cl_stateid; int cl_seqid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfsd4_compoundargs*,int *) ;
 int VAR_2 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_3, struct nfsd4_close *VAR_4)
{
 VAR_0;

 FUNC_0(4);
 VAR_4->cl_seqid = FUNC_1(VAR_2++);
 return FUNC_2(VAR_3, &VAR_4->cl_stateid);

 VAR_1;
}
