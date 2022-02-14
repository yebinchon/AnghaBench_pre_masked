
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_getattr {int* ga_bmval; int * ga_fhp; } ;
union nfsd4_op_u {struct nfsd4_getattr getattr; } ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {size_t minorversion; int current_fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int** VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_5, struct nfsd4_compound_state *VAR_6,
       union nfsd4_op_u *VAR_7)
{
 struct nfsd4_getattr *VAR_8 = &VAR_7->getattr;
 __be32 VAR_9;

 VAR_9 = FUNC_0(VAR_5, &VAR_6->current_fh, 0, VAR_0);
 if (VAR_9)
  return VAR_9;

 if (VAR_8->ga_bmval[1] & VAR_1)
  return VAR_4;

 VAR_8->ga_bmval[0] &= VAR_3[VAR_6->minorversion][0];
 VAR_8->ga_bmval[1] &= VAR_3[VAR_6->minorversion][1];
 VAR_8->ga_bmval[2] &= VAR_3[VAR_6->minorversion][2];

 VAR_8->ga_fhp = &VAR_6->current_fh;
 return VAR_2;
}
