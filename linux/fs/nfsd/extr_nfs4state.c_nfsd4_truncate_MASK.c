
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd4_open {int op_share_access; int op_truncate; } ;
struct iattr {int ia_size; int ia_valid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct svc_rqst*,struct svc_fh*,struct iattr*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline __be32
FUNC_1(struct svc_rqst *VAR_3, struct svc_fh *VAR_4,
  struct nfsd4_open *VAR_5)
{
 struct iattr VAR_6 = {
  .ia_valid = VAR_0,
  .ia_size = 0,
 };
 if (!VAR_5->op_truncate)
  return 0;
 if (!(VAR_5->op_share_access & VAR_1))
  return VAR_2;
 return FUNC_0(VAR_3, VAR_4, &VAR_6, 0, (time_t)0);
}
