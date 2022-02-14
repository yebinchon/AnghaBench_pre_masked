
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_open {scalar_t__ op_create; scalar_t__ op_createmode; int op_bmval; } ;
struct nfsd4_compound_state {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct svc_rqst*,struct nfsd4_compound_state*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_7,
 struct nfsd4_compound_state *VAR_8, struct nfsd4_open *VAR_9)
{
 __be32 VAR_10 = VAR_4;

 if (VAR_9->op_create == VAR_3) {
  if (VAR_9->op_createmode == VAR_2
      || VAR_9->op_createmode == VAR_1)
   VAR_10 = FUNC_0(VAR_7, VAR_8,
     VAR_9->op_bmval, VAR_6);
  else if (VAR_9->op_createmode == VAR_0)
   VAR_10 = FUNC_0(VAR_7, VAR_8,
     VAR_9->op_bmval, VAR_5);
 }

 return VAR_10;
}
