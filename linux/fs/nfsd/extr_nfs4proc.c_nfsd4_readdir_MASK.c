
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct nfsd4_readdir {int rd_cookie; int* rd_bmval; int * rd_fhp; struct svc_rqst* rd_rqstp; TYPE_1__ rd_verf; } ;
union nfsd4_op_u {struct nfsd4_readdir readdir; } ;
typedef int u64 ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {size_t minorversion; int current_fh; } ;
struct TYPE_4__ {int data; } ;
typedef TYPE_2__ nfs4_verifier ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_6, struct nfsd4_compound_state *VAR_7,
       union nfsd4_op_u *VAR_8)
{
 struct nfsd4_readdir *VAR_9 = &VAR_8->readdir;
 u64 VAR_10 = VAR_9->rd_cookie;
 static const nfs4_verifier VAR_11;



 if (VAR_9->rd_bmval[1] & VAR_1)
  return VAR_5;

 VAR_9->rd_bmval[0] &= VAR_3[VAR_7->minorversion][0];
 VAR_9->rd_bmval[1] &= VAR_3[VAR_7->minorversion][1];
 VAR_9->rd_bmval[2] &= VAR_3[VAR_7->minorversion][2];

 if ((VAR_10 == 1) || (VAR_10 == 2) ||
     (VAR_10 == 0 && FUNC_0(VAR_9->rd_verf.data, VAR_11.data, VAR_0)))
  return VAR_4;

 VAR_9->rd_rqstp = VAR_6;
 VAR_9->rd_fhp = &VAR_7->current_fh;
 return VAR_2;
}
