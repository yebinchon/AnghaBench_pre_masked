
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct nfsd_file {int nf_file; } ;
struct kvec {int dummy; } ;
typedef int loff_t ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,struct nfsd_file**) ;
 int FUNC_1 (struct nfsd_file*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,int ,int ,struct kvec*,int,unsigned long*,int) ;
 int FUNC_3 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;
 int FUNC_4 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;

__be32
FUNC_5(struct svc_rqst *VAR_1, struct svc_fh *VAR_2, loff_t VAR_3,
    struct kvec *VAR_4, int VAR_5, unsigned long *VAR_6, int VAR_7)
{
 struct nfsd_file *VAR_8;
 __be32 VAR_9;

 FUNC_4(VAR_1, VAR_2, VAR_3, *VAR_6);

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_8->nf_file, VAR_3, VAR_4,
   VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_8);
out:
 FUNC_3(VAR_1, VAR_2, VAR_3, *VAR_6);
 return VAR_9;
}
