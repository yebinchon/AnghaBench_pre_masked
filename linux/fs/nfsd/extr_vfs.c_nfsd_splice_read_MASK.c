
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {scalar_t__ rq_respages; scalar_t__ rq_next_page; } ;
struct svc_fh {int dummy; } ;
struct TYPE_2__ {struct svc_rqst* data; } ;
struct splice_desc {unsigned long total_len; TYPE_1__ u; int pos; int len; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*,struct svc_fh*,struct file*,int ,unsigned long*,int *,int ) ;
 int FUNC_1 (struct file*,struct splice_desc*,int ) ;
 int FUNC_2 (struct svc_rqst*,struct svc_fh*,int ,unsigned long) ;

__be32 FUNC_3(struct svc_rqst *VAR_1, struct svc_fh *VAR_2,
   struct file *VAR_3, loff_t VAR_4, unsigned long *VAR_5,
   u32 *VAR_6)
{
 struct splice_desc VAR_7 = {
  .len = 0,
  .total_len = *VAR_5,
  .pos = VAR_4,
  .u.data = VAR_1,
 };
 ssize_t VAR_8;

 FUNC_2(VAR_1, VAR_2, VAR_4, *VAR_5);
 VAR_1->rq_next_page = VAR_1->rq_respages + 1;
 VAR_8 = FUNC_1(VAR_3, &VAR_7, VAR_0);
 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
}
