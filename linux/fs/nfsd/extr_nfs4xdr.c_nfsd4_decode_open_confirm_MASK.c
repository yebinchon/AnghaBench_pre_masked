
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_open_confirm {int oc_seqid; int oc_req_stateid; } ;
struct nfsd4_compoundargs {int minorversion; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nfsd4_compoundargs*,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static __be32
FUNC_3(struct nfsd4_compoundargs *VAR_5, struct nfsd4_open_confirm *VAR_6)
{
 VAR_0;

 if (VAR_5->minorversion >= 1)
  return VAR_2;

 VAR_4 = FUNC_2(VAR_5, &VAR_6->oc_req_stateid);
 if (VAR_4)
  return VAR_4;
 FUNC_0(4);
 VAR_6->oc_seqid = FUNC_1(VAR_3++);

 VAR_1;
}
