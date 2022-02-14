
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd4_open {int op_share_access; int op_share_deny; scalar_t__ op_truncate; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_9, struct svc_fh *VAR_10, struct nfsd4_open *VAR_11, int VAR_12)
{
 __be32 VAR_13;

 if (VAR_11->op_truncate &&
  !(VAR_11->op_share_access & VAR_1))
  return VAR_8;

 VAR_12 |= VAR_4;

 if (VAR_11->op_share_access & VAR_0)
  VAR_12 |= VAR_3;
 if (VAR_11->op_share_access & VAR_1)
  VAR_12 |= (VAR_6 | VAR_5);
 if (VAR_11->op_share_deny & VAR_2)
  VAR_12 |= VAR_6;

 VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_7, VAR_12);

 return VAR_13;
}
