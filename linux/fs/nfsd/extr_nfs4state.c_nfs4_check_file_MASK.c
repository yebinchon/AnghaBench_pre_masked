
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; int fh_export; } ;
struct nfsd_file {int dummy; } ;
struct nfs4_stid {int dummy; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfsd_file* FUNC_0 (struct nfs4_stid*,int) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,struct svc_fh*,int,struct nfsd_file**) ;
 int FUNC_2 (struct nfsd_file*) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,int ,int ,int) ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_4, struct svc_fh *VAR_5, struct nfs4_stid *VAR_6,
  struct nfsd_file **VAR_7, int VAR_8)
{
 int VAR_9 = (VAR_8 & VAR_3) ? VAR_1 : VAR_2;
 struct nfsd_file *VAR_10;
 __be32 VAR_11;

 VAR_10 = FUNC_0(VAR_6, VAR_8);
 if (VAR_10) {
  VAR_11 = FUNC_3(VAR_4, VAR_5->fh_export, VAR_5->fh_dentry,
    VAR_9 | VAR_0);
  if (VAR_11) {
   FUNC_2(VAR_10);
   goto out;
  }
 } else {
  VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_9, &VAR_10);
  if (VAR_11)
   return VAR_11;
 }
 *VAR_7 = VAR_10;
out:
 return VAR_11;
}
