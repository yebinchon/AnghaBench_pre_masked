
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int rq_flags; } ;
struct svc_fh {int dummy; } ;
struct nfsd_file {struct file* nf_file; } ;
struct kvec {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
typedef int loff_t ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {scalar_t__ splice_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct svc_fh*,int ,struct nfsd_file**) ;
 int FUNC_1 (struct nfsd_file*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,struct svc_fh*,struct file*,int ,struct kvec*,int,unsigned long*,int *) ;
 scalar_t__ FUNC_3 (struct svc_rqst*,struct svc_fh*,struct file*,int ,unsigned long*,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;
 int FUNC_6 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;

__be32 FUNC_7(struct svc_rqst *VAR_2, struct svc_fh *VAR_3,
 loff_t VAR_4, struct kvec *VAR_5, int VAR_6, unsigned long *VAR_7,
 u32 *VAR_8)
{
 struct nfsd_file *VAR_9;
 struct file *VAR_10;
 __be32 VAR_11;

 FUNC_6(VAR_2, VAR_3, VAR_4, *VAR_7);
 VAR_11 = FUNC_0(VAR_2, VAR_3, VAR_0, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_9->nf_file;
 if (VAR_10->f_op->splice_read && FUNC_4(VAR_1, &VAR_2->rq_flags))
  VAR_11 = FUNC_3(VAR_2, VAR_3, VAR_10, VAR_4, VAR_7, VAR_8);
 else
  VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_10, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 FUNC_1(VAR_9);

 FUNC_5(VAR_2, VAR_3, VAR_4, *VAR_7);

 return VAR_11;
}
