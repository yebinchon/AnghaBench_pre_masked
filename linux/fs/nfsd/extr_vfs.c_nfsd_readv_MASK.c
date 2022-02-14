
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct svc_fh {int dummy; } ;
struct kvec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct iov_iter*,int ,struct kvec*,int,unsigned long) ;
 int FUNC_1 (struct svc_rqst*,struct svc_fh*,struct file*,int ,unsigned long*,int *,int ) ;
 int FUNC_2 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;
 int FUNC_3 (struct file*,struct iov_iter*,int *,int ) ;

__be32 FUNC_4(struct svc_rqst *VAR_1, struct svc_fh *VAR_2,
    struct file *VAR_3, loff_t VAR_4,
    struct kvec *VAR_5, int VAR_6, unsigned long *VAR_7,
    u32 *VAR_8)
{
 struct iov_iter VAR_9;
 loff_t VAR_10 = VAR_4;
 ssize_t VAR_11;

 FUNC_2(VAR_1, VAR_2, VAR_4, *VAR_7);
 FUNC_0(&VAR_9, VAR_0, VAR_5, VAR_6, *VAR_7);
 VAR_11 = FUNC_3(VAR_3, &VAR_9, &VAR_10, 0);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7, VAR_8, VAR_11);
}
