
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct svc_export {int ex_flags; } ;
struct nfsd4_readdir {int rd_rqstp; int rd_bmval; TYPE_1__* rd_fhp; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int fh_dentry; struct svc_export* fh_export; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct svc_export*,int ) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct svc_export*) ;
 int FUNC_7 (struct svc_export*) ;
 struct dentry* FUNC_8 (char const*,int ,int) ;
 scalar_t__ FUNC_9 (struct xdr_stream*,int *,struct svc_export*,struct dentry*,int ,int ,int) ;
 int FUNC_10 (int ,struct dentry**,struct svc_export**) ;
 scalar_t__ FUNC_11 (struct dentry*,struct svc_export*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static __be32
FUNC_13(struct xdr_stream *VAR_2, struct nfsd4_readdir *VAR_3,
   const char *VAR_4, int VAR_5)
{
 struct svc_export *VAR_6 = VAR_3->rd_fhp->fh_export;
 struct dentry *VAR_7;
 __be32 VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_8(VAR_4, VAR_3->rd_fhp->fh_dentry, VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_12(FUNC_1(VAR_7));
 if (FUNC_4(VAR_7)) {





  FUNC_5(VAR_7);
  return VAR_1;
 }

 FUNC_6(VAR_6);







 if (FUNC_11(VAR_7, VAR_6)) {
  int VAR_10;

  if (!(VAR_6->ex_flags & VAR_0)
    && !FUNC_2(VAR_3->rd_bmval)) {
   VAR_9 = 1;
   goto out_encode;
  }





  VAR_10 = FUNC_10(VAR_3->rd_rqstp, &VAR_7, &VAR_6);
  if (VAR_10) {
   VAR_8 = FUNC_12(VAR_10);
   goto out_put;
  }
  VAR_8 = FUNC_3(VAR_6, VAR_3->rd_rqstp);
  if (VAR_8)
   goto out_put;

 }
out_encode:
 VAR_8 = FUNC_9(VAR_2, ((void*)0), VAR_6, VAR_7, VAR_3->rd_bmval,
     VAR_3->rd_rqstp, VAR_9);
out_put:
 FUNC_5(VAR_7);
 FUNC_7(VAR_6);
 return VAR_8;
}
