
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd_file {int nf_file; } ;
struct file_lock {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,struct nfsd_file**) ;
 int FUNC_1 (struct nfsd_file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct file_lock*) ;

__attribute__((used)) static __be32 FUNC_4(struct svc_rqst *VAR_1, struct svc_fh *VAR_2, struct file_lock *VAR_3)
{
 struct nfsd_file *VAR_4;
 __be32 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_2(FUNC_3(VAR_4->nf_file, VAR_3));
  FUNC_1(VAR_4);
 }
 return VAR_5;
}
