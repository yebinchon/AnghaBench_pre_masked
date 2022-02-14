
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int rq_vers; int rq_flags; } ;
struct svc_fh {struct svc_export* fh_export; } ;
struct svc_export {int dummy; } ;
struct kvec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;
typedef int rwf_t ;
typedef int loff_t ;
typedef int __be32 ;
struct TYPE_4__ {unsigned int flags; } ;
struct TYPE_3__ {unsigned long io_write; } ;


 int FUNC_0 (struct svc_export*) ;
 scalar_t__ FUNC_1 (struct svc_export*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct svc_rqst*) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct iov_iter*,int ,struct kvec*,int,unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct svc_rqst*,struct svc_fh*,int ,int) ;
 int FUNC_11 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;
 int FUNC_12 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;
 int FUNC_13 (struct file*,struct iov_iter*,int *,int ) ;
 int FUNC_14 (struct file*) ;

__be32
FUNC_15(struct svc_rqst *VAR_9, struct svc_fh *VAR_10, struct file *VAR_11,
    loff_t VAR_12, struct kvec *VAR_13, int VAR_14,
    unsigned long *VAR_15, int VAR_16)
{
 struct svc_export *VAR_17;
 struct iov_iter VAR_18;
 __be32 VAR_19;
 int VAR_20;
 int VAR_21;
 loff_t VAR_22 = VAR_12;
 unsigned int VAR_23 = VAR_5->flags;
 rwf_t VAR_24 = 0;

 FUNC_12(VAR_9, VAR_10, VAR_12, *VAR_15);

 if (FUNC_9(VAR_2, &VAR_9->rq_flags))






  VAR_5->flags |= VAR_1;

 VAR_17 = VAR_10->fh_export;
 VAR_21 = (VAR_9->rq_vers == 2) && FUNC_1(VAR_17);

 if (!FUNC_0(VAR_17))
  VAR_16 = VAR_0;

 if (VAR_16 && !VAR_21)
  VAR_24 |= VAR_3;

 FUNC_5(&VAR_18, VAR_4, VAR_13, VAR_14, *VAR_15);
 VAR_20 = FUNC_13(VAR_11, &VAR_18, &VAR_22, VAR_24);
 if (VAR_20 < 0)
  goto out_nfserr;
 VAR_8.io_write += *VAR_15;
 FUNC_4(VAR_11);

 if (VAR_16 && VAR_21) {
  VAR_20 = FUNC_14(VAR_11);
  if (VAR_20 < 0)
   FUNC_7(FUNC_6(FUNC_2(VAR_9),
       VAR_7));
 }

out_nfserr:
 if (VAR_20 >= 0) {
  FUNC_11(VAR_9, VAR_10, VAR_12, *VAR_15);
  VAR_19 = VAR_6;
 } else {
  FUNC_10(VAR_9, VAR_10, VAR_12, VAR_20);
  VAR_19 = FUNC_8(VAR_20);
 }
 if (FUNC_9(VAR_2, &VAR_9->rq_flags))
  FUNC_3(VAR_23, VAR_1);
 return VAR_19;
}
